#include <eigen3/Eigen/Dense>
#include <iostream>

int main() {
    Eigen::Vector3d Lidar_T_wrt_IMU;
    Eigen::Matrix3d Lidar_R_wrt_IMU;
    Lidar_T_wrt_IMU<<0.0, 0.0, 0.05;
    Lidar_R_wrt_IMU<<1.0, 0.0, 0.0,
                          0.0, 1.0, 0.0,
                          0.0, 0.0, 1.0;
    Eigen::Affine3d T_IL = Eigen::Affine3d::Identity();
    T_IL.translation() = Lidar_T_wrt_IMU;
    T_IL.linear() = Lidar_R_wrt_IMU;

    printf("T_IL translation: (%f, %f, %f)", 
                    T_IL.translation().x(), T_IL.translation().y(), T_IL.translation().z());
    return 0;
}