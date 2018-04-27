//
// Created by zain on 4/24/18.
//

#include <iostream>
#include <algorithm>
#include "Directory.h"

Directory::Directory(const std::string &name)
        : mName(name) {
}

Directory::~Directory() {
    for (auto *item : mItems) {
        delete item;
    }
}

void Directory::add(IItem *item) {
    mItems.push_back(item);
}

void Directory::remove(IItem *item) {
    mItems.erase(std::remove(mItems.begin(), mItems.end(), item), mItems.end());
}

std::string Directory::name() const {
    return mName;
}

int Directory::size() const {
    return std::accumulate(mItems.begin(), mItems.end(), DEFAULT_SIZE,
                           [](int total, IItem *item) { return total + item->size(); }
    );
}

void Directory::show() const {
    std::cout << name() << " " << DEFAULT_SIZE << std::endl;
    std::cout << "-------------------" << std::endl;


    for (auto *item : mItems) {
        item->show();
    }

    std::cout << "-------------------" << std::endl;
    std::cout << "total size: " << size() << std::endl << std::endl;
}
