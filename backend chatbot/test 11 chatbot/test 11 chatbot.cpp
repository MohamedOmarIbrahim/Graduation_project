
#include <iostream>
#include"User.h"
#include"Date.h"
#include"chatbot.h"
#include"Message.h"
#include"EmergencyServices.h"
using namespace std;

int main()
{
    int userId, age;
    char gender;
    string name, userContact;

    cout << "Enter User ID: ";
    cin >> userId;

    cout << "Enter Gender (M/F): ";
    cin >> gender;

    cout << "Enter Age: ";
    cin >> age;

    cin.ignore(); 

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Contact Number: ";
    cin >> userContact;

    User user1(userId, gender, age, name, userContact);



    // Display user information
    user1.display_info();
    
}

