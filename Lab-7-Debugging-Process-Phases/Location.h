#pragma once
#include <iostream>
using namespace std;
class Location {
	double latitude;
	double longitude;
public:
	Location();
	Location(int latitude, double longitude);
	int getLatitude();
	int getLongitude();
	void setLatitude(int age);
	void setLongitude(int age);
	double distanceFrom(Location& location);
	friend ostream& operator<<(ostream& cout, Location);
};

