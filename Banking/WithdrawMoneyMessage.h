#pragma once

#include "MessageBaseClass.h"
#include <string>

using namespace std;

class WithdrawMoneyMessage : MessageBaseClass
{
public:
    double WithdrawalAmount;
};