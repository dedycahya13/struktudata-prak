#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;
	int main(){
		int a, b, t=0, w, i=0;
		float r, s, v;
	
			cout<<"Masukkan jumlah data : ";cin>>b;
		int c[b];
		for(a=0;a<b;a++){
				cout<<"Masukkan data ke-"<<a+1<<" = ";cin>>c[b];
			t=t+c[b];
			i=i+pow(c[b],2);
		
	}
		r=t/b;
		w=pow(t,2);
		v=(b*i-w)/(b*(b-1));
		s=sqrt(v);
				cout<<endl;
				cout<<"Rata-rata = "<<r<<endl;
				cout<<"Varian = "<<v<<endl;
				cout<<"Standar Deviasi = "<<s;
	
	getch();
}
