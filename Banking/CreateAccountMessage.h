#pragma once

#include "MessageBaseClass.h"
#include <string>

using namespace std;

class CreateAccountMessage : MessageBaseClass
{
public:
    double AccountBalance;
    string CustomerName;
};