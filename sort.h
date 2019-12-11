#include <iostream>
using namespace std;
void swap(string *a, string *b){
	string temp = *a;
	*a=*b;
	*b=temp;
}

void sort(string a[10], string b[10], int n, int ch){
	string temp;
	int i;
	if (ch==1) {
		for(int x=0; x<(n-1); x++){
			for(int y=(x+1); y<n; y++){
				i=0;
				while(int(a[x][i])==int(a[y][i]))
					i++;
				if(int(a[x][i])>int(a[y][i])){
					swap(a[x],a[y]);
					swap(b[x],b[y]);
				}
			}
		}	
	}
	else {
		for(int x=0; x<(n-1); x++){
			for(int y=(x+1); y<n; y++){
				i=0;
				while(int(a[x][i])==int(a[y][i]))
					i++;
				if(int(b[x][i])>int(b[y][i])){
					swap(a[x],a[y]);
					swap(b[x],b[y]);
				}
			}
		}
	}
}


