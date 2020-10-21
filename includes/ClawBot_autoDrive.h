// drive straight at a certain speed

void autoDrive(int speed)
{
	motor[FRDrive] = speed;
	motor[FLDrive] = speed;
	motor[RRDrive] = speed;
	motor[RLDrive] = speed;
}
