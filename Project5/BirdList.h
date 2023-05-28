#pragma once
#include <string>
#include <vector>
using namespace std;
#include "Bird.h"

class BirdList {

protected:
	vector<Bird>List;

	void addBird(Bird bird) {

		List.push_back(bird);

	}

};