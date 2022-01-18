#include "calculator.h"
#include <iostream>

int main()
{
  std::cout << "Start of a small program" << std::endl;

  Calculator calc;

  std::cout << "45 + 15 = " << calc.Add(45, 15) << std::endl;
	std::cout << "45 - 15 = " << calc.Sub(45, 15) << std::endl;
	std::cout << "45 * 15 = " << calc.Mul(45, 15) << std::endl;
	std::cout << "45 / 15 = " << calc.Div(45, 15) << std::endl;

  std::cout << "End of a small program" << std::endl;
	return 0;
}
