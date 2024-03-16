#pragma once
#include <iostream>
class location
{
public:
	double latitude, longitude;
public:
	location() {
		latitude = 0;
		longitude = 0;
	}
	location(double latitude, double longitude) {
		this->latitude = latitude;
		this->longitude = longitude;
	}
  
};

