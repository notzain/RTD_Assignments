//
// Created by zain on 4/26/18.
//

#ifndef PROJECT_IMETER_H
#define PROJECT_IMETER_H

class IMeter {
public:
    virtual ~IMeter() = default;

    virtual void show(float value) = 0;
};

#endif //PROJECT_IMETER_H
