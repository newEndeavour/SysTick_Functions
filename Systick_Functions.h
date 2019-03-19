/*
  File:         Systick_Functions.h
  Version:      0.0.1
  Date:         19-Mar-2019
  Revision:     19-Mar-2019
  Author:       Jerome Drouin (jerome.p.drouin@gmail.com)

  https://github.com/newEndeavour/Systick_Functions

  The SysTick_Functions library for Arduino allows implementation of delays 
  under a microsecond, or in situations where the sampling granularity of the 
  the function delayMicroseconds (4 mic) can present a problem, notably, for 
  capacitive sensors measuring very small capacitance and where 4 micros error 
  is not acceptable.
  WARNING: The functions will not work, and should not be used in situations 
  where the required/measured delay exceeds or is close to a millisecond, 
  i.e. 1000 micros. 

  Copyright (c) 2018-2019 Jerome Drouin  All rights reserved.

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.
 
  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
 
  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.

  Editions:
  - 0.0.1	: First version
  
*/


// ensure this library description is only included once
#ifndef Systick_Functions_h
#define Systick_Functions_h

#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif


int delayMicroseconds_SysTick(int tmicros);
float delaySysTick(int ticks);
  
#endif
//EndofFile


