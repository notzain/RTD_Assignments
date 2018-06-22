//
// Created by zain on 5/4/18.
//

#include <memory>
#include "RobotWinState.h"
#include "RobotRoamState.h"
#include "../lib_domain/Robot.h"
#include "RobotFinishState.h"
#include "RobotAttackState.h"

std::string State::RobotWinState::stateName = "Winning";

void State::RobotWinState::start(Domain::Robot *robot) {
    robot->setState(std::make_unique<RobotRoamState>());
}

void State::RobotWinState::stop(Domain::Robot *robot) {
    robot->setState(std::make_unique<RobotFinishState>());
}

void State::RobotWinState::find(Domain::Robot *robot) {
    robot->setState(std::make_unique<RobotAttackState>());
}

void State::RobotWinState::win(Domain::Robot *robot) {
}

void State::RobotWinState::lose(Domain::Robot *robot) {
}

void State::RobotWinState::finish(Domain::Robot *robot) {
    robot->setState(std::make_unique<RobotFinishState>());
}

std::string State::RobotWinState::state() const {
    return stateName;
}


