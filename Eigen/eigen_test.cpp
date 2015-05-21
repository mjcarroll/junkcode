#include <Eigen/Geometry>
#include <iostream>

std::ostream& operator<<(std::ostream& os, Eigen::AngleAxisf aa)
{
  os << aa.toRotationMatrix() << std::endl;
}

int main(int argc, char** argv)
{
  Eigen::Vector3f a1, a2, a3;
  a1 = Eigen::Vector3f::UnitZ();
  a2 = Eigen::Vector3f::UnitY();
  a3 = Eigen::Vector3f::UnitX();

  std::cout << Eigen::AngleAxisf(1.0, a1) << std::endl;
  std::cout << Eigen::AngleAxisf(1.0, a2) << std::endl;
  std::cout << Eigen::AngleAxisf(1.0, a3) << std::endl;

  Eigen::Matrix3f m = Eigen::Matrix3f::Identity();

  m = Eigen::AngleAxisf(1.0, a1)
    * Eigen::AngleAxisf(1.0, a2)
    * Eigen::AngleAxisf(1.0, a3);
  
  std::cout <<  m << std::endl;
}
