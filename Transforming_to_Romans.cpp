#include <iostream>
#include <limits>
using namespace std;


string giveRoman(int x);
void verifyInput(int& x);


int main(){

	int input;
	cout<<"Enter a number from 1 to 3999: "<<endl;
	cin>>input;

		

	while(!cin||input<1||input>3999){
	verifyInput(input);
	}

	cout<<giveRoman(input)<<endl;	
	return 0;
}


string giveRoman(int x){
	string roman="";
	int Th=0,H=0,Te=0,O=0;
	Th=x/1000;
	H=(x-Th*1000)/100;
	Te=((x-Th*1000)-H*100)/10;
	O=(((x-Th*1000)-H*100)-Te*10);
	
	switch(Th){
		case 1:
			roman="M";	
			break;
		case 2:
			roman="MM";
			break;
		case 3: 
			roman="MMM";
			break;
	}

	switch(H){

		case 1:
			roman= roman+"C";
			break;
		case 2:
			roman=roman+"CC";
			break;
		case 3:
			roman=roman+"CCC";
			break;
		case 4:
			roman= roman+"CD";
			break;
		case 5:
			roman=roman+"D";
			break;
		case 6:
			roman=roman+"DC";
			break;
		case 7: 
			roman=roman+"DCC";
			break;
		case 8: 
			roman=roman+"DCCC";
			break;
		case 9: 
			roman=roman+"CM";
			break;

	}

	switch(Te){
	
		case 1:
			roman=roman+"X";
			break;
		case 2:
			roman=roman+"XX";
			break;
		case 3:
			roman=roman+"XXX";
			break;
		case 4: 
			roman=roman+"XL";
			break;
		case 5:
			roman=roman+"L";
			break;
		case 6:
			roman=roman+"LX";
			break;
		case 7:
			roman=roman+"LXX";
			break;
		case 8:
			roman=roman+"LXXX";
			break;
		case 9:
			roman=roman+"XC";
			break;

	}

	switch(O){
		case 1:
			roman=roman+"I";
			break;
		case 2: 
			roman=roman+"II";
			break;
		case 3:
			roman=roman+"III";
			break;
		case 4: 
			roman = roman + "IV";
			break;
		case 5: 
			roman = roman + "V";
			break;
		case 6:
			roman = roman + "VI";
			break;
		case 7:
			roman = roman + "VII";
			break;
		case 8: 
			roman = roman + "VIII";
			break;
		
		case 9:
			roman=roman+"IX";

	}
			
	return roman;
}

void verifyInput(int& x){
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	cout<<"You can only enter numbers from 1 to 3999: "<<flush;
	cin>>x;
}
