//
// Created by zain on 4/26/18.
//

#ifndef PROJECT_BORDERDECORATOR_H
#define PROJECT_BORDERDECORATOR_H


#include "IMeter.h"

class BorderDecorator : public IMeter {
protected:
    IMeter* mComponent;
public:
    explicit BorderDecorator(IMeter *component);
    virtual void show(float value) override;
};

#endif //PROJECT_BORDERDECORATOR_H
