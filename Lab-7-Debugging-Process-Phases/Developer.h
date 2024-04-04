#pragma once
#include <iostream>
using namespace std;
class Developer {
	int* age;/* You must keep the age member as a pointer. You CANNOT change it /o\ */
public:
	Developer();
	Developer(int age);
	Developer(Developer& rhs);
	int getAge();
	void setAge(int age);
	~Developer();
};
