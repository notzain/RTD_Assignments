//
// Created by zain on 5/3/18.
//

#ifndef PROJECT_IROBOTSTATE_H
#define PROJECT_IROBOTSTATE_H

#include <string>

namespace Domain {
    class Robot;
}

namespace State {
    class IRobotState {
    public:
        IRobotState() = default;
        virtual ~IRobotState() = default;

        virtual void start(Domain::Robot *robot) = 0;

        virtual void stop(Domain::Robot *robot) = 0;

        virtual void find(Domain::Robot *robot) = 0;

        virtual void win(Domain::Robot *robot) = 0;

        virtual void lose(Domain::Robot *robot) = 0;

        virtual void finish(Domain::Robot *robot) = 0;

        virtual std::string state() const = 0;
    };
}

#endif //PROJECT_IROBOTSTATE_H
