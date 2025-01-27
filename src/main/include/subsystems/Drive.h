// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>
#include <ctre/Phoenix.h>
#include <Constants.h>

using namespace ctre::phoenix;

class Drive : public frc2::SubsystemBase {

 public:
  Drive();

  void drive(double speed) {
    driveLeft.Set(ControlMode::Velocity, speed);
    driveRight.Set(ControlMode::Velocity, speed);

    followerLeft.Follow(driveLeft);
    followerRight.Follow(driveRight);
  };


  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;

 private:
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.

  TalonSRX driveLeft{Constants::DriveValues::driveLeftID};
  TalonSRX driveRight{Constants::DriveValues::driveRightID};
  VictorSPX followerLeft{Constants::DriveValues::followerLeft};
  VictorSPX followerRight{Constants::DriveValues::followerRight};
};