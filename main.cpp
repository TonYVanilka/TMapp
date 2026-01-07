#include <iostream>
#include <rixten.h>

int main() {

	auto Engine = CreateEngine();
	std::cout << GetInt(1, 9, Engine) << std::endl;
	
}