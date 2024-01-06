#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << "###############################\n";
    cout << "#                             #\n";
    cout << "# Kalkulator Perpangkatan C++ #\n";
    cout << "#    Coded By Daviz_Arva      #\n";
    cout << "#                             #\n";
    cout << "###############################\n";
    cout << "                               \n";
	int a,b,hasil;
	cout<<"Masukkan bilangan yang berpangkat = ";
	cin>>a;
	cout<<"Masukkan pangkatnya = ";
	cin>>b;
	hasil=pow(a,b);
	cout<<"Hasil = "<<hasil;
    return 0;
}

