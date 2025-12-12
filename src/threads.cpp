#include<iostream>
#include<thread>

static bool s_Finished = false;

void Dowork();

int main (){

	std::thread worker(Dowork);

	std::cin.get();
	s_Finished = true;
	
	worker.join();
	std::cout << "Finished." << std::endl;
	std::cin.get();

	return 0;
}

void Dowork(){

	using namespace std::literals::chrono_literals;

	while(!s_Finished){
		
		std::cout << "Working...\n";
		std::this_thread::sleep_for(1s);
	
	}
}
