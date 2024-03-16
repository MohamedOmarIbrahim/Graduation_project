
#include <iostream>
#include"User.h"
#include"Date.h"
#include"chatbot.h"
using namespace std;

int main()
{
    
   //Date timeStamp;
  // string currenttimestamp = timeStamp.getTimestamp();
  // cout << "current time stamp is " << currenttimestamp;
   //cout << "===============================\n";
  // chatbot bot;
  // bot.analyze_emergency();

   User user;
   string phone_num,name;
   cin >> phone_num;
   user.setuser_contact(phone_num);
   
   getline(cin, name);
   user.setname(name);


    
}

