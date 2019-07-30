/*
 * Drive.c
 *
 *  Created on: Jul 31, 2019
 *      Author: Sam
 */
#ifndef DRIVE_C_INCLUDED
#define DRIVE_C_INCLUDED

#include "Drive.h"


int PowerOn(int value)
{
    if(0 == value)
    {
      printf("power Off... Please switch on the Power \n ");
      return 0;
    }

    if(1 == value)
    {
      printf("power Switchd on \n");
      return 1;
    }
}
#endif // DRIVE_C_INCLUDED


