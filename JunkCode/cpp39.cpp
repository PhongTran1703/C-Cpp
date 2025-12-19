#include<iostream>

int main(){

	std::string foods[100];

	fill(foods, foods + 100, "sup dude");

	for(std::string food : foods){
	
		std::cout << food << '\n';
	}

	return 0;
}

