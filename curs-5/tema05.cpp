#include <iostream>

class Engine {
  public:
    Engine() { std::cout << "Constructor Base Engine" << std::endl; }
    ~Engine() { std::cout << "Destructor Base Engine" << std::endl; }
    void setEngineType(std::string type) {
      engineType = type;
    };

    std::string getEngineType() {
      return engineType;
    };

    void setEngineCapacity(int value) {
        capacity = value;
    };

    int getEngineCapacity() {
      return capacity;
    };

  protected:
    std::string engineType;
    int capacity;
  private:
    std::string co2Emission;
};

class Car : public Engine {
  public:
    Car() { std::cout << "Constructor Base Car" << std::endl; }
    ~Car() { std::cout << "Destructor Base Car" << std::endl; }
};



class Human {
  public:
    Human() { std::cout << "Base Human Constructor" << std::endl; }
    ~Human() { std::cout << "Base Human Destructor" << std::endl; }
    void greet() {
      std::cout << "Hello There ";
    }
  protected:
    int age;
  private:
    std::string name;
};

class Driver {
  private:
    Human human;
  public: 
    Driver() {
      std::cout << "Base Driver Constructor" << std::endl;
      name = "Biro Norbert";
    }
    ~Driver() { std::cout << "Base Driver Destructor" << std::endl; }
    void sayHello() {
      human.greet();
      std::cout << name << std::endl;
    }
    void setName(std::string text) {
      name = text;
    }


    void overload(int i) {
      std::cout << " Here is int " << i << std::endl;
    }
    void overload(int a, int b) { 
     std::cout << " Here is int " << a << " and " << b << std::endl; 
    }
    void overload(std::string c) {
     std::cout << " Here is string " << c << std::endl; 
    }
  protected:
    std::string name;
};



int main()
{
  Car audi;
  audi.setEngineType("diesel");
  audi.setEngineCapacity(2);
  std::cout << audi.getEngineType() << std::endl << audi.getEngineCapacity() << std::endl << std::endl;

  Driver Norbi;
  Norbi.sayHello();
  std::cout << std::endl << "Greet once again" << std::endl;
  Norbi.setName("The Real Slim Norbert");
  Norbi.sayHello();
  std::cout << std::endl;
  std::cout << std::endl;

  Norbi.overload(1);
  Norbi.overload(2, 3);
  Norbi.overload("hello");

  return 0;
}