//
// Created by zain on 5/3/18.
//

#include "../lib_domain/Robot.h"
#include "RobotAttackState.h"
#include "RobotRoamState.h"
#include "RobotFinishState.h"
#include "RobotWinState.h"

std::string State::RobotAttackState::stateName = "Attacking";

void State::RobotAttackState::start(Domain::Robot *robot) {
    robot->setState(std::make_unique<RobotRoamState>());
}

void State::RobotAttackState::stop(Domain::Robot *robot) {
    robot->setState(std::make_unique<RobotFinishState>());
}

void State::RobotAttackState::find(Domain::Robot *robot) {
}

void State::RobotAttackState::win(Domain::Robot *robot) {
    robot->setState(std::make_unique<RobotWinState>());
}

void State::RobotAttackState::lose(Domain::Robot *robot) {
}

void State::RobotAttackState::finish(Domain::Robot *robot) {
    robot->setState(std::make_unique<RobotFinishState>());
}

std::string State::RobotAttackState::state() const {
    return stateName;
}
