// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

class Constants
{
public:
  Constants();
  class OperatorConstants
  {
  public:
    static const int kDriverControllerPort = 0;
  };

  class DriveValues
  {
  public:
    const static int driveLeftID = 2;
    const static int followerLeft = 13;
    const static bool driveLeftInverted = false;
    const static bool followerLeftInverted = false;

    const static int driveRightID = 4;
    const static int followerRight = 14;
    const static bool driveRightInverted = true;
    const static bool followerRightInverted = true;

    constexpr static double maxSpeed = 0.5;

    class driveLeftPID
    {
    public:
      constexpr static double kP = 0.45;
      constexpr static double kI = 0;
      constexpr static double kD = 0;
      constexpr static double kF = 0.225;

      // Which controller to use, 0 = primary, 1 = aux
      const static int leftMotorPIDController = 1;
    };

    class driveRightPID
    {
    public:
      constexpr static double kP = 0.45;
      constexpr static double kI = 0;
      constexpr static double kD = 0;
      constexpr static double kF = 0;

      // Which controller to use, 0 = primary, 1 = aux
      const static int rightMotorPIDController = 1;
    };
  };

  class Shooter
  {
  public:
    class Tilt
    {
    public:
      const static int tilt = 6;
      constexpr static double kP = 0.01;
      constexpr static double kI = 0;
      constexpr static double kD = 0;
    };

    class Propulsion
    {
    public:
      const static int shooterRight = 7;
      const static int shooterLeft = 8;

      const static bool shooterRightInverted = false;
      const static bool shooterLeftInverted = true;

      const static int feedBackSensor = 0;

      constexpr static double kP = 0.2;
      constexpr static double kI = 0;
      constexpr static double kD = 0;
      constexpr static double kF = 0.04;
    };

    class Conveyor
    {
      const static int conveyor = 3;
      const static int beaterBar = 11;
    };
  };
};
