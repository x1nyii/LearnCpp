#pragma once

//emp_id = input("Enter user ID: ")
//name = input("Enter user Name: ")
//salary = float(input("Enter user Salary: "))
//user = user(emp_id, name, salary)
//users.append(user)
//print(f"user {name} added successfully!")

#pragma once

#include <iostream>
#include <vector>
#include <map>
#include "CreateAccountMessage.h"
#include "DeleteAccountMessage.h"
#include "StatusReplyMessage.h"

using namespace std;


class AdminClass
{
private:
    



public:

    StatusReplyMessage CreateNewAccount(CreateAccountMessage& message)
    {
        return;
    }


    StatusReplyMessage DeleteUserAccount(DeleteAccountMessage& message)
    {
        return;
    }


};