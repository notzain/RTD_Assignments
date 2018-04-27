//
// Created by zain on 4/24/18.
//

#ifndef PROJECT_SIMPLEOS_H
#define PROJECT_SIMPLEOS_H

#include "OS.h"
#include "IItem.h"

class SimpleOS : public OS {
public:
    IItem *makeItem(const std::string &name, int size);

    IItem *makeDirectory(const std::string &name);
};


#endif //PROJECT_SIMPLEOS_H
