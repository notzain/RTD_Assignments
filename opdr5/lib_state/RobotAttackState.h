//
// Created by zain on 5/3/18.
//

#ifndef PROJECT_ROBOTATTACKSTATE_H
#define PROJECT_ROBOTATTACKSTATE_H


#include "IRobotState.h"

namespace State {
    class RobotAttackState : public IRobotState {
    private:
        static std::string stateName;

    public:
        RobotAttackState() = default;
        virtual ~RobotAttackState() = default;

        void start(Domain::Robot *robot) override;

        void stop(Domain::Robot *robot) override;

        void find(Domain::Robot *robot) override;

        void win(Domain::Robot *robot) override;

        void lose(Domain::Robot *robot) override;

        void finish(Domain::Robot *robot) override;

        std::string state() const override;

    };

}
#endif //PROJECT_ROBOTATTACKSTATE_H
