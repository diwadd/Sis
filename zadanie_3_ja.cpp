#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	int n;
	int suma=0;
	
	cout<<"podaj liczbê"<<endl;
	cin>>n;
	
	for(int a=0; a<n; a++)
	{
		suma=suma+a;
		
	}
	cout<<"sumat to"<<endl;
	cin>>suma;
	return 0;
}
