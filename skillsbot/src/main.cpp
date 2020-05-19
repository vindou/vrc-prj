/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\rever                                            */
/*    Created:      Fri May 15 2020                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// LeftIntake           motor         5               
// RightIntake          motor         6               
// LeftFrontMotor       motor         1               
// Controller1          controller                    
// RightFrontMotor      motor         2               
// LeftBackMotor        motor         3               
// RightBackMotor       motor         4               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;



void usercontrol() {

  while (1) {

    

    // I DONT KNOW WHATS GOING ON
    LeftFrontMotor.spin(forward, Controller1.Axis4.position()+Controller1.Axis3.position()+Controller1.Axis1.position(), vex::velocityUnits::pct);

    RightFrontMotor.spin(forward, Controller1.Axis3.position()-Controller1.Axis4.position()-Controller1.Axis1.position(), vex::velocityUnits::pct);
    
    LeftBackMotor.spin(forward, Controller1.Axis3.position()-Controller1.Axis4.position()+Controller1.Axis1.position(), vex::velocityUnits::pct);
    
    RightBackMotor.spin(forward, Controller1.Axis3.position()+Controller1.Axis4.position()-Controller1.Axis1.position(), vex::velocityUnits::pct);

    RightIntake.spin(forward, Controller1.ButtonR1.pressing()*100-Controller1.ButtonR2.pressing()*100, vex::velocityUnits::pct );
    LeftIntake.spin(forward, Controller1.ButtonL1.pressing()*100-Controller1.ButtonL2.pressing()*100, vex::velocityUnits::pct );

    
    

    
  }
  
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  usercontrol();

}  
