//
// Created by zain on 4/25/18.
//

#include "Application.h"
#include "LoanFacade.h"

void Application::use(LoanFacade *facade) {
    facade->loanTo(7, 13, "10 mei 2003", 2);
    facade->loanTo(7, 17, "10 mei 2003", 3);
    facade->returnBook(17);
    facade->showBooks(7);
}
