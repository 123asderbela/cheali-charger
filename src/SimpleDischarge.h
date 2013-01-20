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
#ifndef SIMPLEDISCHARGE_H_
#define SIMPLEDISCHARGE_H_

#include "Strategy.h"
#include "AnalogInputs.h"

class SimpleDischarge : public Strategy {
public:

    AnalogInputs::ValueType I_;
    AnalogInputs::ValueType V_;

    SimpleDischarge(){}
    virtual void powerOn();
    virtual statusType doStrategy();
    virtual void powerOff();

    bool isMinVout() const;
    bool isStable() const;


    void setVI(AnalogInputs::ValueType V, AnalogInputs::ValueType I) { I_ = I; V_ = V; };
};

extern SimpleDischarge simpleDischarge;


#endif /* SIMPLEDISCHARGE_H_ */
