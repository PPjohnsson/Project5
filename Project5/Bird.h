#pragma once
#include <string>
using namespace std;
class Bird {
private:

	string klass;
	string svensktNamn;
	string latinsktNamn;
	int observationer;

public:

	Bird();
	Bird(string klass, string svensktNamn, string latinsktNamn, int observationer);
	~Bird();

};