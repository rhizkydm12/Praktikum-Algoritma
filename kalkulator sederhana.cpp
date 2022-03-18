#include <iostream>
#include <conio.h>
#include <string>

using namespace std;
int main(){
	int angka1, angka2, pil;
	float hasil;
	string operasi;

	cout<<"====>PILIH OPERASI YANG DIINGINKAN<===="<<endl;
	cout<<"1. penjumlahan"<<endl;
	cout<<"2. pengurangan"<<endl;
	cout<<"3. perkalian"<<endl;
	cout<<"4. pembagian"<<endl;

	cout<<"masukan pilihan : ";cin>>pil;
	cout<<"============================"<<endl;
	cout<<"masukan bilangan pertama : ";cin>>angka1;
	cout<<"masukan biangan ke dua : ";cin>>angka2;

	switch(pil){
		case 1 : hasil=angka1+angka2;
		operasi = '+';
		break;

		case 2 : hasil=angka1-angka2;
		operasi = '-';
		break;

		case 3 : hasil=angka1*angka2;
		operasi = '*';
		break;

		case 4 : hasil=angka1/angka2;
		operasi = '/';
		break;
	}

	cout<<"\n";
	cout<<"==========HASIL=========="<<endl;
	cout<<"   "<<angka1<<operasi<<angka2<<"="<<hasil<<endl;
	cout<<"========================="<<endl;
	getch();

}
