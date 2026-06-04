#pragma once


class InterfaceControl
{
public:
    enum class MessageId
    {
        CreateAccount,
        DeleteAccount,
        EnquireBalance,
        DepositMoney,
        WithdrawMoney,
        StatusReply,
        EnquireBalanceReply
    }messageId;

};