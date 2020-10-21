// is the way clear?
bool wayClear()
{
	bool value = true;
	if(SensorValue(sonar01) < 22 || SensorValue(sonar01) <= 0)
		value = false;
	else
		value = true;
	return(value);
}
