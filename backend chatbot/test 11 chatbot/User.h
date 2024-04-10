#pragma once
#include <iostream>
#include"location.h"
#include"validation.h"
#include"Message.h"

using namespace std;

class User
{
private:
	int user_id;
    int age; 
	char gender;
	location user_location;
	string name, user_contact;
public:
	User(): user_id(0), age(0),gender('\0') {}
	User(int user_id, char gender, int age, string name, string user_contact) {
		this->user_id = user_id;
		this->gender = gender;
		setage(age);
		setname(name);
		setuser_contact(user_contact);
	}
	User(int user_id,char gender,int age,string name,string user_contact,location user_location)
	{
		this->user_id = user_id;
		this->gender = gender;
		setage(age);
		setname(name);
		setuser_contact(user_contact);
		setuser_location(user_location);
	}
	
	void setage(int age) {
		while (true)
		{
			if (validation::validateAge(age)) {
				this->age = age;
				return;
			}
			else
			{
				cout << "Invalid age. Please enter a valid age.\n";
				cin >> age;
			}
		}
		
	}
	void setname(string name) {
		while (true)
		{
			if (validation::isValidName(name)) {
				this->name = name;
				return;
			}
			else {
				cout << "Invalid name. Please enter a valid name.\n";
				getline(cin, name);
				cin.ignore(1, '\n');
			}
		}
		
	}
	void setuser_contact(string user_contact) {
		while (true)
		{
			if (validation::isValidPhoneNumber(user_contact)) {
				this->user_contact = user_contact;
				return;
			}
			else {
				cout << "Invalid Egyptian phone number. Please enter a number in the format 01XYYYYYYYY." << endl;
				cin >> user_contact;
			}
		}
	}
	void setuser_location(location user_location) {
		this->user_location = user_location;
	}
	string getuser_contact() {
		return user_contact;
	}
	location getuser_location(){
		return user_location;
	}
	string getname() {
		return name;
	}
	int getage() {
		return age ;
	}

	// Function to check if user is male
	bool isMale()
	{
		//return gender;
	}
	void connect_chatbot() {
		
	}
	void display_info() {
		cout << name<<endl;
		cout << age<<endl;
		cout << gender<<endl;
		cout << user_contact<<endl;
	}
};

