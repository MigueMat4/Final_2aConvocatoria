#include<iostream>

using namespace std;

int main(){
	int numero;
	int invertido;
	int r;	

	cout<<"Digite un numero: ";
	cin>>numero;
	
	if(numero==0){
		cout<<"El numero es cero";
	}
	else if(numero%2==0){
		cout<<"El numero es par";
		int a=0;
		cout<<" ";
		while (a!=numero)
		{
			a=a+2;
			cout<<a<<",";
		}
	}
	else{
		cout<<"El numero es impar";
		while(numero>0)
		{
    	r=numero%10;
        numero=numero/10;
        invertido=invertido*10+r;
   		}
   		cout<<"invertido:"<<invertido;
	}
	return 0;
}
