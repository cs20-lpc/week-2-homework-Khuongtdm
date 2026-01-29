#include<string>
#include<iostream>
using namespace std;
template <typename T>

class Box {
private:
    T value;

public:
    // TODO: Constructor
    Box(T val1) : value(val1)
    {

    }

    // TODO: setValue
    void setValue(T val)
    {
        value = val;
    }

    // TODO: getValue
    T getValue()
    {
        return value;
    }
    // TODO: print
    void print()
    {
        cout << value <<"\n";
    }
};

int main()
{
  Box<int> intBox(10);
  Box<double> doubleBox(3.14);
  Box<string> stringBox("CS20");

  intBox.print();
  doubleBox.print();
  stringBox.print();
}
