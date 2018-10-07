//
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

void menu();
void programaConvierte(int o, int d, string x);
string convertirBase(int o, string x);
string convertirDecimal(int d,string x);
int stringToInt(char x);
char intToString(int x);


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
    programaConvierte(origen,destino,numero);
    veces--;
  }
}

void programaConvierte(int o, int d, string x){
  string a2;
  if(o!=10){
    a2=convertirBase(o,x);
  }
  if(o!=10&&d!=10){
    a2=convertirDecimal(d,a2);
  }
  if(o==10){
    a2=convertirDecimal(d,x);
  }
  cout<<a2<<endl;
}

string convertirBase(int o, string x){
  int i,j;
  int numero=0;
  int result;
  int n = x.length();
  int a[n];
  string decimal;
  for (i = n-1; i >= 0; i--) {
    cout<<i<<"\t";
  }
  cout<<endl;
  for (i = 0; i < n; i++) {
    a[i]=stringToInt(x[i]);
    cout<<x[i]<<"\t";
  }
  cout<<endl;
  for (i = 0, j=n-1; i < n; i++,j--) {
    cout<<x[j]<<" x "<<o<<"^"<<i<<" = ";
    if(a[i]>10){
      cout<<a[j]<<" x "<<o<<"^"<<i<<" = ";
    }
    cout<<a[j]<<" x "<<pow(o,i)<<" = ";
    cout<<a[j]*pow(o,i)<<endl;
  }
  for (i = 0, j=n-1; i < n; i++,j--) {
    result = a[j]*pow(o,i);
    if(result!=0){
        cout<<result;
    }
    numero+=result;
    if(result!=0 && i<n-1){
      cout<<"+";
    }
  }
  cout<<"=";
  decimal = to_string(numero);
  return decimal;
}

string convertirDecimal(int d,string x){
  int i,j;
  int n = stoi(x);
  string base="";
  string temp;
  int r; //reminder
  cout<<n<<"|_"<<d<<endl;
  for(i=1;n>0;i++){
    for (j=0;j<i;j++) {
      cout<<"  ";
    }
    r=n-(n/d)*d;
    n/=d;
    cout<<r<<" "<<n<<"|_"<<d<<endl;
    base+=intToString(r);
  }

  temp=base;
  n=base.length();
  for (i = 0,j=n-1;i<n; i++,j--) {
    base[i]=temp[j];
  }
  cout<<"=";
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
