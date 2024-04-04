#include"Location.h"
#include<iostream>

Location::Location()
{
	cout << "Created location object" << endl;
}

Location::Location(int latitude, double longitude) {
	cout << "Created Location object" << endl;
	this->latitude = latitude;
	this->longitude = longitude;

}

int Location::getLatitude() {

	return latitude;

}

int Location::getLongitude() {

	return longitude;

}

void Location::setLatitude(int latitude) {

	this->latitude=latitude;
}


void Location::setLongitude(int longitude) {

	this->longitude = longitude;

}

// **********************************************************************************************
// Though the distance between two locations should be calculated using the Haversine formula, 
// in our requirements we **accept** the simple distance calculation 
// based on the formula found in  https://www.cuemath.com/geometry/distance-between-two-points/
// **********************************************************************************************
double Location::distanceFrom(Location& location) {

	return sqrt(pow(this->latitude - location.latitude, 2) + pow(this->longitude - location.longitude, 2));

}

ostream& operator<<(ostream& cout, Location l)
{
	cout << "Latitude: " << l.getLatitude() << endl << "Longitude: " << l.getLongitude();
	return cout;
}
