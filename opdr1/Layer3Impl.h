//
// Created by zain on 4/24/18.
//

#ifndef PROJECT_LAYER3IMPL_H
#define PROJECT_LAYER3IMPL_H


#include "Layer3.h"
#include "Layer2Server.h"

class Layer2;

class Layer3Impl : public Layer3, public Layer2Server {
private:
    Layer2 *mLayer;
public:
    void request() override;

    void service() override;

    void connectLow(Layer2 *layer) override;

};


#endif //PROJECT_LAYER3IMPL_H
