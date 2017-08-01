// complex.cpp
// Multiplying complex numbers

#include <iostream>
#include <complex> // required for the complex class

using namespace std;
using complexNumber = complex<float>;

int main()
{
    complexNumber num1{ 2.0, 2.0 };  // using C++11 uniform initialisation syntax
    complexNumber num2{ 4.0, -2.0 }; // old syntax: complex<float> num2(4.0,-2.0);

    auto answer = num1 * num2; // using C++11 auto keyword,
                               // answer is of type: complex<float>

    cout << "The answer is: " << answer << endl;
    cout << "Or in a more familiar form: " << answer.real() << " + " << answer.imag() << "j" << endl;

    // answer++;
    // the variable answer is not of type: int

    return 0;
}
