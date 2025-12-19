#include<iostream>

int main (){

	char *pGrades = NULL;
	int *pNum = NULL;

	pNum = new int;
	int size;

	std::cout << "How many grades to enter in?: ";

	std::cin >> size;
	pGrades = new char[5];

	*pNum = 21;

	std::cout << "address: " << pNum << '\n';

	std::cout << "value: " << *pNum << '\n';

	for(int i = 0; i < size; i++){
	
		std::cout << "Enter grade #" << i + 1 << ": ";
		std::cin >> pGrades[i];
	}

	for(int i = 0; i < size; i++){
	
		std::cout << pGrades[i] << " ";
	}
	std::cout << "\n";

	delete pGrades;
	delete pNum;

	return 0;
}
