#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
#include <stdio.h>
#include <vector>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

#ifndef PELAJE_CPP
#define PELAJE_CPP

class pelaje{
	private:
		string color;
		int grosor;
		int largo;

	public:
		pelaje(string color, int grosor, int largo){
			this->color=color;
			this->grosor=grosor;
			this->largo=largo;
		}
		string getColor(){
			return this->color;
		}
		int getGrosor(){
			return this->grosor;
		}
		int getLargo(){
			return this->largo;
		}
		~pelaje();
};

#endif
