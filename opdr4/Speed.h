//
// Created by zain on 4/26/18.
//

#ifndef PROJECT_SPEED_H
#define PROJECT_SPEED_H

class IMeter;

class Speed {
private:
    float mValue;
    IMeter *mMeter;

public:
    Speed(IMeter *meter);

    virtual ~Speed();

    virtual void measure();

    virtual void show();

};


#endif //PROJECT_SPEED_H
