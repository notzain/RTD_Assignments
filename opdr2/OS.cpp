//
// Created by zain on 4/24/18.
//

#include "OS.h"
#include "Directory.h"
#include "Item.h"

void OS::run() {
     IItem *dir = makeDirectory("myDir");

    dir->add(makeItem("myFile", 1000));
    dir->add(makeItem("myFile", 1000));
    dir->add(makeItem("myFile", 1000));

    dir->show();
}
