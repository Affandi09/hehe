#include <iostream>
#include "queue.h"
#include "sort.h"
using namespace std;
typedef int angka;

void cari () {
	string name;
	angka count = 0;
	cout<<"Masukkan Nama Yang Akan Dicari: ";
	cin>>name;
   	for (int i = 1; i < 12; i++) {
      	if (name == nama[i]) {
        	cout<<"Nama: "<<nama[i]<<" Ditemukan"<<endl;
			count++;
     	} 
   	
  	} if (count == 0) {
     		cout<<"Nama Tidak Ada~"<<endl;
  		}
}

int main() {
   angka pil,ch,n=1;
   cout<<"1) Tambah Antrian"<<endl;
   cout<<"2) Pesanan Diselesaikan"<<endl;
   cout<<"3) Tampilkan Semua Pemesanan"<<endl;
   cout<<"4) Cari Pesanan"<<endl;
   cout<<"5) Urutkan pesanan"<<endl;
   cout<<"6) Exit"<<endl;
do {
   cout<<"Mau Ngapain mz! : ";
   cin>>pil;
   switch (pil) {
      	case 1: 
      	  n++;
		  Insert();
        break;
      	case 2: 
		  Delete();
		  
        break;
      	case 3: 
		  Display();
        break;
      	case 4: 
		  cari();
        break;
        case 5:
        	cout<<"Berdasarkan?\n1. Nama\n2. Alamat\n";
        	cin>>ch;
        	if(ch!=1 && ch!=2){
        		cout<<"Input salah!\n";
        		break;
			}
	       	sort(nama, alamat, n, ch);
	       	cout<<"\nNama\tAlamat"<<endl;
	       	for(int r=0;r<n;r++){
				cout<<nama[r]<<"\t"<<alamat[r]<<endl;
			}	
        break;
    	case 6: 
		cout<<"Exit";
    	break;
      default: cout<<"Salah Input mz!"<<endl;
   }
} while(pil!=6);
   return 0;
}
