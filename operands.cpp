#include <iostream>
#include <cstdlib>

int main(){
	startx:
	std::string input;
	std::cout<<"Enter uVR Operand 00,01,02,03,04,05,06,07\n";
	std::cin>>input;
	int output = 0;
	
	for(int i = 0; i < input.length() ;i++){
		if(input[i] == ' '){
			continue;
		};

		output *= 10;	
		output += input[i] - 0x30;
	
	};
	std::cout<<"The Operand as an integer will be : "<<output<<"\n";
	goto startx;
}
