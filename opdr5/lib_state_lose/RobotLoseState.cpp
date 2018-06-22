//
// Created by zain on 5/17/18.
//

#include <memory>

#include "../lib_domain/Robot.h"

#include <RobotFinishState.h>
#include "RobotLoseState.h"
#include "RobotRoamState.h"
#include "RobotWinState.h"


std::string State::RobotLoseState::stateName = "Finishing";

void State::RobotLoseState::start(Domain::Robot *robot) {
    robot->setState(std::make_unique<RobotRoamState>());

}

void State::RobotLoseState::stop(Domain::Robot *robot) {
}

void State::RobotLoseState::find(Domain::Robot *robot) {
    robot->setState(std::make_unique<RobotRoamState>());

}

void State::RobotLoseState::win(Domain::Robot *robot) {
    robot->setState(std::make_unique<RobotWinState>());
}

void State::RobotLoseState::lose(Domain::Robot *robot) {

}

void State::RobotLoseState::finish(Domain::Robot *robot) {
    robot->setState(std::make_unique<RobotFinishState>());
}

std::string State::RobotLoseState::state() const {
    return stateName;
}
