#include <iostream>

class Engine {
  public:
    void start();
};

class Car : private Engine {
  private:
    void start();
};

int main()
{
   
  return 0;
}