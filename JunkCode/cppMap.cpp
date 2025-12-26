#include<iostream>
#include<map>
#include<string>

int main(){

	// Create a map that will store the name and age of different people
	std::map<std::string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

	// Get the value associated with the key "John"
	std::cout << "John is: " << people["John"] << "\n";

	// Get the value associated with the key "Adele"
	std::cout << "Adele is: " << people["Adele"] << "\n";

	return 0;
}
