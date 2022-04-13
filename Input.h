#include <iostream>
using namespace std;

class Kasus{
private :
int jum_bul,Pengeluaran[50], sub_tot[50],uang;
	float tot;
public :
void aplikasi(){
  cout<<"Uang Saku = ";
  cin>>uang;
	cout<<"Jumlah Pengeluaran"<<endl;
	cout<<"---------------------------"<<endl;
	cout<<endl;
	cout<<"Masukan Jumlah Bulan : ";
	cin>>jum_bul; 
	
	for (int i=0; i<jum_bul;i++){
		cout<<endl;
		cout<<"Bulan Ke-"<<i+1<<endl;
		cout<<endl;
		
		cout<<"Pengeluaran      : ";
		cin>>Pengeluaran[i];
		
		sub_tot[i]=Pengeluaran[i]; 
		tot+=sub_tot[i];
	}

	cout<<"Uang saku = "<<uang<<endl;
	cout<<"Jumlah Pengeluaran = "<<tot<<endl;
	cout<<"Sisa tabungan saat ini = "<<uang-tot<<endl;
}
};
