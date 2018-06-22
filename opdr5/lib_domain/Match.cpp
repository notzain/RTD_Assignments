//
// Created by zain on 5/3/18.
//

#include <iostream>

#include "Match.h"
#include "Robot.h"

namespace Domain {

    Match::Match(std::shared_ptr<IRobot> robot) : mRobot(robot){

    }

    void Match::run() {
        int user_code = 0;

        do {

            std::cout << "\n\n===ROBOT MATCH=== \n" << std::endl;

            std::cout << "Current state: " << mRobot->state() << std::endl;

            std::cout << "options: \n"
                         "\t 1) start \n"
                         "\t 2) stop \n"
                         "\t 3) find \n"
                         "\t 4) win \n"
                         "\t 5) lose \n"
                         "\t 6) finish \n";

            std::cout << "Option: ";
            std::cin >> user_code;

            std::system("clear");
            switch (user_code) {
                case 1:
                    mRobot->start();
                    break;
                case 2:
                    mRobot->stop();
                    break;
                case 3:
                    mRobot->find();
                    break;
                case 4:
                    mRobot->win();
                    break;
                case 5:
                    mRobot->lose();
                    break;
                case 6:
                    mRobot->finish();
                    break;
                default:
                    break;
            }


        }
        while (user_code != 0);
    }

}
