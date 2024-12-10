#include "diffdrive_arduino/camera_turret.h"


CameraTurret::CameraTurret(const std::string &base_name, const std::string &camera_name)
{
  setup(base_name, camera_name);
}


void CameraTurret::setup(const std::string &base_name, const std::string &camera_name)
{
  base_name = base_name;
  camera_name = camera_name;
}