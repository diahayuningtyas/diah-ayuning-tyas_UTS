#include <iostream>
using namespace std;

int main()
{
    string nama;
	int umur;
	char Next;
    cout<<"PROGRAM PENGKATEGORIAN UMUR MANUSIA"<< endl;

    cout<<"Masukkan Nama anda	: ";
    getline(cin,nama);
    do{
	cout<<"Masukkan Umur anda	: ";
	cin>>umur;


	if(umur>=60 && umur<=100){
		cout<<"Kategori Lansia"; }
		else if(umur>=30 && umur<=59){
		cout<<"Kategori Dewasa"; }
		else if(umur>=18 && umur<=29){
		cout<<"Kategori Pemuda";}
		else if(umur>=12 && umur<=17){
		cout<<"Kategori Remaja"; } 
		else if(umur>=6 && umur<=11){
		cout<<"Kategori Anak-anak"; }
		else if(umur>=3 && umur<=5){
		cout<<"Kategori Balita"; }
		else if(umur>=1 && umur<=2){
		cout<<"Kategori Batita"; }
		else if(umur>=0 && umur<=0){
		cout<<"Kategori Bayi"; }
		cout<<" "<<endl;
	cout<<"Next ? [Y/N] : "; cin>>Next;
    cout<<endl;}
    while (Next == 'y' || Next == 'Y');
    cout<<"Terimakasih @diah ayuning tyas"<<endl;
    cout<<" "<<endl;
   
     return 0;
}
