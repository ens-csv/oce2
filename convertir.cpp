#include <iostream>
using namespace std;

void menu();
int tamanoArreglo(int numero);
int numeroAArreglo(int numero, int tamano);
void imprimirArreglo(int arreglo[],int tamano);

int main(int argc, char const *argv[]) {
  menu();
  return 0;
}
void menu(){
//  int veces,origen,destino;
    int numero;
/*  cout<<"Operaciones que deseas realizar: "
    cin>>veces;
    while(veces>0){
    cout<<"Dame base origen: ";
    cin>>origen;
    cout<<"Dame base destino: ";
    cin>>destino;*/
    cout<<"Dame numero: ";
    cin>>numero;
    int tamano = tamanoArreglo(numero);
    int arreglo[tamano];
    *arreglo=numeroAArreglo(numero,tamano);
    imprimirArreglo(arreglo,tamano);
//  }
}

int tamanoArreglo(int numero){
  int tamano=0;
  while(numero>0){
    numero/=10;
    tamano++;
  }
  return tamano;
}

/*int leerArreglo(){
  return arreglo;
}*/

int numeroAArreglo(int numero, int tamano){
  int arreglo[tamano];
  for (int i = tamano-1; i >= 0; i--) {
    arreglo[i] = numero % 10;
    numero /= 10;
  }
  return arreglo[tamano];
}

/*int arregloANumero(int arreglo){
  return numero;
}*/

void imprimirArreglo(int arreglo[],int tamano){
  for (int i = 0; i < tamano; i++) {
    cout<<arreglo[i]<<"";
  }
  cout<<endl;
}
