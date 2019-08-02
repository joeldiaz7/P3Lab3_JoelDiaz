#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
#include <stdio.h>
#include <vector>
#include <iomanip>
#include <ctime>
#include <cstdlib>

#include "zoo.cpp"
using namespace std;

bool t = true;
int op, pos;
vector<animal*> espera;

int main(){
	cola* col;
	patas* pata;
	pelaje* pelo;
	ojos* ojo;
	orejas* oreja;
	animal* a;
	////////////cosas de animal
	string especie, nombre;
	int tipo; 
		//tipos: artic - desert - tropic - sabana
	int tamano1;
	//patas
	int cant, largo;
	string tipoP;
	//pelaje
	string color2;
	int grosor2, largo2;
	//ojos
	string colorO;
	int vision;
	//orejas
	int tamanoO, audi;
	//cola
	int largoC, peludaC;
	////////////
	string name;
	int tamano, personas;
	cout<<"Ingrese nombre del zoologico: "<<endl;
	cin>>name;
	cout<<"Ingrese tamano (km^2): "<<endl;
	cin>>tamano;
	cout<<"Ingrese capacidad de personas: "<<endl;
	cin>>personas;
	zoo* z = new zoo(name, tamano, personas);
	while(t){
		cout<<"Ingrese una opcion: "<<endl;
		cout<<"1) Crear Animal"<<endl;
		cout<<"2) Agregar al zoologico"<<endl;
		cout<<"3) Listar zoologico"<<endl;
		cout<<"4) Salir"<<endl;
		cin>>op;
		switch(op){
			case 1://crear
				cout<<"Ingrese especie: "<<endl;
				cin>>especie;
				cout<<"Ingrese nombre: "<<endl;
				cin>>nombre;
				cout<<"Seleccione tipo: "<<endl;
				cout<<"1) Artico"<<endl;
				cout<<"2) Desertico"<<endl;
				cout<<"3) Tropical"<<endl;
				cout<<"4) De Sabana"<<endl;
				cin>>tipo;
				cout<<"Ingrese tamano: "<<endl;
				cin>>tamano1;
				cout<<"Ingrese cantidad de patas: "<<endl;
				cin>>cant;
				cout<<"Ingrese largo de patas: "<<endl;
				cin>>largo;
				cout<<"Ingrese tipo de patas: "<<endl;
				cin>>tipo;
				//
				pata = new patas(cant, largo, tipo);
				//
				cout<<"Ingrese color del pelaje: "<<endl;
				cin>>color2;
				cout<<"Ingrese grosor de pelaje: "<<endl;
				cin>>grosor2;
				cout<<"Ingrese largo de pelaje: "<<endl;
				cin>>largo2;
				//
				pelo = new pelaje(color2, grosor2, largo2);
				//
				cout<<"Ingrese color de ojos: "<<endl;
				cin>>colorO;
				cout<<"Tiene vision nocturna? [1:SI / 2:NO]"<<endl;
				cin>>vision;
				//
				ojo = new ojos(colorO, vision);
				//
				cout<<"Ingrese tamano de orejas: "<<endl;
				cin>>tamanoO;
				cout<<"Ingrese capacidad de audicion: "<<endl;
				cin>>audi;
				//
				oreja = new orejas(tamanoO, audi);
				//
				cout<<"Ingrese largo de cola: "<<endl;
				cin>>largo2;
				cout<<"Es peluda? [1:SI / 2:NO]: "<<endl;
				cin>>peludaC;
				//
				col = new cola(largo2, peludaC);
				//
				a = new animal(especie, nombre, tamano1, tipo, pata, pelo, ojo, oreja, col);
				espera.push_back(a);
				cout<<"Animal creado"<<endl;
				break;
			case 2://agregar
				cout<<"Lista de animales: "<<endl;
				for(int i=0;i<espera.size();i++){
					cout<<i<<". "<<espera[i]->getNombre();
				}
				cout<<endl;
				cout<<"Ingrese posicion a agregar: ";
				cin>>pos;
				if(espera[pos]->getTipo()==1){
				  	z->setAnimales(espera[pos], 1);
		     	}
				if(espera[pos]->getTipo()==2){
					z->setAnimales(espera[pos],2);
				}
				if(espera[pos]->getTipo()==3){
					z->setAnimales(espera[pos], 3);
				}
				if(espera[pos]->getTipo()==4){
				  	z->setAnimales(espera[pos], 4);
				}
				cout<<"Agregado con exito"<<endl;
				break;
			case 3://listar
					z->print();
				break;
			case 4://salir
				return 0;
				break;
		}
		
	}
	//
	return 0;
}


