//
// Created by zain on 5/19/18.
//

#ifndef PROJECT_IMATCH_H
#define PROJECT_IMATCH_H

namespace Domain {

    class IMatch {
    public:
         IMatch() = default;
         virtual ~IMatch() = default;

         virtual void run() = 0;
    };
}


#endif //PROJECT_IMATCH_H
