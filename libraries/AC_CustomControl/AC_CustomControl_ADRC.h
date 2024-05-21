#pragma once

#include "AC_CustomControl_config.h"

#if AP_CUSTOMCONTROL_ADRC_ENABLED

#include "AC_CustomControl_Backend.h"
#include <AP_Common/AP_Common.h>
#include <AP_Param/AP_Param.h>
#include "AC_ADRC/AC_ADRC.h"

class AC_CustomControl_ADRC : public AC_CustomControl_Backend {
public:
    AC_CustomControl_ADRC(AC_CustomControl& frontend, AP_AHRS_View*& ahrs, AC_AttitudeControl*& att_control, AP_MotorsMulticopter*& motors, float dt);


    Vector3f update(void) override;
    void reset(void) override;

    // user settable parameters
    static const struct AP_Param::GroupInfo var_info[];

protected:
    // declare parameters here
    AC_ADRC _rate_roll_cont;
    AC_ADRC _rate_pitch_cont;
    AC_ADRC _rate_yaw_cont;
};

#endif  // AP_CUSTOMCONTROL_ADRC_ENABLED
