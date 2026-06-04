#pragma once

#include "MessageBaseClass.h"
#include <string>

using namespace std;

class DepositMoneyMessage : MessageBaseClass
{
public:
    double DepositAmount;
};