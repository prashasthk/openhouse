/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/MoveArm.h"
#include "Robot.h"
#include <iostream>

MoveArm::MoveArm(double input) {
  Requires(Robot::m_arm);
  val = input;
  std::cout << "hi" << std::endl;
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void MoveArm::Initialize() {
  std::cout << "yo" << std::endl;
}

// Called repeatedly when this Command is scheduled to run
void MoveArm::Execute() {
    Robot::m_arm->moveArm(val);
}

// Make this return true when this Command no longer needs to run execute()
bool MoveArm::IsFinished() { return false; }

// Called once after isFinished returns true
void MoveArm::End() {
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MoveArm::Interrupted() {
  Robot::m_arm->moveArm(0);
}
