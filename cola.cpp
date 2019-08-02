#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
#include <stdio.h>
#include <vector>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

#ifndef COLA_CPP
#define COLA_CPP

class cola{
	private:
		int largo;
		int peluda;
		
	public:
		cola(int largo, int peluda){
			this->largo=largo;
			this->peluda=peluda;
		}
		int getLargo(){
			return this->largo;	
		}
		int getPeluda(){
			return this->peluda;
		}
		~cola(){}
};

#endif
