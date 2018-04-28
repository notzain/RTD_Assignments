//
// Created by zain on 4/27/18.
//

#include "Subject.h"
#include "IObserver.h"

#include <algorithm>

namespace util {
    void Subject::notify() {
        for (auto *observer : mObservers) {
            observer->update(this);
        }
    }

    void Subject::attach(IObserver *observer) {
        mObservers.push_back(observer);
    }

    void Subject::detach(IObserver *observer) {
        mObservers.erase(std::remove(mObservers.begin(), mObservers.end(), observer),
                         mObservers.end());
    }
}
