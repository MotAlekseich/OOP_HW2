#include <iostream>
#include <string>
#include "Class.hpp"




int main() {

	Fraction drob1(3, 4), drob2(3, 4), drob3(50, 70), drob4(4,8);
	drob1 = drob1.sum(drob2);
	drob1.print_Fraktion();
	
	std::cout << "__________________________\n";
	drob2 = drob2.sub(drob3);
	drob2.print_Fraktion();
	std::cout << "__________________________\n";
	drob4 = drob4.subInt(2);
	drob4.print_Fraktion();
	std::cout << "__________________________\n";
	drob3.print_Fraktion();


	return 0;
}
