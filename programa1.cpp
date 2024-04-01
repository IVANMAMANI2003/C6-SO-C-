#include<iostream>

using namespace std;

main(void){
	//tipos de datos en C y C++
	int a; //variable a
	int b; //variable b
	
	//asiganacion de vlores a variables
	a=9;
	b=5;
	
	int c;
	c=a+b;
	
	cout<<"valor de la varible a: " <<a<<endl;
	cout<<"valor de la varible a: " <<b<<endl;
	cout<<"valor de la varible a: " <<c<<endl;
	
	cout<<"=================================="<<endl;
	
	//el operador de "DESREFERENCIACION" nos permite visualizar 
	//la direccion de memoria que ocupa una varible, por ejemplo:
	
	cout<<"la direccion de la memoria de la variable a es: "<<&a<<endl;
	cout<<"la direccion de la memoria de la variable b es: "<<&b<<endl;
	cout<<"la direccion de la memoria de la variable c es: "<<&c<<endl;
	
	

}

