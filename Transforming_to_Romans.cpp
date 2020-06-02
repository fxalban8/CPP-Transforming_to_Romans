#include <iostream>
using namespace std;


string giveRoman(int x);


int main(){

	int input;
	cout<<"Enter a number from 1 to 3000: "<<endl;
	cin>>input;

		
	
	return 0;
}


string giveRoman(int x){
	string roman="";
	int Th=0,H=0,Te=0,O=0;
	Th=x/1000;
	H=(x-Th*1000)/100;
	Te=((x-Th*1000)-H*100)/10;
	O=(((x-Th*1000)-H*100)-Te*10);
	
	

}


