#pragma once
#include <iostream>
#include"location.h"
#include"validation.h"

using namespace std;

class User
{
private:
	int user_id, age; 
	bool gender;
	location user_location;
	string name, user_contact;
public:
	User() {
		user_id = 0;
		age = 0;
	}
	User(int user_id,int age,bool gender,string name,string user_contact,location user_location){
		this->user_id = user_id;
		this->gender = gender;
		setage(age);
		setname(name);
		setuser_contact(user_contact);
		setuser_location(user_location);
	}
	bool isValidPhoneNumber(string& phoneNumber) {
		// Regular expression pattern to match a valid Egyptian phone number
		regex pattern("^(01)[0-2]{1}[0-9]{8}$");

		// Check if the phone number matches the pattern
		return regex_match(phoneNumber, pattern);
	}
	bool isValidName(const string& name) {
		// Regular expression pattern to match a valid name
		regex pattern("^[a-zA-Z]+(?:[\\s-][a-zA-Z]+)*$");

		// Check if the name matches the pattern
		return regex_match(name, pattern);
	}
	void setage(int age) {
		this->age = age;
	}
	void setname(string name) {
		bool valid = true;
		while (valid)
		{
			cin >> name;
			if (isValidName(name)) {
				this->name = name;
				valid = false;
			}
			else {
				cout << "Invalid name. Please enter a valid name.";
			}
		}
		
	}
	void setuser_contact(string user_contact) {
		bool valid = true;
		while (valid)
		{
			cin >> user_contact;
			if (isValidPhoneNumber(user_contact)) {
				this->user_contact = user_contact;
				valid = false;
			}
			else {
				cout << "Invalid Egyptian phone number. Please enter a number in the format 01XYYYYYYYY." << endl;
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
		return age;
	}
	bool isAdult()
	{
		return age >= 18;
	}

	// Function to check if user is male
	bool isMale()
	{
		return gender;
	}
	void connect_chatbot() {

	}
};

