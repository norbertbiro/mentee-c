#include <iostream>

// Simple Class, Basic Example:

class SomeName {
public:
  int age;
  std::string name;
 
  void eat() { std::cout << "This human is eating" << std::endl; }
  void sleep() { std::cout << "This human is sleeping" << std::endl; }
  void work() { std::cout << "This human is working" << std::endl; }
 
  void who_am_i() { std::cout << "My name is " << name << " and I am " << age << " years old."; }
};

class WithPrivateVariable {
  public:
    int get() {
      return myInt;
    };

    void set(int value) {
      if (value > 0) {
        std::cout << "We are setting myInt value to: " << value << " with our setter" << std::endl;
        myInt = value;
      }
    };

  private:
    int myInt;
};

class WithPrivateAndConstructor {
  public:
    WithPrivateAndConstructor(int value) { 
      std::cout << "Our constructur is setting myInt to: " << value << " by default" << std::endl;
      myInt = value;
    }

    int get() {
      return myInt;
    }

    void set(int value) {
      if (value > 0) {
        std::cout << "We are setting myInt value to: " << value << " with our setter" << std::endl;
        myInt = value;
      }
    }
  private:
    int myInt;
};

class Human {
  public:
    Human(std::string _name, int _age) {
      name = _name;
      age = _age;
    }

    std::string getName() { return name; }
    int getAge() { return age; }

  protected:
    std::string name;
    int age;
  private:
    int private_value;
};

class Worker : Human {}; // this is the way to create a copy of a class which inherits the base class public and protected funcs and vars.


int main()
{
  // Accessing public properties of SomeName Object
  std::cout << "This is an example of a Class with Public Keyword and all of it's public Variables and Functions" << std::endl;
  SomeName somePerson;
  somePerson.age = 27;
  somePerson.name = "Norbert";
  somePerson.who_am_i();
  std::cout << std::endl;
  somePerson.eat();
  somePerson.sleep();
  somePerson.work();
  std::cout << std::endl;
  // End of Accessing public properties of SomeName Object

  // Classes and private variables
  std::cout << "This is an example of Class, having a private variable, which will be set and get using a setter and a getter." << std::endl;
  WithPrivateVariable objWithPrivateVariable;

  objWithPrivateVariable.set(15);
  std::cout << "Using the gettter function we should have the value of: " << objWithPrivateVariable.get() << std::endl;
  std::cout << std::endl;
  
  // Classes and private Variables with our own Constructor
  std::cout << "This is an example of Class, having a private variable and it's own constructor, to set the value of the private variable, when the object is created." << std::endl;
  WithPrivateAndConstructor objWithPrivateAndConstructor(30);

  std::cout << objWithPrivateAndConstructor.get() << " should be the initial value of myInt" << std::endl;
  objWithPrivateAndConstructor.set(40);
  std::cout << objWithPrivateAndConstructor.get() << " should be the value of myInt, since we updated it with our setter above." << std::endl;

  Human human("Norbi", 27);
  
  std::cout << std::endl << human.getName() << " " << human.getAge();

  return 0;
}