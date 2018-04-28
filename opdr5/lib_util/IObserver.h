//
// Created by zain on 4/27/18.
//

#ifndef PROJECT_IOBSERVER_H
#define PROJECT_IOBSERVER_H

namespace util {
    class Subject;

    class IObserver {
    public:
        IObserver() = default;

        virtual ~IObserver() = default;

        virtual void update(Subject *subject) = 0;
    };
}

#endif //PROJECT_IOBSERVER_H
