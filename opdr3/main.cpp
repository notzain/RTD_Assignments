//
// Created by zain on 4/25/18.
//

#include <iostream>

#include "Application.h"
#include "LoanFacadeImpl.h"

int main()
{
    Application app;
    app.use(LoanFacadeImpl::get());
    return 0;
}
