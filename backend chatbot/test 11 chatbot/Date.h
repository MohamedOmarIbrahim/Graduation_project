#pragma once
#include <iostream>
#include <ctime> // For time_t and localtime
#include <iomanip> // For put_time
#include <sstream> // For ostringstream

using namespace std;
class Date
{
public:
    string getTimestamp() {
        // Get the current time
        time_t currentTime;
        time(&currentTime);

        // Convert the current time to local time
        struct tm localTime;
        localtime_s(&localTime, &currentTime);

        // Format the local time as a string
        ostringstream oss;
        oss << put_time(&localTime, "%Y-%m-%d %H:%M:%S");

        return oss.str();
    }

};

