#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Persona.h"
#include"Menu.h"
#include "Fecha.h"

int main(){
	
	string nombre,apellido,localizacion,dato,correo,fecha;
    long CI,telefono;
    int edad,numero;
    float sueldo;
	Persona persona1(nombre, apellido, CI, edad, 
	localizacion, telefono, sueldo,correo,fecha);
	Menu menu;
	int opcion;
	do{
		opcion = menu.menu();
		switch(opcion){
			case 0:
				do{
					system("cls");
					persona1 = persona1.nuevaPersona();
				}while(menu.repetir() != 1);				
				break;

			case 1:
				do{	
					system("cls");	
					cout << "Introduzca la cedula: "; cin >> dato;
					numero = atoi(dato.c_str());
				}while(menu.repetir() != 1);
				//cola
				break;
			case 2:				
					system("cls");
					system("pause");					
				break;
			default:
				cout << "Saliendo.....\n";
				break;			
		}
	}while(opcion != 3);	

	system("pause");
	return 0;
}