#include <iostream>

using namespace std;

class Demo
{
  public:
    Demo()
    {
      cout << "Default constructor used." << '\n';
    }

    ~Demo()
    {
      cout << "Destructor used." << '\n';
    };

    Demo(Demo const &other) // Copy
    {
      cout << "Copy constructor used" << '\n';
    };

    Demo &operator=(Demo const &other) // Copy assign
    {
      cout << "Copy assignment used." << '\n';
      return *this;
    };

    Demo(Demo &&tmp) // Move
    {
      cout << "Move constructor used." << '\n';
    };

    Demo &operator=(Demo &&tmp) // Move assign
    {
      cout << "Move assignment used." << '\n';
      return *this;
    };
};

Demo factory()
{
  return Demo();
};

int main()
{
  Demo demo_one;
  Demo demo_two;
  Demo demo_three(factory()); // Copy elision

  demo_two = demo_one;       // Copy assignment
  demo_two = factory();      // Move assignment
}
