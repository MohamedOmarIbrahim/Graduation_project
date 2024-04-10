#pragma once
#include <iostream>

#include "Message.h"
using namespace std;
class chatbot
{
public:
	//chatbot(){}
	// Function to receive a message from a user
		/*void receiveMessage(const Message& message) {
		
	}*/
	void analyze_emergency() {
		string responses[] = {
		   "Oh no! Let's assess the situation and find a solution together!",
		   "Stay calm! I'm here to help you through this emergency.",
		   "Emergency detected! Don't worry, I'll guide you on what to do next."
		};
		int idx = rand() % (sizeof(responses) / sizeof(responses[0]));
		cout << responses[idx] << endl;
	}
	void recommend_action() {
		string actions[] = {
		   "Call emergency services immediately!",
		   "Find a safe place and stay there until help arrives.",
		   "Follow evacuation procedures if necessary.",
		   "Administer any first aid if you're trained to do so."
		};
		int idx = rand() % (sizeof(actions) / sizeof(actions[0]));
		cout << "My recommendation: " << actions[idx] << endl;

	}
	void contact_services() {
		string contacts[] = {
			"Dial 911 (or your country's equivalent emergency number) immediately!",
			"Calling emergency services now. Stay on the line with me.",
			"I'm connecting you to emergency services right away. Please wait."
		};
		int idx = rand() % (sizeof(contacts) / sizeof(contacts[0]));
		cout << contacts[idx] << endl;
	}
};

