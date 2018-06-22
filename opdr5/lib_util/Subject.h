//
// Created by zain on 4/27/18.
//

#ifndef PROJECT_SUBJECT_H
#define PROJECT_SUBJECT_H

#include <vector>
#include <memory>

namespace util {
    class IObserver;

    class Subject {
    private:
        std::vector<IObserver *> mObservers;

    public:
        Subject() = default;

        virtual ~Subject() = default;

        virtual void notify();

        virtual void attach(IObserver *observer);

        virtual void detach(IObserver *observer);
    };
}

#endif //PROJECT_SUBJECT_H
