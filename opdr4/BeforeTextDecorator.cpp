//
// Created by zain on 4/26/18.
//

#include <iostream>
#include "BeforeTextDecorator.h"

BeforeTextDecorator::BeforeTextDecorator(IMeter *component, std::string message)
        : BorderDecorator(component), mMessage(message) {

}

void BeforeTextDecorator::show(float value) {
    std::cout << mMessage;
    mComponent->show(value);
}
