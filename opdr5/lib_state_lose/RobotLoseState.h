//
// Created by zain on 5/17/18.
//

#ifndef PROJECT_ROBOTLOSESTATE_H
#define PROJECT_ROBOTLOSESTATE_H


#include "IRobotState.h"

namespace State {
    class RobotLoseState : public IRobotState {
    private:
        static std::string stateName;

    public:
        void start(Domain::Robot *robot) override;

        void stop(Domain::Robot *robot) override;

        void find(Domain::Robot *robot) override;

        void win(Domain::Robot *robot) override;

        void lose(Domain::Robot *robot) override;

        void finish(Domain::Robot *robot) override;

        std::string state() const override;
    };
}

#endif //PROJECT_ROBOTLOSESTATE_H
