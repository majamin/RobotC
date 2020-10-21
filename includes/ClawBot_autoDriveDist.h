// function to run autoDrive for specified distance
void autoDriveDist(int speed, int dist)
{
	SensorValue[quad01] = 0;										// reset the OSE value to 0
	SensorValue[quad02] = 0;										// reset the OSE value to 0
	int ticks = dist/(4*PI) * 360;							// convert distance into OSE values
	while (abs(SensorValue[quad01]) < ticks*0.6) // while quadLeft is less 60% ticks
	{
		autoDrive(speed);													// run autoDrive at full speed
	}
	while (abs(SensorValue[quad01]) < ticks) 		// while quadLeft is less ticks
	{
		autoDrive(speed/3);												// run autoDrive at 1/3 speed
	}
	autoDriveTime(-speed/2, 50);								// briefly run backwards
	autoDrive(0);																// stop
}
