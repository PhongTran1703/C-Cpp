#include<iostream>

int main(){

	std::string name = "P";
	std::string *pName = &name;
	std::cout << *pName;


	return 0;
}
