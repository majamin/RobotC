#pragma config(UserModel, "ClawBot_Config.h")

// Load helpful commands
#include "ClawBot_wayClear.h"
#include "ClawBot_autoDrive.h"
#include "ClawBot_autoDriveTime.h"		// (speed, mSec)
#include "ClawBot_autoDriveDist.h"
#include "ClawBot_autoTurn.h"
#include "ClawBot_autoTurnTime.h"
#include "ClawBot_autoTurnGyro.h"

task main()
{
	while(true){
		if(SensorValue[button01] == 1)
		{
			// Completely clear out any previous readings
			SensorType[gyro01] = sensorNone;
			wait1Msec(500);
			// Reconfigure the post as a Gyro sensor and allow time for calibration
			SensorType[gyro01] = sensorGyro;
			wait1Msec(1500);

			autoDriveTime(50, 2000);

			autoDrive(0);

			autoTurnTime(-50, 2000);

			autoDrive(0);
		}
	}
}
