#include <rclcpp/rclcpp.hpp>
#include <visualization_msgs/msg/marker_array.hpp>
// #include <moveit/move_group_interface/move_group_interface.h>
#include <Eigen/Dense>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

class Optimization : public rclcpp::Node {
public:
    // Optimization() : Node("Optimization"), move_group("Arm") {
    //     // Initialize MoveIt's move_group for the manipulator
    // }
    
    Optimization() : Node("Optimization") {
        // Initialize MoveGroupInterface with a shared pointer to the current node
        auto shared_node = std::shared_ptr<rclcpp::Node>(this, [](auto) {});
        // move_group = std::make_shared<moveit::planning_interface::MoveGroupInterface>(shared_node, "Arm");
        //visualize poses in rviz
        vis_pub_ = this->create_publisher<visualization_msgs::msg::MarkerArray>("visualization_marker_array", 10);

        std::cout << "--------------------------------------------initialized ----------------";


    }

    void publishPoseAsMarker(const geometry_msgs::msg::Pose& pose) {
        visualization_msgs::msg::Marker marker;
        marker.header.frame_id = "base_link";  // Replace with your robot's base frame
        marker.header.stamp = this->get_clock()->now();
        marker.ns = "pose_visualization";
        marker.id = 0;
        marker.type = visualization_msgs::msg::Marker::ARROW;
        marker.action = visualization_msgs::msg::Marker::ADD;
        marker.pose = pose;
        marker.scale.x = 0.1;  // Scale as appropriate
        marker.scale.y = 0.02;
        marker.scale.z = 0.02;
        marker.color.a = 1.0;  // Don't forget to set the alpha!
        marker.color.r = 1.0;
        marker.color.g = 0.0;
        marker.color.b = 0.0;

        visualization_msgs::msg::MarkerArray marker_array;
        marker_array.markers.push_back(marker);

        vis_pub_->publish(marker_array);
    }

    bool getUserApproval() {
        std::string input;
        std::cout << "--------------------------------------------Execute this movement? (y/n):  ----------------";
        std::cin >> input;
        return input == "y" || input == "Y";
    }

    // void executeMovements(const std::string& csv_file) {
    //     std::ifstream file(csv_file);
    //     std::string line;
    //     while (std::getline(file, line)) {
    //         std::vector<double> pose = parseCSVLine(line);
    //         if (pose.size() == 6) {
    //             geometry_msgs::msg::Pose target_pose;
    //             target_pose.position.x = pose[0];
    //             target_pose.position.y = pose[1];
    //             target_pose.position.z = pose[2];

    //             // Convert xn, yn, zn to a quaternion
    //             target_pose.orientation = vectorToQuaternion(pose[3], pose[4], pose[5]);

    //             move_group->setPoseTarget(target_pose);
    //             publishPoseAsMarker(target_pose);

    //             if (getUserApproval()) {
    //                 move_group->move();  // Execute only if user approves
    //             }
    //         }
    //     }
    // }

private:
    // publisher for visualizing poses
    rclcpp::Publisher<visualization_msgs::msg::MarkerArray>::SharedPtr vis_pub_;
    // idk about adding this vvv
    std::vector<double> parseCSVLine(const std::string& line) {
        std::vector<double> result;
        std::stringstream s(line);
        std::string cell;

        while (std::getline(s, cell, ',')) {
            result.push_back(std::stod(cell));
        }
        return result;
    }
    // to here 

    // std::shared_ptr<moveit::planning_interface::MoveGroupInterface> move_group;
    // Function to convert a direction vector into a quaternion
    geometry_msgs::msg::Quaternion vectorToQuaternion(double xn, double yn, double zn) {
        Eigen::Vector3d axis_vector(xn, yn, zn);
        axis_vector.normalize();  // Normalize the vector

        // Assuming you want to align this vector with the end effector's z-axis
        Eigen::Vector3d z_axis(0, 0, 1);
        Eigen::Quaterniond quat = Eigen::Quaterniond::FromTwoVectors(z_axis, axis_vector);

        geometry_msgs::msg::Quaternion geometry_quat;
        geometry_quat.x = quat.x();
        geometry_quat.y = quat.y();
        geometry_quat.z = quat.z();
        geometry_quat.w = quat.w();
        return geometry_quat;
    }
};

int main(int argc, char** argv) {
    std::cout << "--------------------------------------------started ----------------";

    rclcpp::init(argc, argv);
    auto node = std::make_shared<Optimization>();
    // auto const node = std::make_shared<rclcpp::Node>(
    // "optimization",
    // rclcpp::NodeOptions().automatically_declare_parameters_from_overrides(true)
    // );

    if (argc > 1) {
        // node->executeMovements(argv[1]);  // Pass the CSV file path as a command-line argument
    } else {
        RCLCPP_ERROR(node->get_logger(), "No CSV file provided");
    }

    rclcpp::shutdown();
    return 0;
}