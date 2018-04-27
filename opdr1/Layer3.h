//
// Created by zain on 4/24/18.
//

#ifndef PROJECT_LAYER3_H
#define PROJECT_LAYER3_H

class Layer2;

class Layer3 {
public:
    virtual void service() = 0;
    virtual void connectLow(Layer2* layer) = 0;

};


#endif //PROJECT_LAYER3_H
