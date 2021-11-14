#include <iostream>

#define G 9.80665

int main(){

	float x,t;
	std::cout << "Please type time";
	std::cin  >> t;
	x = G*t*t/2;
	std::cout << "x= " << x;
	return x;
}
