#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
using namespace std;
int main(){
	string rehber[5] [2] = { {"jagged", "onun adi jagged"}, {"sansar","21"}, {"saian","gitti geldi hiphop"}, {"�ehin�ah","alamutharameyn"}, {"karakan","siz bizi salak m� zannettiniz :)"}};
	
	int i=0;
	char gir[100];
	printf("Kisi adi giriniz:");
	scanf("%s",&gir);
	
	for(i=0; i<10;i++){
		if(rehber[i][0]==gir){
			cout << "\nkisi adi: " << gir << "\tAciklama: " << rehber[i][1];
		}
		if(i==10){
			printf("kisi bulunamadi");
		}
		
	}
}
