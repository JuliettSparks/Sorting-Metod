#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
void seleccion(int,int);
int main(){
int J,I,N,K;
int V[1000];
int Sw;
int Aux;
cout<<char(168)<<"Cuantos numeros va a ingresar al vector?\n";
cin>>N;
srand(time(NULL));
for(I=0; I<N; I++)
{
	V[I]=1+rand()%900;	
}

for(I=0; I<N-1; I++)
{
K=I;
for (J=I+1; J<N; J++)
if (V[J]<V[K])
K=J;
Aux=V[I];
V[I]=V[K];
V[K]=Aux;
}
for(int i=0;i<N;i++){
	cout<<"["<<V[i]<<"]";
}
}
