//
// Created by zain on 5/4/18.
//

#ifndef PROJECT_ROBOTWINSTATE_H
#define PROJECT_ROBOTWINSTATE_H


#include "IRobotState.h"

namespace State {
    class RobotWinState : public IRobotState {
    private:
        static std::string stateName;
    public:
        RobotWinState() = default;
        virtual ~RobotWinState() = default;

        void start(Domain::Robot *robot) override;

        void stop(Domain::Robot *robot) override;

        void find(Domain::Robot *robot) override;

        void win(Domain::Robot *robot) override;

        void lose(Domain::Robot *robot) override;

        void finish(Domain::Robot *robot) override;

        std::string state() const override;

    };
}


#endif //PROJECT_ROBOTWINSTATE_H
