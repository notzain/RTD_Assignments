//
// Created by zain on 5/3/18.
//

#include "SimpleDomainFactory.h"

#include <../lib_state/RobotRoamState.h>
#include "../lib_domain/Robot.h"
#include "../lib_domain/Match.h"


namespace DomainFactory {
    std::shared_ptr<Domain::IRobot> SimpleDomainFactory::makeRobot() {
        return std::make_shared<Domain::Robot>(std::make_unique<State::RobotRoamState>());
    }

    std::shared_ptr<Domain::IMatch> SimpleDomainFactory::makeMatch(std::shared_ptr<Domain::IRobot> &robot) {
        return std::make_shared<Domain::Match>(robot);
    }
}
