//
// Created by zain on 4/24/18.
//

#ifndef PROJECT_DIRECTORY_H
#define PROJECT_DIRECTORY_H

#include <vector>
#include "IItem.h"

class Directory : public IItem {
private:
    std::string mName;
    std::vector<IItem *> mItems;

    static const int DEFAULT_SIZE = 1024;

public:
    explicit Directory(const std::string &name);

    ~Directory() override;

    void add(IItem *item) override;

    void remove(IItem *item) override;

    std::string name() const override;

    int size() const override;

    void show() const override;

};

#endif //PROJECT_DIRECTORY_H
