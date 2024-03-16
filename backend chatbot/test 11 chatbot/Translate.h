#pragma once
#include<iostream>
#include"Message.h"
using namespace std;
class Translate
{
public:
	void english_to_arabic(string content) {
		Message message;
		string text=message.get_content();
		// convert from english to arabic 
		message.set_content(text);

	}
	void arabic_to_english(string content) {
		Message message;
		string text = message.get_content();
		//convert from arabic to english
		message.set_content(text);

	}
};

