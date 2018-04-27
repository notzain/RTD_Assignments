//
// Created by zain on 4/25/18.
//

#include "Member.h"

#include <algorithm>
#include <iostream>
#include "Loan.h"
#include "Book.h"

std::map<int, Member *> Member::mMembers;

Member::Member(int nr)
        : mNr(nr) {

    mMembers[nr] = this;
}

int Member::nr() const {
    return mNr;
}

void Member::addLoan(Loan *loan) {
    mLoans.push_back(loan);
}

void Member::removeLoan(Loan *loan) {
    mLoans.erase(std::remove(mLoans.begin(), mLoans.end(), loan),
                 mLoans.end());
}

void Member::showBooks() const {
    for (Loan *loan : mLoans) {
        if (loan->member() == this && loan->book()->loan()) {
            std::cout << loan->book()->nr() << " "
                      << loan->date() << " "
                      << loan->weeks() << std::endl;
        }
    }
}

Member *Member::get(int nr) {
    auto *member = mMembers[nr];

    if (member == nullptr) {
        member = new Member(nr);
    }
    return member;
}

void Member::dump(Member *member) {
    mMembers.erase(member->nr());
    delete member;
}

