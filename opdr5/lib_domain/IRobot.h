//
// Created by zain on 5/19/18.
//

#ifndef PROJECT_IROBOT_H
#define PROJECT_IROBOT_H

#include <string>
#include <memory>
#include "../lib_state/IRobotState.h"

namespace Domain {
    class IRobot {
    public:
        IRobot() = default;
        virtual ~IRobot() = default;

        virtual void start() = 0;

        virtual void stop() = 0;

        virtual void find() = 0;

        virtual void win() = 0;

        virtual void lose() = 0;

        virtual void finish() = 0;

        virtual void setState(std::unique_ptr <State::IRobotState> &&newState) = 0;

        virtual std::string state() const = 0;
    };
}

#endif //PROJECT_IROBOT_H
