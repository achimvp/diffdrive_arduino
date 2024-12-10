#ifndef DIFFDRIVE_ARDUINO_CAMERA_TURRET_H
#define DIFFDRIVE_ARDUINO_CAMERA_TURRET_H

#include <string>



class CameraTurret
{
    public:

    std::string base_name = "";
    std::string camera_name = "";
    int cmd[] = {0,0};
    int pos[] = {0,0};
    double vel = 0;
    double eff = 0;
    double velSetPt = 0;
    double rads_per_count = 0;

    CameraTurret() = default;

    CameraTurret(const std::string &base_name, const std::string &camera_name);
    
    void setup(const std::string &base_name, const std::string &camera_name);

    // Maybe we can equip the class with a function to compute the attitude of the camera

};


#endif // DIFFDRIVE_ARDUINO_CAMERA_TURRET_H