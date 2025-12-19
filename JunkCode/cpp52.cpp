#include<iostream>
template<typename T, typename U>


auto max (T x, U y){

	return (x > y) ? x : y;
	//return x > y, if so, return x, if not return y
}

int main(){

	std::cout << max(2.56, 1) << '\n';

	return 0;
}
