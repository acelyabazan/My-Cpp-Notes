#include <iostream>

int main()
{
	setlocale(LC_ALL, "Turkish");

	for (int carpan = 1; carpan < 11; carpan++) {
		for (int carpilan = 1; carpilan < 11; carpilan++) {

			int carpmaIslemi = carpan * carpilan;
			std::cout << carpan << "x " << carpilan << " = " << carpmaIslemi << std::endl;
		}
	}

	return 0;
}
