#include<iostream>

using namespace std;

//======================= Punteros ================= //

main(void){
	
	//declaramos una variable normal denominada "x" de tipo entero
	int x;
	x=8;
	
	// Declaramos un puntero a int
	
	int *ptr;
	// guardamos la direccion de "x" en el puntero
	ptr=&x;
	
	cout<<"La direccion de x es: "<<&x; //mostramos la direcciopn de x = algo como 0x6ffe14
	cout<<endl; // solto de linea
	cout<<"el valor del puntero guardado en ptr es: "<<ptr; // mostramos el valor del puntero, esto es la direccion de x = algo como 0x6ffe14
	cout<<endl;
	cout<<"La direccion del puntero ptr es: "<<&ptr; //El puntero como tal tambien tien e una direccion particular algo como 0x6ffe00
	
	

}

