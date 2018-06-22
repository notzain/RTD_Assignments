//
// Created by zain on 5/3/18.
//

#include "Robot.h"

namespace Domain {
    Robot::Robot(std::unique_ptr<State::IRobotState> &&initialState)
            : mState(std::move(initialState)) {
    }


    void Robot::start() {
        mState->start(this);
    }

    void Robot::stop() {
        mState->stop(this);
    }

    void Robot::find() {
        mState->find(this);
    }

    void Robot::win() {
        mState->win(this);
    }

    void Robot::lose() {
        mState->lose(this);
    }

    void Robot::finish() {
        mState->finish(this);
    }

    void Robot::setState(std::unique_ptr<State::IRobotState> &&newState) {
        mState = std::move(newState);

        notify();
    }

    std::string Robot::state() const {
        return mState->state();
    }

}
