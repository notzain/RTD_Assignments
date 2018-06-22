//
// Created by zain on 4/27/18.
//

#include <iostream>
#include <memory>

#include "lib_domain/Match.h"
#include "lib_domain/Robot.h"

#include "lib_domainfactory/SimpleDomainFactory.h"

#include "lib_util/IObserver.h"
#include "lib_util/Subject.h"

#include "lib_ui/MainWindow.h"

int main() {

    Ui::MainWindow window;

    DomainFactory::SimpleDomainFactory factory;

    auto robot = factory.makeRobot();

    auto match = factory.makeMatch(robot);

    dynamic_cast<Domain::Robot*>(robot.get())->attach(&window);

    match->run();

    return 0;
}