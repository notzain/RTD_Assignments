//
// Created by zain on 4/24/18.
//

#include <iostream>
#include "Item.h"

Item::Item(const std::string &name, int size)
        : mName(name), mSize(size) {
}

std::string Item::name() const {
    return mName;
}

int Item::size() const {
    return mSize;
}

void Item::show() const {
    std::cout << name() << " " << size() << std::endl;
}

