// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/TeleopDrive.h"

TeleopDrive::TeleopDrive(double leftY, double rightX, Drive* drive) {
  this->leftY = &leftY;
  this->rightX = &rightX;
  this->drive = drive;
  // Use addRequirements() here to declare subsystem dependencies.
  AddRequirements(drive);
}

// Called when the command is initially scheduled.
void TeleopDrive::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void TeleopDrive::Execute() {
  drive->drive(*leftY * Constants::DriveValues::maxSpeed);
}

// Called once the command ends or is interrupted.
void TeleopDrive::End(bool interrupted) {}

// Returns true when the command should end.
bool TeleopDrive::IsFinished() {
  return false;
}
