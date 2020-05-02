#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

void ingresar();


int main(){
	int resp;
	//string nombrearchivo;
	//cout<<"Indique nombre de archivo: ";
	//getline(cin,nombrearchivo);
	
	do {
		system("CLS");
		cout<<"--------------------------"<<"\n";
		cout<<" Bienvenido, eleccione una opción "<<"\n";
		cout<<"-------------------"<<"\n";
		cout<<" 1 - Ingresar venta "<<"\n";
		cout<<" 2 - Modificar venta "<<"\n";
		cout<<" 3 - Eliminar venta "<<"\n";
		cout<<" 4 - Calcular total de ventas por modelo "<<"\n";
		cout<<" 5 - Modelo más vendido en los 30 días "<<"\n";
		cout<<" 6 - Salir"<<"\n";
		cout<<"--------------------------"<<"\n";
		cin>>resp;
		
		if (resp==1){		
			system("CLS");	
			ingresar();		
		}
		else if (resp==2){		
			system("CLS");
		}			
		else if (resp==6)
			break;
		else 
			break;
		
	} while(resp!=6);
	
	return 0;	
}

void ingresar(){
	
    float precio_modelo1 = 10, precio_modelo2 = 15, precio_modelo3 = 18.50, precio_modelo4 = 25;
    
    int dia,modelo,cantidad;

	    cout<<"ingrese el dia del mes:";
	    cin>>dia;
	    
		if(dia > 0 && dia < 31){
		    cout<<"ingrese el modelo:";
		    cin>>modelo;
		    if(modelo >0 && modelo<5){
		    	cout<<"ingrese la cantidad:";
		    	cin>>cantidad; 
			}
		}
		
	ofstream archivo; //leer archivo 
	archivo.open("ventas.txt",ios::app);
		
	//archivo.open(na.c_str(),ios::app);
	archivo<<dia<<","<<modelo<<","<<cantidad<<endl;
	archivo.close();
		
}
