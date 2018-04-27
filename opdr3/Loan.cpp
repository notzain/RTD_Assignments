//
// Created by zain on 4/25/18.
//

#include "Loan.h"

#include "Book.h"
#include "Member.h"

Loan::Loan(const std::string &mDate, int mWeeks, Member *mMember, Book *mBook)
        : mDate(mDate), mWeeks(mWeeks),
          mMember(mMember), mBook(mBook) {}

Loan::~Loan() = default;

std::string Loan::date() const {
    return mDate;
}

int Loan::weeks() const {
    return mWeeks;
}

Member *Loan::member() const {
    return mMember;
}

Book *Loan::book() const {
    return mBook;
}
