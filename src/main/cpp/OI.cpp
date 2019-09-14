/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"
#include <WPILib.h>
#include "ctre/Phoenix.h"
#include "commands/MoveArm.h"

OI::OI() : leftController(new Joystick(0)), rightController(new Joystick(1)) //armMoveUp(new JoystickButton(, 5)), armMoveDown(new JoystickButton(gameController, 6))
{
  //armMoveUp->WhileHeld(new MoveArm(-0.5));
  //armMoveDown->WhileHeld(new MoveArm(0.5));

}

Joystick* OI::getLeft(){
  return leftController;
}
Joystick* OI::getRight() {
  return rightController;
}