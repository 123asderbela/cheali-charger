<<<<<<< HEAD:src/core/DelayStrategy.h
/*
    cheali-charger - open source firmware for a variety of LiPo chargers
    Copyright (C) 2013  Pawel Stawicki. All right reserved.

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
#ifndef DELAYSTRATEGY_H_
#define DELAYSTRATEGY_H_

#include "Strategy.h"

namespace DelayStrategy {

    extern const Strategy::VTable vtable;
    
    void powerOn();
    Strategy::statusType doStrategy();
    void powerOff();

    bool isDelay();
    void setDelay(int16_t minutes);

   
};


#endif /* DELAYSTRATEGY_H_ */
=======
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
#ifndef ADC_H_
#define ADC_H_

namespace adc {

    void initialize();
    void reset();

    void conversionDone();
    void timerInterrupt();
};

#endif /* ADC_H_ */
>>>>>>> d478938aba1843b84172d5e9c789a40f899c8fc7:src/hardware/GTPowerA6-10-generic/adc.h
