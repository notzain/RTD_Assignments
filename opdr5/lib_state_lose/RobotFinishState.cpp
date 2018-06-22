//
// Created by zain on 5/3/18.
//

#include "RobotFinishState.h"

#include "../lib_domain/Robot.h"
#include "RobotRoamState.h"
#include "RobotWinState.h"
#include "RobotLoseState.h"

std::string State::RobotFinishState::stateName = "Finishing";

void State::RobotFinishState::start(Domain::Robot *robot) {
    robot->setState(std::make_unique<RobotRoamState>());

}

void State::RobotFinishState::stop(Domain::Robot *robot) {
}

void State::RobotFinishState::find(Domain::Robot *robot) {
    robot->setState(std::make_unique<RobotRoamState>());

}

void State::RobotFinishState::win(Domain::Robot *robot) {
    robot->setState(std::make_unique<RobotWinState>());
}

void State::RobotFinishState::lose(Domain::Robot *robot) {
    robot->setState(std::make_unique<RobotLoseState>());
}

void State::RobotFinishState::finish(Domain::Robot *robot) {

}

std::string State::RobotFinishState::state() const {
    return stateName;
}
