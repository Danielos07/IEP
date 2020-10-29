#include <vector>
#include <string>
#include <iostream>

class Adunare
{
private:
    int value1;
    int value2;
    int value3;
 
public:
    Adunare() : value1{ 1 }, value2{ 2 }, value3{ 3 } 
    {
    }
 
    void print()
    {
         std::cout << "Adunare(" << value1 << "+" <<value2 << "=" <<value3 << ")\n";
    }
};
 
int main()
{
    Adunare adunare{};
    adunare.print();
    return 0;
}