//
// Created by zain on 4/24/18.
//

#include <iostream>
#include "Layer2Impl.h"
#include "Layer2Server.h"
#include "Layer1.h"

void Layer2Impl::request() {
    std::cout << "Layer2 start" << std::endl;
    mServer->request();
    std::cout << "Layer2 end" << std::endl;
}

void Layer2Impl::service() {
    std::cout << "Layer2 start" << std::endl;
    mLayer->service();
    std::cout << "Layer2 end" << std::endl;
}

void Layer2Impl::connectLow(Layer1 *layer) {
    mLayer = layer;
}

void Layer2Impl::connectHigh(Layer2Server *server) {
    mServer = server;
}
