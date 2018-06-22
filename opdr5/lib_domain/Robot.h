//
// Created by zain on 5/3/18.
//

#ifndef PROJECT_ROBOT_H
#define PROJECT_ROBOT_H

#include <memory>
#include <string>

#include "IRobot.h"
#include "../lib_util/Subject.h"

namespace Domain {
    class Robot : public IRobot, public util::Subject {
    private:
        std::unique_ptr<State::IRobotState> mState;

    public:
        explicit Robot(std::unique_ptr<State::IRobotState> &&initialState);

        ~Robot() override = default;

        void start() override;

        void stop() override;

        void find() override;

        void win() override;

        void lose() override;

        void finish() override;

        void setState(std::unique_ptr<State::IRobotState> &&newState) override;

        std::string state() const override;
    };
}

#endif //PROJECT_ROBOT_H
