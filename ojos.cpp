#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
#include <stdio.h>
#include <vector>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

#ifndef OJOS_CPP
#define OJOS_CPP

class ojos{
	private:
		string color;
		int visionNoct;

	public:
		ojos(string color, int visionNoct){
			this->color=color;
			this->visionNoct=visionNoct;
		}
		string getColor(){
			return this->color;
		}
		int getVisionNoct(){
			return this->visionNoct;
		}
		~ojos(){}
};

#endif

