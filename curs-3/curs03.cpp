#include <iostream>

int countToHundred() {
  std::cout << "Exercitiul nr.1" << std::endl;
  int addedNumber;
  for (int i; i < 100; i++) {
    if (i % 2 == 0) {
      addedNumber = addedNumber + i;
    }

    if (i < 10) {
      std::cout << i << " ";
    } else if(i > 10 && i < 20) {
      continue;
    } else {
      continue;
    }
  }
  std::cout << std::endl;
  return addedNumber;
}

int doFizzBuzz() {
  std::cout << "Exercitiul nr.2" << std::endl;
  for (int i = 1; i < 100; i++) {
    if (i % 3 == 0 && i % 5 == 0) {
      std::cout << "FizzBuzz" << std::endl;
    } else if (i % 3 == 0) {
      std::cout << "Fizz" << std::endl;
    } else if (i % 5 == 0) {
      std::cout << "Buzz" << std::endl;
    } else {
      std::cout << i << std::endl;
    }
  }
  return 0;
}

int main() {
  int ourNumbers = countToHundred();
  std::cout << "Numerele adunate fac in total:" << ourNumbers << std::endl << std::endl; 

  int doTheFizzBuzz = doFizzBuzz();


  return 0;
}