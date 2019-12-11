#include <iostream>
using namespace std;
int queue[10], n = 10, front = -1, rear = 0,arr[10];
string nama[10];
string alamat[10];
void Insert() {
   int val;
   if (rear == n )
      cout<<"Truk Habis"<<endl;
   else {
      if (front == - 1)
      front = 1;
      cout<<"Masukkan data : ";
      cin>>val;
      rear++;
      queue[rear] = val;
      for (int x=val; x<=rear;x++){
			arr[x] = rear;
			cout<<"Data ke: "<<rear<<endl;
      		cout<<"Masukkan Nama Penerima: ";
      		cin>>nama[x];
      		cout<<"Masukkan Alamat Pengiriman: ";
      		cin>>alamat[x];
      		cout<<endl;
	  	}
   }
}

void Delete() {
   if (front == - 1 || front > rear) {
      cout<<"Tidak Ada Pesanan ";
   return ;
   } else {
      cout<<"Pesanan Selesai : "<< queue[front] <<endl;
      front++;;
   }
}
void Display() {
   if (front == - 1)
   cout<<"Tidak Ada Pesanan"<<endl;
   else {
      cout<<"Pesanan Menunggu : "<<endl;
      for (int i = front; i <= rear; i++) {
         cout<<queue[i]<<" "<<nama[i]<<" "<<alamat[i]<<endl;
     }
      cout<<endl;
   }
}
