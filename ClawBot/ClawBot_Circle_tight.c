#pragma config(UserModel, "ClawBot_Config.h") // don't put anything above this line!!!

// Here's the main task
task main()
{
	// go in a tight circle

	// motors
	motor[leftDrive] = 0;
	motor[rightDrive] = 127;

	// continue for a few seconds 1000 = 1 second
	wait1Msec(3000);
}
