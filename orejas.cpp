#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
#include <stdio.h>
#include <vector>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

#ifndef OREJAS_CPP
#define OREJAS_CPP

class orejas{
	private:
		int tamano;
		int audicion;

	public:
		orejas(int tamano, int audicion){
			this->tamano=tamano;
			this->audicion=audicion;
		}
		int getTamano(){
			return this->tamano;
		}
		int getAudicion(){
			return this->audicion;
		}
		~orejas();
};

#endif

