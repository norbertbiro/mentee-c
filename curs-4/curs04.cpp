#include <iostream>
using namespace std;

class BasicMath {
  public: 
    int globalA, globalB;

    int add(int a, int b) {
      return a + b;
    };
    int subtract(int a, int b) {
      return a - b;
    };
    int divide (int a, int b) {
      if (a != 0 && b != 0) {
        return a/b;
      } else {
        cout << "Cannot be dived by 0, it will result in NaN";
      };
      return 0;
    };
    int multiply (int a, int b) {
      return a * b;
    };

    void doBasicMath() {
      cout << "If globalA and globalB are defined, then " << add(globalA, globalB) << " is the total of " << globalA << " + " << globalB << endl;
      cout << "and " << subtract(globalA, globalB) << " is the total of " << globalA << " - " << globalB << endl;
      cout << "and " << divide(globalA, globalB) << " is the total of " << globalA << " divided by " << globalB << endl;
      cout << "and " << multiply(globalA, globalB) << " is the total of " << globalA << " multiplied by " << globalB << endl;
    }
};

int main()
{
  BasicMath mathOperations;

  cout << "adding 10 with 5 results in: " << mathOperations.add(10, 5) << endl;
  cout << "multiplying 5 with 5 results in: " << mathOperations.multiply(5, 5) << endl;
  
  mathOperations.globalA = 2;
  mathOperations.globalB = 10;

  mathOperations.doBasicMath();
  return 0;
}