// 
// SPAN Lab (The University of Utah) and Xandem Technology Copyright 2012-2013
// 
// Author(s):
// Maurizio Bocca (maurizio.bocca@utah.edu)
// Joey Wilson (joey@xandem.com)
// Neal Patwari (neal@xandem.com)
// 
// This file is part of multi-Spin.
// multi-Spin is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// multi-Spin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// You should have received a copy of the GNU General Public License
// along with multi-Spin. If not, see <http://www.gnu.org/licenses/>.
// 

#include "cc2530.h" // PATCHED

void ledInit(void)
{
  P1DIR |= 0x01; // PATCHED: only one led
}

void ledOn(char ledID) // PATCHED: only one led
{
  if(ledID == 1) {
    P1_0 = 0;
  }
  return;
}

void ledOff(char ledID) // PATCHED: only one led
{
  if(ledID == 1){
    P1_0 = 1;
  }
  return;
}

void ledToggle(char ledID) // PATCHED: only one led
{
  if(ledID == 1) {
    P1_0 ^= 1;
  }
  return;
}