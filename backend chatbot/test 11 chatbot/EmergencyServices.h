#pragma once
#include<iostream>
#include"User.h"
#include"Date.h"
#include"location.h"
class EmergencyServices
{
private: User caller;
	     Date timestamp;
		 location User_location;
public:
	EmergencyServices(User caller, Date timestamp, location User_location) {

	}
		void set_caller(User caller) {
			this->caller = caller;
	}
		void set_timestamp(Date timestamp) {
			this->timestamp = timestamp;
		}
		void set_location(location location) {
			this->User_location = location;
		}
		User get_calller() {
			return caller;
		}
		Date get_timestamp() {
			return timestamp;
		}
		location get_location() {
			return User_location;
		}
};

