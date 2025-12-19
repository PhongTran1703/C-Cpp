#include <iostream>


void bakePizza();
void bakePizza(std::string topping1);

int main(){

	bakePizza("asdjhf");

	return 0;
}
void bakePizza(){

	std::cout<< "Here is your Pizza!\n";

}
void bakePizza(std::string topping1){

	std::cout<< "Here is your" << topping1 <<" pizza!\n";

}
