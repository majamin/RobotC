#pragma config(UserModel, "ClawBot_Config.h") // don't put anything above this line!!!

// Here's the main task
task main()
{
	// go in a circle
	// ClawBot should move in a circle as defined by r2
	// r1 is not used, but is the inner radius

	// Wheel Base width
	float H = 30.5; // centimeters

	// desired outer radius
	// R must be > 30.5/2 = 15.25
	float R = 100; // centimeters

	// Factor between left and right drive
	float alpha = (R - (H/2))/(R + (H/2));

	// motors
	float power = 100;
	motor[leftDrive] = power;
	motor[rightDrive] = power * alpha;

	// continue for a few seconds 1000 = 1 second
	wait1Msec(3000);
}
