#include  <iostream>

using namespace std;

void menu();

void primos();

int multiplos(int,int,int);

int goldbach(int);

bool primo(int);

int main(){

}

void menu(){
	int opcion=0;
	do {
		cout <<"Laboratorio 2 Programacion 3"<<endl
			 <<"	1. Numeros Primos."<<endl
		 	<<" 	2. Numeros Multiplos."<<endl
		 	<<" 	3. Conjetura Goldbach."<<endl;
		cin >> opcion;
		switch (opcion) {
			case 1:{
					primos();
				}			
				break;
			case 2:{
					int a,b,n;
					cout<<"Ingrese el primer valor";
					cin>>a;
					cout<<endl<<"Ingrese el segundo valor: ";
					cin>>b;
					cout<<endl<<"Ingrese el tercer valor: ";
					cin>>n;
					cout<<endl<<"La suma de los numeros que son multiplos son: "+multiplos(a,b,n)<<endl;
				}
				break;
			case 3:{
					int num;
					cout<<"Ingresa un numero menor que 150: ";
					cin>>num;
					while(num>150||num<1) {
						cout<<endl<<"Numero Invalido: ";
						cin>>num;
					}
					goldbach(num);
				}
				break;
			case 4:
				cout<<"Por favor denme buena nota. :)"<<endl;
				break;
			default:
				cout<<"Numero invalido"<<endl;
		}
	} while (opcion!=4);
}

void primos(){
	cout<<"Ingrese el numero: ";
	int numero;
	cin>>numero;
	cout<<endl;
	int cont=1;
	for (int i= 2; i < numero ; i++) {
		if (primo(i)) {
			cont++;
		}
	}
	cout<<"La suma de los numero primos menor de "<<numero<<" es: "<<cont<<endl;
}

bool primo(int n){
	for (int i=2; i < n ; i++) {
		if (n%i==0) {
			return false;
		}
	}
	return true;
}

int multiplos(int a, int b, int n){

}

int goldbach(int num){

}
