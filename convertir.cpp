#include <iostream>
using namespace std;

int tamanoArreglo(int numero);
void menu();
int * numeroAArreglo(int n, int t);
void imprimirArreglo(int arreglo[],int tamano);

int main(int argc, char const *argv[]) {
  menu();
  return 0;
}
void menu(){
//  int veces,origen,destino;
    int numero,tamano;
/*  cout<<"Operaciones que deseas realizar: "
    cin>>veces;
    while(veces>0){
    cout<<"Dame base origen: ";
    cin>>origen;
    cout<<"Dame base destino: ";
    cin>>destino;*/
    cout<<"Dame numero: ";
    cin>>numero;
    int *arreglo;
    tamano=tamanoArreglo(numero);
    arreglo=numeroAArreglo(numero,tamano);
    imprimirArreglo(arreglo,tamano);
//  }
}

/*int leerArreglo(){
  return arreglo;
}*/
int tamanoArreglo(int numero){
  int tamano=0;
  while(numero>0){
    numero/=10;
    tamano++;
  }
  return tamano;
}
int * numeroAArreglo(int n, int t){
  int numero = n;
  int tamano = t;
  int *arreglo=new int[tamano];
  for (int i = tamano-1; i >= 0; i--) {
    arreglo[i] = numero % 10;
    numero /= 10;
  }
  return arreglo;
//  imprimirArreglo(arreglo,tamano);
}

/*int arregloANumero(int arreglo){
  return numero;
}*/

void imprimirArreglo(int arreglo[],int tamano){
  for (int i = 0; i < tamano; i++) {
    cout<<arreglo[i];
  }
  cout<<endl;
}
