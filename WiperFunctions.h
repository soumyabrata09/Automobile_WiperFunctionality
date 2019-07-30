/*
 * WiperFunctions.h
 *
 *  Created on: Jul 31, 2019
 *      Author: Sam
 */

//#ifndef WIPERFUNCTIONS_H_
//#define WIPERFUNCTIONS_H_
//
//
//
//#endif /* WIPERFUNCTIONS_H_ */

#ifndef WIPERFUNCTIONS_H_INCLUDED
#define WIPERFUNCTIONS_H_INCLUDED

void SignalToWiperRelay(int BCMModuleState);
void switchONTheON_OFFRelay();

void switchONTheRun_AccRelay();

void switchONWasher_WiperSwitch();

void LowSpeedOperation();
void ActivateLowRelay();

void HighSpeedOperation();
void ActivateHighRelay();

void IntermittentOperation();
void IntermittentSpeedRelay();

void ParkPosition();
#endif // WIPERFUNCTIONS_H_INCLUDED

