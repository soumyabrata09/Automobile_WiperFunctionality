//
//int main(int argc, char **argv) {
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>

#include "WiperFunctions.h"
#include "Drive.h"

int ActivateBCMModule(int status, int FrontWasher) {
	int Flag = 0;
	if (1 == status && 1 == FrontWasher) {
		printf("BCM Module Activated!\n");
		Flag = 1;
	} else {
		printf(
				"BCM Module and FrontWasher is INACTIVE ..please check the power supply !\n");
		Flag = 0;
	}
	return Flag;
}

int input() {
	int number;
	scanf("%d", &number);
	return (number);
}
int main() {

	printf("Process starts!\n");

	int FrontWasher = 0;
	int keyStatus = PowerOn(1);

	if (keyStatus == 1)
		FrontWasher = 1;

	int BCMModuleState = ActivateBCMModule(keyStatus, FrontWasher);

	SignalToWiperRelay(BCMModuleState);

	int choice;
	printf("Press 1 for LOW SPEED OPERATION\n");
	printf("Press 2 for HIGH SPEED OPERATION \n");
	printf("Press 3 for INTERMITTENT OPERATION \n");
	printf("Press 4 for PARK POSITION \n");

	printf("Enter your choice:\n");
	choice = input();

	switch (choice) {
	case 1: {
		LowSpeedOperation();
		break;
	}
	case 2: {
		HighSpeedOperation();
		break;
	}
	case 3: {
		IntermittentOperation();
		break;
	}
	case 4: {
		ParkPosition();
		break;
	}
	default:
		printf("wrong Input\n");
	}

	return 0;
}
