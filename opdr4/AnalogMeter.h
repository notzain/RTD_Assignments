//
// Created by zain on 4/26/18.
//

#ifndef PROJECT_ANALOGMETER_H
#define PROJECT_ANALOGMETER_H


#include "IMeter.h"

class AnalogMeter : public IMeter {
private:
public:
    void show(float value) override;

};


#endif //PROJECT_ANALOGMETER_H
