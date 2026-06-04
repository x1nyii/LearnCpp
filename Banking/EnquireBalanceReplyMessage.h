#pragma once

#include "MessageBaseClass.h"
#include <string>

using namespace std;

class EnquireBalanceReplyMessage : MessageBaseClass
{
public:
    double AccountBalance;
};