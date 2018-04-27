//
// Created by zain on 4/26/18.
//

#include "BorderDecorator.h"

BorderDecorator::BorderDecorator(IMeter *component) : mComponent(component) {

}

void BorderDecorator::show(float value) {
    mComponent->show(value);
}

