//
// Created by zain on 5/3/18.
//

#ifndef PROJECT_IDOMAINFACTORY_H
#define PROJECT_IDOMAINFACTORY_H

#include <memory>

namespace Domain {
    class IRobot;

    class IMatch;
}

namespace DomainFactory {
    class IDomainFactory {
    public:
        IDomainFactory() = default;

        virtual ~IDomainFactory() = default;

        virtual std::shared_ptr<Domain::IRobot> makeRobot() = 0;

        virtual std::shared_ptr<Domain::IMatch> makeMatch(
                std::shared_ptr<Domain::IRobot> &robot
        ) = 0;
    };
}

#endif //PROJECT_IDOMAINFACTORY_H
