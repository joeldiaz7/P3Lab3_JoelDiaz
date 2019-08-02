#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
#include <stdio.h>
#include <vector>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

#ifndef PATAS_CPP
#define PATAS_CPP

class patas{
	private:
		int cant;
		int largo;
		int tipo;

	public:
		patas(int cant, int largo, int tipo){
			this->cant=cant;
			this->largo=largo;
			this->tipo=tipo;
		}
		int getCant(){
			return this->cant;
		}
		int getLargo(){
			return this->largo;
		}
		int getTipo(){
			return this->tipo;
		}
		~patas();
};

#endif

