//
// Created by zain on 4/24/18.
//

#ifndef PROJECT_LAYER2_H
#define PROJECT_LAYER2_H

class Layer1;

class Layer2 {
public:
    virtual void service() = 0;

    virtual void connectLow(Layer1 *layer) = 0;
};

#endif //PROJECT_LAYER2_H
