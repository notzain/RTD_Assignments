//
// Created by zain on 4/24/18.
//

#ifndef PROJECT_LAYER2IMPL_H
#define PROJECT_LAYER2IMPL_H


#include "Layer1Server.h"
#include "Layer2.h"

class Layer1;
class Layer2Server;

class Layer2Impl : public Layer2, public Layer1Server {
private:
    Layer1 *mLayer;
    Layer2Server *mServer;

public:
    void request() override;

    void service() override;

    void connectLow(Layer1 *layer) override;

    void connectHigh(Layer2Server *server);

};


#endif //PROJECT_LAYER2IMPL_H
