// function to turn the robot a specified number of degrees at a specified speed
// +speed = right, -speed = left ... lower speeds are more accurate. 60 works well.
// degs is always positive
void autoTurnGyro(int speed, int degs)
{
	SensorValue(gyro01) = 0;													// reset the gyro to zero
	int ticks = degs*10;														// gyro ticks = 1/10 degree
	while( abs(SensorValue(gyro01)) < ticks*0.6 ) 			// full speed for first 60% of ticks
	{
		autoTurn(speed);
	}
	while( abs(SensorValue(gyro01)) < ticks*0.8 )				// start slowing at 80% of ticks
	{
		autoTurn(speed*0.9);
	}
	while( abs(SensorValue(gyro01)) < ticks )				// very slow for last 20% of ticks
	{
		autoTurn(speed*0.7);
	}
	autoTurnTime(-speed/2, 50);												// briefly turn the bot at 1/2 speed to counter momentum
}
