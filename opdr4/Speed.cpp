//
// Created by zain on 4/26/18.
//

#include <iostream>
#include "IMeter.h"
#include "Speed.h"

Speed::Speed(IMeter *meter)
        : mMeter(meter), mValue(0) {

}

Speed::~Speed() {
}

void Speed::measure() {
    std::cin >> mValue;

}

void Speed::show() {
    mMeter->show(mValue);

}
