//
// Created by zain on 4/25/18.
//

#ifndef PROJECT_BOOK_H
#define PROJECT_BOOK_H

#include <map>

class Loan;

class Book {
private:
    int mNr;
    Loan* mLoan;

    static std::map<int, Book*> mBooks;

public:
    explicit Book(int nr);

    virtual int nr() const;

    virtual Loan* loan() const;

    virtual void loanTo(Loan* loan);

    virtual void returnBook();

    static Book* get(int nr);

    static void dump(Book* book);


};


#endif //PROJECT_BOOK_H
