//
// Created by zain on 4/25/18.
//

#ifndef PROJECT_LOANFACADEIMPL_H
#define PROJECT_LOANFACADEIMPL_H


#include "LoanFacade.h"

class LoanFacadeImpl : public LoanFacade {
private:
    LoanFacadeImpl() = default;
public:
    static LoanFacade* get();

    void loanTo(int memberNr, int bookNr, std::string date, int week) override;

    void returnBook(int bookNr) override;

    void showBooks(int memberNr) override;

};


#endif //PROJECT_LOANFACADEIMPL_H
