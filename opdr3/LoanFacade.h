//
// Created by zain on 4/25/18.
//

#ifndef PROJECT_LOANFACADE_H
#define PROJECT_LOANFACADE_H

#include <string>

class LoanFacade {
public:
    virtual ~LoanFacade() = default;
    virtual void loanTo(int memberNr, int bookNr, std::string date, int week) = 0;
    virtual void returnBook(int bookNr) = 0;
    virtual void showBooks(int memberNr) = 0;
};

#endif //PROJECT_LOANFACADE_H
