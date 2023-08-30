#include<iostream>
#include <stdexcept>
#include<string>

std::string strSlicer(std::string incoming, int begin, int end) {
	try {
		incoming = incoming.substr(begin, end); 
		return incoming; 
	}
	
	catch (std::out_of_range const& ex) { 
		std::cout << ex.what() << " ";
		return "invalid";
	}
}

int main() {
	std::string name = "Abela"; 
	std::cout << strSlicer(name, 1, 2) << std::endl; 
	std::cout << strSlicer(name, 2, 4) << std::endl;
	std::cout << strSlicer(name, 10, 2) << std::endl;

	return 0;
}