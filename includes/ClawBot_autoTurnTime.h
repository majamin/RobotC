// turn for a specified amount of time at speed
void autoTurnTime(int speed, int mSec)
{
	motor[FRDrive] = -speed;
	motor[FLDrive] = speed;
	motor[RRDrive] = -speed;
	motor[RLDrive] = speed;
	wait1Msec(mSec);
	autoDrive(0);
}
