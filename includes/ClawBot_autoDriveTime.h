// drive forward for a specified amount of time
void autoDriveTime(int speed, int mSec)
{
	autoDrive(speed);
	wait1Msec(mSec);
	autoDrive(0);
}
