#include <iostream>
#include <string>
using namespace std;

int romanNumeral(char c) {
	switch (c) {
		case 'I': return 1;
		case 'V': return 5;
		case 'X': return 10;
		case 'L': return 50;
		case 'C': return 100;
		case 'D': return 500;
		case 'M': return 1000;
		default: return 0;
	}
	
}

int main() {
	string romanNumeral;
	char repeat;
	
	do {
		cout<<"Enter a roman number:";
		cin>> romanNumeral;
		
		
		int result=0;
		int prevValue=0;
		int i= romanNumeral.length() -1;
		
		do {
			int currentValue= (romanNumeral[i]);
			prevValue 
			
			if(currentValue == 0){
				result=-1;
				break;
			}
			if(currentValue < prevValue) {
				result-=currentValue;
			}else{
				result+= currentValue;
			}
			
			prevValue=currentValue;
			i--;
		} while(i>=0);
		
		if(result== -1){
			cout<<"The Roman Number is invalid:"<<endl;

		}else{
			cout<<"The Roman number conversion is:"<<result<<endl;
		} 
		
		cout<<"Do you wannna convert another number?(y/n)";
		cin>>repeat;
	}while(repeat =='y' || repeat == 'Y');
	
	return 0;
}

