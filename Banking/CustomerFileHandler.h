#pragma once

#include <fstream> // reading and writing to file
#include <string>

#include "CustomerClass.h"


using namespace std;

class CustomerFileHandler
{
private:


public:

    /// <summary>Read all the existing data that is stored in the notes file</summary>
    vector<CustomerClass> ReadFile()
    {

        return;
    }


    void WriteToFile(const CustomerClass& customer)

};