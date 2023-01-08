#include<iostream>
using namespace std;

int main(){
	int a,b;
	
	cout << "Masukkan variabel A: ";
	cin >> a;
	cout << "Masukkan variabel B: ";
	cin >> b;
	
	if(a < b){
		cout << "Variabel A Lebih kecil dari B";
	}else{
		cout << "Variabel A Lebih besar dari B";
	}

	return 0;
}
