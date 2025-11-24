#include<iostream>

double mySqrt(double x);

int main(){

    float x;
    float result;
	std::cout << "Enter a number: ";
    std::cin >> x;
    
	mySqrt(x);

    std::cout <<"The square root of " << x << " is " << result << '\n';

    return 0;
}

double mySqrt(double x) {
    double guess = x;
    for (int i = 0; i < 20; i++) {
        guess = 0.5 * (guess + x / guess);
    }
    return guess;
}
