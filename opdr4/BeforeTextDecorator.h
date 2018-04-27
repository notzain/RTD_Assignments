//
// Created by zain on 4/26/18.
//

#ifndef PROJECT_BEFORETEXTDECORATOR_H
#define PROJECT_BEFORETEXTDECORATOR_H


#include <string>
#include "BorderDecorator.h"

class BeforeTextDecorator : public BorderDecorator {
private:
    std::string mMessage;
public:
    BeforeTextDecorator(IMeter* component, std::string message);

    void show(float value) override;

};


#endif //PROJECT_BEFORETEXTDECORATOR_H
