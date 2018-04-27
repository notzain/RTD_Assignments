//
// Created by zain on 4/25/18.
//

#include "LoanFacadeImpl.h"

#include "Book.h"
#include "Member.h"
#include "Loan.h"

LoanFacade *LoanFacadeImpl::get() {
    static LoanFacadeImpl impl;
    return &impl;
}

void LoanFacadeImpl::loanTo(int memberNr, int bookNr, std::string date, int week) {
    auto *member = Member::get(memberNr);
    auto *book = Book::get(bookNr);

    auto *loan = new Loan(date, week, member, book);

    member->addLoan(loan);
    book->loanTo(loan);
}

void LoanFacadeImpl::returnBook(int bookNr) {
    auto book = Book::get(bookNr);
    book->returnBook();
}

void LoanFacadeImpl::showBooks(int memberNr) {
    Member::get(memberNr)->showBooks();

}
