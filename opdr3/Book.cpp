//
// Created by zain on 4/25/18.
//

#include <algorithm>
#include "Book.h"

std::map<int, Book*> Book::mBooks;

Book::Book(int nr)
        : mNr(nr), mLoan(nullptr) {
    mBooks[nr] = this;
}

int Book::nr() const {
    return mNr;
}

Loan *Book::loan() const {
    return mLoan;
}

void Book::loanTo(Loan *loan) {
    mLoan = loan;
}

void Book::returnBook() {
    mLoan = nullptr;
}

Book *Book::get(int nr) {
    Book *book = mBooks[nr];

    if (book == nullptr) {
        book = new Book(nr);
    }
    return book;
}

void Book::dump(Book *book) {
    mBooks.erase(book->nr());
    delete book;
}

