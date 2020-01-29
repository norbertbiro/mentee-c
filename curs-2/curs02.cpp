#include <iostream>

int main()
{

    int numberToGuess = 7;
    int inputNumber;
    bool repeat = true;
    std::cout << "Ghiciti numarul! \n";
    
  while(repeat) {
    std::cout << "Incercati sa ghiciti numarul, introduceti un numar mai jos:";
    std::cin >> inputNumber;

    if (inputNumber < numberToGuess) {
      std::cout << "Caut un numar mai mare \n \n";
    } else if (inputNumber > numberToGuess) {
      std::cout << "Caut un numar mai mic \n \n";
    } else if (inputNumber == numberToGuess) {
      std::cout << "Corect! \n";
      repeat = false;
    }

  }

  return 0;
}