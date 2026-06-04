#pragma once

#include "MessageBaseClass.h"
#include <string>

using namespace std;

class EnquireBalanceMessage : MessageBaseClass
{
public:
    double AccountBalance;
};