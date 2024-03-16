#pragma once
#include <iostream>
#include "User.h"
#include "Date.h"
#include"chatbot.h"

using namespace std;
class Message
{
private: string content;
	   Date timestamp;
	   User sender;
public:
	Message() {}
	Message(string content, Date timestamp, User sender) {}

	void set_content(string content) {
		this->content = content;
	}
	void set_timestamp(Date timestamp) {
		Date x;x.getTimestamp();
		this->timestamp = timestamp;
	}
	void set_user(User sender) {
		this->sender = sender;
	}
	string get_content() {
		return content;
	}
	Date get_timestamp() {
		return timestamp;
	}
	User get_user() {
		return sender;
	}
	void sendMessage(User& sender, chatbot& bot, const string& content) {
		
		Date timestamp;
		// Create a Message object
		Message message(content, timestamp, sender);

		// Simulate sending the message
		message.send(bot);
		// You can add additional logic here, such as storing the message in a database or updating message logs
	}
	void send(chatbot& chatbot) {
		cout << "Sending message to chatbot: " << content << endl;
		// Simulate sending the message to the chatbot
		chatbot.receiveMessage(*this);
	}

};

