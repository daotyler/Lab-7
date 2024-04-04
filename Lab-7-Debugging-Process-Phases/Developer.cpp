#include"Developer.h"
#include<iostream>

Developer::Developer()
{
	cout << "A developer object is created" << endl;
}

Developer::Developer(int age) {
	cout << "A developer object is created" << endl;
	this->age = new int;
	*this->age = age;
}

Developer::Developer(Developer& rhs) {

	cout << "A developer object is copied" << endl;
	age = new int;
	*age = *(rhs.age);

}

int Developer::getAge() {

	return *age;

}

void Developer::setAge(int age) {

	*this->age = age;

}

Developer::~Developer() {

	delete age;

}
