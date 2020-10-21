#pragma config(UserModel, "ClawBot_Config.h") // don't put anything above this line!!!

// Include Manual Control functions
#include "ClawBot_goManual.h"

// Here's the main task
task main()
{
	// Demo code: ClawBot drives forward for 1 second (1000 mS)
	//
	motor[FLDrive] = 30;
	motor[FRDrive] = 30;
	motor[RLDrive] = 30;
	motor[RRDrive] = 30;

	wait1Msec(1000);

	// If the main code finishes, resume with manual control
	while(true)
		{
			goManual();
		}
}
