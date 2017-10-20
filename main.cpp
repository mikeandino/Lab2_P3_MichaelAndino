#include  <iostream>

using namespace std;

void menu();

void primos();

int multiplos(int,int,int);

int goldbach(int);

bool primo(int);

int main(){
	menu();
	return 0;
}

void menu(){
	int opcion = 0;
	do {
		cout <<"Laboratorio 2 Programacion 3"<<endl
			 <<"	1. Numeros Primos."<<endl
		 	 <<" 	2. Numeros Multiplos."<<endl
		 	 <<" 	3. Conjetura Goldbach."<<endl
			 <<"	4. Salir."<<endl
			 <<"	Ingresa opcion: ";
		cin >> opcion;
		cout<<endl;
		switch (opcion){
			case 1:{
					primos();
					break;
				};			
			case 2:{
					int a,b,n;
					cout<<"Ingrese el primer valor: ";
					cin>>a;
					cout<<endl<<"Ingrese el segundo valor: ";
					cin>>b;
					cout<<endl<<"Ingrese el tercer valor: ";
					cin>>n;
					cout<<endl<<"La suma de los numeros que son multiplos son: "<<multiplos(a,b,n)<<endl;  
					break;
				   };
			case 3:{
					int num;
					cout<<"Ingresa un numero menor que 150: ";
					cin>>num;
					while((num>150||num<1)&&(num&&2!=0)) {
						cout<<"Numero Invalido: ";
						cin>>num;
					}
					goldbach(num);
					break;
				};
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
	int cont=0;
	for (int i=1; i < numero ; i++) {
		if (primo(i)) {
			cont+=i;
		}
	}
	cout<<"La suma de los numero primos menor de "<<numero<<" es: "<<cont<<endl;
}

bool primo(int n){
	int cont=0;
	for (int i=1; i <=n ; i++) {
		if (n%i==0) {
			cont++;
		}
	}
	if (cont==2) {
		return true;
	}else{
		return false;
	}
}

int multiplos(int a, int b, int n){
	int suma = 0;
	for (int i= 1; i <= n ; i++) {
		if (i%a==0||i%b==0) {
			suma+=i;
		}
	}
	return suma;
}

int goldbach(int num){
	for (int i=1 ; i < num ; i++) {
		if (primo(i)) {
			for (int j= 1; j < num ; j++) {
				if (primo(j)) {
					if (i+j==num) {
						cout<<i<<"+"<<j<<"="<<num<<endl;
					}
				}
			}
		}	
	}
}
