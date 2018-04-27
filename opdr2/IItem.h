//
// Created by zain on 4/24/18.
//

#ifndef PROJECT_IITEM_H
#define PROJECT_IITEM_H

#include <string>

class IItem {
public:
    virtual ~IItem() = default;

    virtual void add(IItem *item) = 0;

    virtual void remove(IItem *item) = 0;

    virtual std::string name() const = 0;

    virtual int size() const = 0;

    virtual void show() const = 0;
};


#endif //PROJECT_IITEM_H
