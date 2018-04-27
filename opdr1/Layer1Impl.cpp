//
// Created by zain on 4/24/18.
//

#include <iostream>
#include "Layer1Impl.h"
#include "Layer1Server.h"

void Layer1Impl::service() {
    std::cout << "Layer1 start" << std::endl;
    mServer->request();
    std::cout << "Layer1 end" << std::endl;

}

void Layer1Impl::connectHigh(Layer1Server *server) {
    mServer = server;
}
