#pragma config(Motor,  motorA,          draw,          tmotorNXT, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

	float power=0;
task main()
{
while(power<30){
	motor[draw]=power;
	wait1Msec(1000);
	power=power+2;
	}
}