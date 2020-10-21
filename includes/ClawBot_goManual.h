// Manual control function for ClawBot
void goManual()
{
	// Tank motors
	motor[FLDrive]  = vexRT[Ch2]/2 + vexRT[Ch1]/2;
	motor[RLDrive]  = vexRT[Ch2]/2 + vexRT[Ch1]/2;
	motor[FRDrive] = vexRT[Ch3]/2 - vexRT[Ch1]/2;
	motor[RRDrive] = vexRT[Ch3]/2 - vexRT[Ch1]/2;

	// Lift motor
	if (vexRT[Btn6U] == 1)
	{
		motor[liftMotor] = 30;
	}
	else if (vexRT[Btn6D] == 1)
	{
		motor[liftMotor] = -30;
	}
	else
	{
		motor[liftMotor] = 0;
	}

	// Claw motor
	if (vexRT[Btn5U] == 1)
	{
		motor[clawMotor] = -30;
	}
	else if (vexRT[Btn5D] == 1)
	{
		motor[clawMotor] = 30;
	}
	else
	{
		motor[clawMotor] = 0;
	}
}
