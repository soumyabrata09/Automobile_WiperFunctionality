/*
 * WiperFunctions.c
 *
 *  Created on: Jul 31, 2019
 *      Author: Sam
 */
#ifndef WIPERFUNCTIONS_C_INCLUDED
#define WIPERFUNCTIONS_C_INCLUDED
#include "WiperFunctions.h"

void SignalToWiperRelay(int BCMModuleState)
{
    if( 1 == BCMModuleState)
    {
        switchONTheON_OFFRelay();
        switchONTheRun_AccRelay();
        switchONWasher_WiperSwitch();
    }
    else
        printf("BCMModuleState is INACTIVE\n");
}
void switchONTheON_OFFRelay()
{
     printf("switchONTheON_OFFRelay\n");
//    return 0;
}

void switchONTheRun_AccRelay()
{
    printf("switchONTheRun_AccRelay \n");
 //   return 0;
}

void switchONWasher_WiperSwitch()
{
    printf("switchONWasher_WiperSwitch\n");
//return 0;
}

void  ActivateLowRelay()
{
    int speed = 30;
    printf("%d \n",speed);
}

void LowSpeedOperation()
{
     printf("Operating the Wiper in LowSpeed :");
    ActivateLowRelay();
}

void ActivateHighRelay()
{
    int speed = 90;
    printf("%d \n",speed);
}
void HighSpeedOperation(){
    printf("Operating the Wiper in HighSpeed :");
    ActivateHighRelay();
}

void IntermittentSpeedRelay()
{
    int speed = 50;
    printf("%d \n",speed);
}
void IntermittentOperation(){
    printf("Operating the Wiper in Intermittent speed :");
}

void ParkPosition(){
    printf("Operating the Wiper in ParkPosition \n");
}

#endif


