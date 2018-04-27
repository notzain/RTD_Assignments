//
// Created by zain on 4/24/18.
//

#include <iostream>
#include "Layer3Impl.h"
#include "Layer2.h"

void Layer3Impl::service() {
    std::cout << "Layer3 start" << std::endl;
    mLayer->service();
    std::cout << "Layer3 end" << std::endl;

}

void Layer3Impl::connectLow(Layer2 *layer) {
    mLayer = layer;

}

void Layer3Impl::request() {
    std::cout << "Layer3 start" << std::endl;
    std::cout << "Layer3 end" << std::endl;
}
