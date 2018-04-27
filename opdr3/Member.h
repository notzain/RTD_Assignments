//
// Created by zain on 4/25/18.
//

#ifndef PROJECT_MEMBER_H
#define PROJECT_MEMBER_H

#include <vector>
#include <map>

class Loan;

class Member {
private:
    int mNr;
    std::vector<Loan*> mLoans;

    static std::map<int, Member*> mMembers;

public:
    explicit Member(int nr);

    virtual int nr() const;

    virtual void addLoan(Loan* loan);

    virtual void removeLoan(Loan* loan);

    virtual void showBooks() const;

    static Member* get(int nr);
    static void dump(Member* member);



};


#endif //PROJECT_MEMBER_H
