// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Drive.h"
#include <frc/smartdashboard/SmartDashboard.h>

using namespace frc;

Drive::Drive() {
    // The 0 is the slot id
    driveLeft.Config_kP(0, Constants::DriveValues::driveLeftPID::kP);
    driveLeft.Config_kI(0, Constants::DriveValues::driveLeftPID::kI);
    driveLeft.Config_kD(0, Constants::DriveValues::driveLeftPID::kD);
    driveLeft.Config_kF(0, Constants::DriveValues::driveLeftPID::kF);
    
    driveRight.Config_kP(0, Constants::DriveValues::driveRightPID::kP);
    driveRight.Config_kI(0, Constants::DriveValues::driveRightPID::kI);
    driveRight.Config_kD(0, Constants::DriveValues::driveRightPID::kD);
    driveRight.Config_kF(0, Constants::DriveValues::driveRightPID::kF);
};



// This method will be called once per scheduler run
void Drive::Periodic() {
    SmartDashboard::PutNumber("Left Velocity", driveLeft.GetSelectedSensorVelocity(Constants::DriveValues::driveLeftPID::leftMotorPIDController));
    SmartDashboard::PutNumber("Right Velocity", driveRight.GetSelectedSensorVelocity(Constants::DriveValues::driveRightPID::rightMotorPIDController));
}