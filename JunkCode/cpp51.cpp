
#include<iostream>

void walk(int step);

int main(){

	walk(100);


	return 0;
}

void walk (int steps){

	if(steps > 0){
	
		std::cout << "You take a step!\n";
		walk(steps - 1);
	}

}
