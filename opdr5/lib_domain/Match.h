//
// Created by zain on 5/3/18.
//

#ifndef PROJECT_MATCH_H
#define PROJECT_MATCH_H

#include <memory>

#include "Robot.h"
#include "IMatch.h"

namespace Domain {
    class Match : public IMatch {
    private:
        std::shared_ptr<IRobot> mRobot;

    public:
        explicit Match(std::shared_ptr<IRobot> robot);

        ~Match() override = default;

        void run() override;

    };
}

#endif //PROJECT_MATCH_H
