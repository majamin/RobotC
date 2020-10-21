// functions to the the robot at a specified speed
// positive = right turn, negative = left turn

void autoTurn(int speed)
{
	motor[FRDrive] = -speed;
	motor[FLDrive] = speed;
	motor[RRDrive] = -speed;
	motor[RLDrive] = speed;
}
