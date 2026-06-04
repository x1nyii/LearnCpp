#pragma once

#include "MessageBaseClass.h"
#include <string>

using namespace std;

class StatusReplyMessage : MessageBaseClass
{
public:
    bool TaskSuccessful;
};