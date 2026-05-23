/**
 * @file    RM3100.hpp
 * @brief   Magnetometer data acquisition module
 * @author	Dr. Klaus Schaefer
 * @copyright 	Copyright 2026 Dr. Klaus Schaefer. All rights reserved.
 * @license 	This project is released under the GNU Public License GPL-3.0

    <Larus Flight Sensor Firmware>

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

 **************************************************************************/

#ifndef RM3100_H_
#define RM3100_H_

#include "stdint.h"

class mag_data
{
public:
	int32_t magx;
	int32_t magy;
	int32_t magz;
};

extern "C" void RM3100_runnable( void *);
bool configure_RM3100(void);
bool read_RM3100( mag_data & target);

#endif /* RM3100_H_ */
