//
// Created by zain on 4/25/18.
//

#ifndef PROJECT_LOAN_H
#define PROJECT_LOAN_H

#include <string>

class Member;
class Book;

class Loan {
private:
    std::string mDate;
    int mWeeks;

    Member* mMember;
    Book *mBook;

public:
    Loan(const std::string &mDate, int mWeeks, Member *mMember, Book *mBook);
    virtual ~Loan();

    virtual std::string date() const;

    virtual int weeks() const;

    virtual Member* member() const;

    virtual Book* book() const;


};


#endif //PROJECT_LOAN_H
