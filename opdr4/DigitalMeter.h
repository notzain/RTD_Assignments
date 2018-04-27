//
// Created by zain on 4/26/18.
//

#ifndef PROJECT_DIGITALMETER_H
#define PROJECT_DIGITALMETER_H

#include "IMeter.h"

class DigitalMeter : public IMeter {
public:
    void show(float value) override;

};


#endif //PROJECT_DIGITALMETER_H
