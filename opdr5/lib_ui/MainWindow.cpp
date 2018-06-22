//
// Created by zain on 5/3/18.
//

#include <iostream>
#include "MainWindow.h"
#include "../lib_domain/Robot.h"

namespace Ui {
    void MainWindow::update(util::Subject *subject) {
        // Only subbed to robots, so we know it's a robot
        if (auto *robot = dynamic_cast<Domain::Robot *>(subject)) {
            std::cout << "MainWindow::Update: New robot state -> " << robot->state()
                      << std::endl;
        }
    }
}
