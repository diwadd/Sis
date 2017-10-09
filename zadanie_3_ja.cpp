#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	int n;
	int m;
	int suma=0;
	
	cout<<"podaj liczbe"<<endl;
	cin>>n;
	
	for(int a=1; a<=n; a++)
	{

		cout<<"podaj liczbe"<<endl;
		cin>>m;

		suma=suma+m;

		if(suma>100)
		{
			cout<<"suma podanych liczb jest wieksza niz 100"<<endl;
			cout<<"ilosc wpisanych liczb to "<<a<<endl;
			break;
		}

		
	}
	cout<<"suma to"<<endl;
	cout<<suma;
	return 0;
}
