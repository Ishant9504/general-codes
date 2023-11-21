#include <iostream>
using namespace std;
int increase(int &a)
{
    return a++;
}
int main()
{
    for (int i = 0; i < 3; i++)
    {
        cout << "Hello World!" << endl;
    }
    int var = 2;
    increase(var);
    cout << var;
}