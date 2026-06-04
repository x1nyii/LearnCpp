#pragma once

#include <vector>
#include "CustomerClass.h"
#include "CustomerFileHandler.h"

using namespace std;

class RecordManagement
{
private:
    // List of crates
    vector<CustomerClass> customer; // Vector to hold customer records
    CustomerFileHandler customerFileHandler;

public:

    /// <summary></summary>
    void ReadAllFileRecords()
    {
        // initialise by loading from file
        //customer = customerFileHandler.ReadFile();

    }

    /// <summary></summary>
    /// <param name="customer"></param>
    void AddNewCustomerRecord(const CustomerClass& customer)
    {

        return;
    }


    /// <summary></summary>
    /// <param name="customerAccountId"></param>
    void DeleteCustomerAccount(int customerAccountId)
    {

        return;
    }


    /// <summary></summary>
    /// <returns></returns>
    const vector<CustomerClass>& getRecords() const
    {
        return customer;
    }

};