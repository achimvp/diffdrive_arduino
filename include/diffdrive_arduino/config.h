#ifndef DIFFDRIVE_ARDUINO_CONFIG_H
#define DIFFDRIVE_ARDUINO_CONFIG_H

#include <string>


struct Config
{
  std::string left_wheel_name = "left_wheel";
  std::string right_wheel_name = "right_wheel";
  float loop_rate = 30;
  std::string device = "/dev/ttyUSB0";
  int baud_rate = 57600;
  int timeout = 1000;
  int enc_counts_per_rev_left = 6533;
  int enc_counts_per_rev_right = 6533;
  // int enc_counts_per_rev_left = 7200;
  // int enc_counts_per_rev_right = 7200;
  std::string camera_base_name = "camera_tower_mobile_joint";
  std::string camera_camera_name = "camera_joint";
};


#endif // DIFFDRIVE_ARDUINO_CONFIG_H