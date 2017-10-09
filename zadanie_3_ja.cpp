#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	int n;
    int m;
	int suma=0;
	
	cout<<"podaj liczbê"<<endl;
	cin>>n;
	
	for(int a=0; a<n; a++)
	{

		cout<<"podaj liczbê"<<endl;
		cin>>m;

		suma=suma+m;

		if(suma>100)
		{
			cout<<"suma podanych liczb jest wiêksza ni¿ 100"<<endl;
			cout<<"ilosc wpisanych liczb to "<<a<<endl;
			break;
		}

		
	}
	cout<<"sumat to"<<endl;
	cout<<suma;
	return 0;
}
