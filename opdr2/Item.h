//
// Created by zain on 4/24/18.
//

#ifndef PROJECT_ITEM_H
#define PROJECT_ITEM_H


#include "IItem.h"

class Item : public IItem {
private:
    std::string mName;
    int mSize;

public:
    Item(const std::string& name, int size);
    virtual ~Item() = default;

    void add(IItem *item) override {}

    void remove(IItem *item) override {}

    std::string name() const override;

    int size() const override;

    void show() const override;

};


#endif //PROJECT_ITEM_H
