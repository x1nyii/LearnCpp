#pragma once

#include <iostream>
#include <vector>
#include <map>
#include "StatusReplyMessage.h"
#include "EnquireBalanceMessage.h"
#include "EnquireBalanceReplyMessage.h"
#include "WithdrawMoneyMessage.h"
#include "DepositMoneyMessage.h"
#include "EnquireBalanceMessage.h"

using namespace std;


class CustomerClass
{
private:


public:
        
    EnquireBalanceReplyMessage ViewAccountDetails(EnquireBalanceMessage& message)
    {
        EnquireBalanceReplyMessage reply;
        
        return;
    }


    StatusReplyMessage DepositCashToAccount(DepositMoneyMessage& message)
    {



        return;
    }



    StatusReplyMessage WithdrawCashFromAccount(WithdrawMoneyMessage& message)
    {
        if (AccountBalance >= 0)
        {
            // allow withdrawal
        }


        return;
    }
    
    
    


};