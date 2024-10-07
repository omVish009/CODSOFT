#include <iostream>
using namespace std;
int main()
{
    cout << "Enter your inputs as : ";
    float a, b;
    char c;
    cin >> a;
    cin >> c;
    cin >> b;
    if (int(c) == 42)
    {
        cout << a * b;
    }
    else if (int(c) == 43)
    
    {
        cout << a + b;
    } 
    else if (int(c) == 45)
    {
        cout << a - b;
    }
    else if (int(c) == 47)
    {
        cout << a / b;
    }
    else
    {
        cout << "Invalid Operator" << endl;
    }

    return 0;
}
