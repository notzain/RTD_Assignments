//
// Created by zain on 4/24/18.
//

#ifndef PROJECT_LAYER1IMPL_H
#define PROJECT_LAYER1IMPL_H

#include "Layer1.h"

class Layer1Server;

class Layer1Impl : public Layer1 {
private:
    Layer1Server *mServer;

public:
    void service() override;
    void connectHigh(Layer1Server *server);

};


#endif //PROJECT_LAYER1IMPL_H
