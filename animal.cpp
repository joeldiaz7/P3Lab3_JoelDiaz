#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
#include <stdio.h>
#include <vector>
#include <iomanip>
#include <ctime>
#include <cstdlib>

#include "ojos.cpp"
#include "cola.cpp"
#include "patas.cpp"
#include "pelaje.cpp"
#include "orejas.cpp"


using namespace std;

#ifndef ANIMAL_CPP
#define ANIMAL_CPP

class animal{
	private:
		string especie;
		string nombre;
		int tamano;
		int tipo;
		patas* Patas;
		pelaje* Pelaje;
		ojos* Ojos;
		orejas* Orejas;
		cola* Cola;

	public:
		animal(string especie, string nombre, int tamano, int tipo, patas* Patas, pelaje* Pelaje, ojos* Ojos, orejas* Orejas, cola* Cola){
			this->especie=especie;
			this->nombre=nombre;
			this->tamano=tamano;
			this->tipo=tipo;
			this->Patas=Patas;
			this->Pelaje=Pelaje;
			this->Ojos=Ojos;
			this->Orejas=Orejas;
			this->Cola=Cola;
		}
		string getEspecie(){
			return this->especie;
		}
		string getNombre(){
			return this->nombre;	
		}
		int getTamano(){
			return this->tamano;
		}
		int getTipo(){
			return this->tipo;
		}
		~animal();
};

#endif

