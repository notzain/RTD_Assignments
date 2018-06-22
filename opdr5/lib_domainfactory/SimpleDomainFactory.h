//
// Created by zain on 5/3/18.
//

#ifndef PROJECT_DOMAINFACTORY_H
#define PROJECT_DOMAINFACTORY_H

#include "IDomainFactory.h"


namespace DomainFactory {
    class SimpleDomainFactory : public IDomainFactory {
    public:
        SimpleDomainFactory() = default;
        virtual ~SimpleDomainFactory() = default;

        std::shared_ptr<Domain::IRobot> makeRobot() override;

        std::shared_ptr<Domain::IMatch> makeMatch(std::shared_ptr<Domain::IRobot> &robot) override;

    };
}


#endif //PROJECT_DOMAINFACTORY_H
