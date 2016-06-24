
#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
using std::string;
using std::stringstream;
using namespace std;
using std::cout;
using std::cin;
using std::endl;
/*#include <stdio.h>
#include <stdlib.h>*/

int main(int argc, char const *argv[]){

	int opcion1 = 0;
	string cadena ="";
	char frase[50]="\0";

	while(opcion1<3){
		cout<<"1. Ejercicio 1 "<<endl;
		cout<<"2. Ejercicio 2 "<<endl;
		cout<<"3. Salir"<<endl;
		cin>>opcion1;
		for(int i =0; i<50;i++){
			frase[i]='\0';
		}
		if(opcion1==1){
			int opcion2=0;
			cout<<"1. desea encryptar "<<endl;
			cout<<"2. desencryptar "<<endl;
			cin>> opcion2;
			if(opcion2==1){

			

				int controlador =0;
				cout<<"Ejemplo holacomoestas"<<endl;
				cout<<"Ingrese una frase para encryptar"<<endl;
				cin>>frase;
				cout<<"la frase fue leida"<<endl;
				int tam = (sizeof(frase)/sizeof(frase[0]));
				for(int i =0 ; i <tam;i++){
					if( ((frase[i]>=48) && (frase[i]<=57) )|| ((frase[i]>=65) && (frase[i]<=90))){
						controlador=1;
						cout <<"No se aceptan numeros solo letras de 'a' a la 'z' y en minusculas "<<endl;
						cout <<"la frase fue eliminada por proteccion :') "<<endl;
						for(int i =0; i<50;i++){
							frase[i]='\0';
						}
						break;
					}


				}

				for(int i =0 ; i <tam;i++){
					if( (frase[i]>=97) && (frase[i]<=119) ){
						frase[i]= frase[i]+3;
					}
					if( (frase[i]==120) ){
						frase[i]=97;
					}
					if( (frase[i]==121) ){
						frase[i]=98;
					}
					if( (frase[i]==122) ){
						frase[i]=99;
					}

				}

				for(int i =0 ; i <tam;i++){
					cout<<frase[i];
				}
				cout<<endl;

			}

			if(opcion2==2){
				////desen

				int controlador =0;
				cout<<"Ejemplo krodfrprhvwdv"<<endl;
				cout<<"Ingrese una frase para encryptar"<<endl;
				cin>>frase;
				cout<<"la frase fue leida"<<endl;
				int tam = (sizeof(frase)/sizeof(frase[0]));
				for(int i =0 ; i <tam;i++){
					if( ((frase[i]>=48) && (frase[i]<=57) )|| ((frase[i]>=65) && (frase[i]<=90))){
						controlador=1;
						cout <<"No se aceptan numeros solo letras de 'a' a la 'z' y en minusculas "<<endl;
						cout <<"la frase fue eliminada por proteccion :') "<<endl;
						for(int i =0; i<50;i++){
							frase[i]='\0';
						}
						break;
					}


				}

				for(int i =0 ; i <tam;i++){
					if( (frase[i]>=97) && (frase[i]<=122) ){
						frase[i]= frase[i]-3;
					}

				}

				for(int i =0 ; i <tam;i++){
					cout<<frase[i];
				}
				cout<<endl;

			}



		}

		if(opcion1==2){
			int controlador=0;
			char tarjeta[16]="\0";
			int tam = (sizeof(tarjeta)/sizeof(tarjeta[0]));
			char tarjetatemp[16]="\0";
			for(int i =0; i<tam;i++){
				tarjeta[i]='\0';
				tarjetatemp[i]= '\0';
			}

			cout<<"Ingrese la la tarjeta de credito 0000 0000 0000 0000 sin espacio todo pegado"<<endl;
			cin >>tarjeta;
			for(int i =0; i<tam;i++){
				if( (tarjeta[i]>=48) || (tarjeta[i]<=57) ){

				}else{
					cout <<"no se aceptan letras solo numeros"<<endl;
					cout << "se borro del sistema la tarjeta invalida"<<endl;
					for(int i =0; i<tam;i++){
						tarjeta[i]='\0';
					}
					break;

				}
			}
			int x =0;
			int y =0;
			int contador =0;
			char o;
			int suma=0;
			for(int i =0; i<16;i++){
				if(i%2==0){
					x=(tarjeta[i]-48)*2;

					if(x>=10){
						y =x-10+1;
						suma = suma +y;
					}


				}else{
					y=x;
					suma = suma +y;
				}
				
			}
			suma-1;
			
			cout <<suma<<endl;
			string s = to_string(suma);
			s.at(1);
			cout<<s.c_str()<<endl;
			cout<<s.at(1)<<endl;
			if(s.at(1)=='0'){
				cout << "tarjeta Valida :)"<<endl;
			}else{
				cout<<"Tarjeta Invalida :("<<endl;
			}

//5882 4404 3141 338
		}

	}

	
	return 0;
}

