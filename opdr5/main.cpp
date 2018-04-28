//
// Created by zain on 4/27/18.
//

#include <iostream>
#include <memory>

#include "lib_util/IObserver.h"
#include "lib_util/Subject.h"

class MySubject : public util::Subject {

};

class MyObserver : public util::IObserver {
public:
    void update(util::Subject *subject) override {
        std::cout << "Received update" << std::endl;
    }
};

int main()
{
    auto subject = std::make_unique<MySubject>();
    auto observer = std::make_unique<MyObserver>();

    subject->attach(observer.get());
    subject->notify();

    return 0;
}