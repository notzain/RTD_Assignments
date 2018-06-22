//
// Created by zain on 5/3/18.
//

#include "../lib_domain/Robot.h"

#include "RobotRoamState.h"
#include "RobotAttackState.h"
#include "RobotFinishState.h"
#include "RobotWinState.h"

std::string State::RobotRoamState::stateName = "Roaming";

void State::RobotRoamState::start(Domain::Robot *robot) {

}

void State::RobotRoamState::stop(Domain::Robot *robot) {
    robot->setState(std::make_unique<RobotFinishState>());
}

void State::RobotRoamState::find(Domain::Robot *robot) {
    robot->setState(std::make_unique<RobotAttackState>());
}

void State::RobotRoamState::win(Domain::Robot *robot) {
    robot->setState(std::make_unique<RobotWinState>());
}

void State::RobotRoamState::lose(Domain::Robot *robot) {
}

void State::RobotRoamState::finish(Domain::Robot *robot) {
    robot->setState(std::make_unique<RobotRoamState>());
}

std::string State::RobotRoamState::state() const {
    return stateName;
}

