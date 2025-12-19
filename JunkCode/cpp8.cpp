#include <iostream>

int main(){
	
	
	std::string name;
	std::cout<<"What is your name?" << std::endl;

	std::getline(std::cin, name) ;
	std::cout<< "Your name is: " << name << std::endl;




	return 0;
}
