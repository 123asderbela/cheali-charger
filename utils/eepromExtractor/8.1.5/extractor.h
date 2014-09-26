/*
    cheali-charger - open source firmware for a variety of LiPo chargers
    Copyright (C) 2013  Paweł Stawicki. All right reserved.

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
#ifndef EXTRACTOR_H_
#define EXTRACTOR_H_

#include "Version.h"
#define CREATE_GET(nr1,nr2,nr3) get_ ## nr1 ## _ ## nr2 ## _ ## nr3()

//TODO:!!!
class Extractor;
Extractor * CREATE_GET(8, 1, 5);


#endif //EXTRACTOR_H_
