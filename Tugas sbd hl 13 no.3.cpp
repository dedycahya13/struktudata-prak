#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

main(){
	
	char word[20];
	int a, b, vw;
		cout<<"Masukkan kalimat Yang Akan di Buat : ";cin>>word;
		cout<<endl;
			vw=strlen(word);
		
	for(a=vw;a>=0;a--){
			for(b=0;b<a;b++){
			cout<<word[b];		
			}
			cout<<endl;
		
	}
	getch();
}

