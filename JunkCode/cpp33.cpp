#include <iostream>

int main(){

	char grades[]= {'A', 'B', 'C', 'D', 'E', 'F','G'};
	//double gpa = 2.5;
	//std::string name = "Phong";
	//std::cout << sizeof(gpa) << " bytes\n";	
	//std::cout << sizeof(name)<< " bytes\n";

	std::cout << sizeof(grades)/sizeof(char)<< " elements\n";
	
	for(int i = 0; i < sizeof(grades)/sizeof(char); i++){
		std::cout << grades[i]<< '\n';
	
	}
		
		
	return 0;
}
