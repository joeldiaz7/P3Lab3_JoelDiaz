#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
#include <stdio.h>
#include <vector>
#include <iomanip>
#include <ctime>
#include <cstdlib>

#include "animal.cpp"
using namespace std;

#ifndef ZOO_CPP
#define ZOO_CPP

class zoo{
	private:
		string nombre;
		int tamano;
		int personas;
		vector<animal*> Artica;
		vector<animal*> Desertica;
		vector<animal*> Jungla;
		vector<animal*> Sabana;
	
	public:
		zoo(string nombre, int tamano, int personas){
			this->nombre=nombre;
			this->tamano=tamano;
			this->personas=personas;
		}
		
		string getNombre(){
			return this->nombre;
		}
		
		int getTamano(){
			return this->tamano;
		}
		
		int getCantPersona(){
			return this->personas;
		}
		
		vector<animal*>  getArtica(){
			return Artica;
		}
		
		vector<animal*> getDesertica(){
			return Desertica;
		}
		
		vector<animal*> getJungla(){
			return Jungla;
		}
		
		vector<animal*> getSabana(){
			return Sabana;
		}
		
		void setAnimales(animal* animal, int tipo){
			if(tipo==1){
				Artica.push_back(animal);
			}
			if(tipo==2){
				Desertica.push_back(animal);
			}
			if(tipo==3){
				Jungla.push_back(animal);
			}
			if(tipo==4){
				Sabana.push_back(animal);
			}
		}
		
		void print(){
			cout<<"Articos: "<<endl;
			for(int i=0;i<Artica.size();i++){
				cout<<Artica[i]->getNombre()<<" "<<Artica[i]->getEspecie()<<endl;
			}
			cout<<endl;
			cout<<"Deserticos: "<<endl;
			for(int i=0;i<Desertica.size();i++){
				cout<<Desertica[i]->getNombre()<<" "<<Desertica[i]->getEspecie()<<endl;
			}
			cout<<endl;
			cout<<"Jungla: "<<endl;
			for(int i=0;i<Jungla.size();i++){
				cout<<Jungla[i]->getNombre()<<" "<<Jungla[i]->getEspecie()<<endl;
			}
			cout<<endl;
			cout<<"Sabana"<<endl;
			for(int i=0;i<Sabana.size();i++){
				cout<<Sabana[i]->getNombre()<<" "<<Sabana[i]->getEspecie()<<endl;
			}
			cout<<endl;
		}
		
		~zoo(){}
};

#endif
