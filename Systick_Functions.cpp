/*
  File:         Systick_Functions.cpp
  Version:      0.0.1
  Date:         19-Mar-2019
  Revision:     19-Mar-2019
  Author:       Jerome Drouin (jerome.p.drouin@gmail.com)

  https://github.com/newEndeavour/Systick_Functions

  The SysTick_Functions library for Arduino allows implementation of delays 
  under a microsecond. Note: The functions will not work, and should not 
  be used in situations where the required delay exceeds or is close to a 
  millisecond, i.e. 1000 micros). 

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

*/


#include "Systick_Functions.h"


// delayMicroseconds_SysTick returns ticks
int delayMicroseconds_SysTick(int tmicros) 
{
int ati=tmicros * (SysTick->LOAD+1) / 1000 - 300;
int sta,sto,tik;

  if (tmicros>999)
    return -1;
    
  sta = SysTick->VAL;
  do {
    sto = SysTick->VAL;
    if (sto>sta)
      sta += SysTick->LOAD;
    tik = sta - sto;
  } while( tik < ati);
    
  //return ticks  
  return tik;       
}



// delaySysTick, returns time in microseconds
float delaySysTick(int ticks) 
{
int ati=ticks;
int sta,sto,tik;

  if (ticks>SysTick->LOAD)
    return -1;
    
  sta = SysTick->VAL;
  do {
    sto = SysTick->VAL;
    if (sto>sta)
      sta += SysTick->LOAD;
    tik = sta - sto;
  } while( tik < ati);

  //return ticks
  return tik / ((SysTick->LOAD+1) / 1000);       
}

  
//EndofFile
