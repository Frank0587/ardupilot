#include "mode.h"
#include "Plane.h"

void ModeStabilize::update()
{
    plane.nav_roll_cd = 0;
    plane.nav_pitch_cd = 0;

    // add STAB_PITCH_DOWN as target when no stick input        
    plane.adjust_nav_pitch_throttle();
    if (plane.fly_inverted()) {
        plane.nav_pitch_cd = -plane.nav_pitch_cd;
    }

}

void ModeStabilize::run()
{
    plane.stabilize_roll();
    plane.stabilize_pitch();
    stabilize_stick_mixing_direct();
    plane.stabilize_yaw();

    output_pilot_throttle();
}
