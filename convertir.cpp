#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

void menu();
//int tamanoArreglo(int numero);
//int * numeroAArreglo(int n, int t);
void programaConvierte(int o, int d, string x);
string convertirBase(int o, string x);
string convertirDecimal(int d,string x);
int stringToInt(char x);
char intToString(int x);
//int digitosDecimal(int x);
//void imprimirArreglo(int arreglo[],int tamano);

int main(int argc, char const *argv[]) {
  menu();
  return 0;
}
void menu(){
    int veces,origen,destino;
    string numero;
    cout<<"Operaciones que deseas realizar: ";
    cin>>veces;
    while(veces>0){
    cout<<"Dame base origen: ";
    cin>>origen;
    cout<<"Dame base destino: ";
    cin>>destino;
    cout<<"Dame numero: ";
    cin>>numero;
    /*int *arreglo;
    tamano=tamanoArreglo(numero);
    arreglo=numeroAArregslo(numero,tamano); */
    programaConvierte(origen,destino,numero);
    veces--;
  }
}

/*
int leerArreglo(){
  return arreglo;
}
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
  imprimirArreglo(arreglo,tamano);
}
int arregloANumero(int arreglo){
  return numero;
}
*/

void programaConvierte(int o, int d, string x){
  string a2;
  if(o!=10){
    a2=convertirBase(o,x);
  }
  if(o!=10&&d!=10){
    a2=convertirDecimal(d,a2);
  }else{
    a2=convertirDecimal(d,x);
  }
  cout<<a2<<endl;
}

string convertirBase(int o, string x){
  int i,j;
  int numero=0;
  int n = x.length();
  int a1[n];
  string decimal;
  for (i = 0; i < n; i++) {
    a1[i]=stringToInt(x[i]);
  }
  for (i = 0, j=n-1; i < n; i++,j--) {
    numero+=(a1[j]*pow(o,i));
  }
  decimal = to_string(numero);
  return decimal;
}

string convertirDecimal(int d,string x){
  int i,j;
  int n = stoi(x);
  string base="";
  string temp;
  int r; //reminder
  while(n>0){
    r=n-(n/d)*d;
    n/=d;
    base+=intToString(r);
  }
  temp=base;
  n=base.length();
  for (i = 0,j=n-1;i<n; i++,j--) {
    base[i]=temp[j];
  }

  return base;
}

int stringToInt(char x){
  int n;
  switch (x) {
    case '0':
      n=0;
      break;
    case '1':
      n=1;
      break;
    case '2':
      n=2;
      break;
    case '3':
      n=3;
      break;
    case '4':
      n=4;
      break;
    case '5':
      n=5;
      break;
    case '6':
      n=6;
      break;
    case '7':
      n=7;
      break;
    case '8':
      n=8;
      break;
    case '9':
      n=9;
      break;
    case 'A':
      n=10;
      break;
    case 'B':
      n=11;
      break;
    case 'C':
      n=12;
      break;
    case 'D':
      n=13;
      break;
    case 'E':
      n=14;
      break;
    case 'F':
      n=15;
      break;
    default:
      break;
  }
  return n;
}

char intToString(int x){
  char n;
  switch (x) {
    case 0:
      n='0';
      break;
    case 1:
      n='1';
      break;
    case 2:
      n='2';
      break;
    case 3:
      n='3';
      break;
    case 4:
      n='4';
      break;
    case 5:
      n='5';
      break;
    case 6:
      n='6';
      break;
    case 7:
      n='7';
      break;
    case 8:
      n='8';
      break;
    case 9:
      n='9';
      break;
    case 10:
      n='A';
      break;
    case 11:
      n='B';
      break;
    case 12:
      n='C';
      break;
    case 13:
      n='D';
      break;
    case 14:
      n='E';
      break;
    case 15:
      n='F';
      break;
    default:
      break;
  }
  return n;
}
/*
int digitosDecimal(int x){
  n=0;
  for(n=0;x>0;n++){
    x/=10;
  }
  return n;
}
void imprimirArreglo(int arreglo[],int tamano){
  for (int i = 0; i < tamano; i++) {
    cout<<arreglo[i];
  }
  cout<<endl;
}
*/
