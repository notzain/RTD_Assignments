//
// Created by zain on 5/3/18.
//

#ifndef PROJECT_ROBOTROAMSTATE_H
#define PROJECT_ROBOTROAMSTATE_H

#include <string>
#include "IRobotState.h"

namespace State {
    class RobotRoamState : public IRobotState {
    private:
        static std::string stateName;
    public:
        RobotRoamState() = default;
        virtual ~RobotRoamState() = default;

        void start(Domain::Robot *robot) override;

        void stop(Domain::Robot *robot) override;

        void find(Domain::Robot *robot) override;

        void win(Domain::Robot *robot) override;

        void lose(Domain::Robot *robot) override;

        void finish(Domain::Robot *robot) override;

        std::string state() const override;
    };
}


#endif //PROJECT_ROBOTROAMSTATE_H
