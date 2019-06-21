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

OI::OI() : gameController(new Joystick(0)), armMoveUp(new JoystickButton(gameController, 5)), armMoveDown(new JoystickButton(gameController, 6))
{
  armMoveUp->WhileHeld(new MoveArm(-0.5));
  armMoveDown->WhileHeld(new MoveArm(0.5));

}

Joystick* OI::getGameController(){
  return gameController;
}