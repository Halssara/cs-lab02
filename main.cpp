#include <iostream>

using namespace std;

int main()
{
cout << "Enter A and B: ";
float a, b;
cin >> a >> b;
cout << "A + B = " << a + b << '\n' << "A - B = " << a - b << '\n' << "A * B =" << a * b << '\n'
<< "A / b = " << a / b * 1.0 << '\n';
float max;
if (a < b)
    max = b;
else max = a;
cout << max;
}
