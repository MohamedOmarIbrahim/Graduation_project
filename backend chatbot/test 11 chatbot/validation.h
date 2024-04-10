#pragma once
#include<iostream>
#include<string>
#include<regex>
using namespace std;
class validation
{public:
	static bool isValidPhoneNumber(string& phoneNumber) {
		// Regular expression pattern to match a valid Egyptian phone number
		regex pattern("^(01)[0-2]{1}[0-9]{8}$");

		// Check if the phone number matches the pattern
		return regex_match(phoneNumber, pattern);
	}
	static bool isValidName(const string& name) {
		// Regular expression pattern to match a valid name
		regex pattern("^[a-zA-Z]+(?:[\\s-][a-zA-Z]+)*$");

		// Check if the name matches the pattern
		return regex_match(name, pattern);
	}

	static bool validateAge(int& age) {
		if (age >= 0 && age <= 100) {
			return true;
		}
		else {
			return false;
		}
	}
};

