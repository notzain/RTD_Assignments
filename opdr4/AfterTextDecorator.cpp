//
// Created by zain on 4/26/18.
//

#include <iostream>
#include "AfterTextDecorator.h"

AfterTextDecorator::AfterTextDecorator(IMeter *component, std::string message)
        : BorderDecorator(component), mMessage(message){

}

void AfterTextDecorator::show(float value) {
    mComponent->show(value);
    std::cout << mMessage;
}

