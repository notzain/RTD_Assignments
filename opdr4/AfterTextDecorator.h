//
// Created by zain on 4/26/18.
//

#ifndef PROJECT_AFTERTEXTDECORATOR_H
#define PROJECT_AFTERTEXTDECORATOR_H

#include <string>

#include "BorderDecorator.h"

class AfterTextDecorator : public BorderDecorator {
private:
    std::string mMessage;
public:
    AfterTextDecorator(IMeter *component, std::string message);

    void show(float value) override;
};


#endif //PROJECT_AFTERTEXTDECORATOR_H
