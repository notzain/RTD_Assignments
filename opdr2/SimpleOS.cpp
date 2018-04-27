//
// Created by zain on 4/24/18.
//

#include "SimpleOS.h"
#include "Item.h"
#include "Directory.h"
#include <memory>

IItem *SimpleOS::makeItem(const std::string &name, int size) {
    return new Item(name, size);
}

IItem *SimpleOS::makeDirectory(const std::string &name) {
    return new Directory(name);
}

