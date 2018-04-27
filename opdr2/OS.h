//
// Created by zain on 4/24/18.
//

#ifndef PROJECT_OS_H
#define PROJECT_OS_H


#include <string>

class IItem;

class OS {
public:
    virtual void run();
    virtual IItem *makeItem(const std::string &name, int size) = 0;

    virtual IItem *makeDirectory(const std::string &name) = 0;
};


#endif //PROJECT_OS_H
