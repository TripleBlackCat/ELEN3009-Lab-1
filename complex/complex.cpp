// complex.cpp
// Multiplying complex numbers

#include <iostream>
#include <complex> // required for the complex class
#include <cmath> 
#include <string> 

using namespace std;
using complexNumber = complex<float>;

int main()
{
    complexNumber a = 0, b = 0, c = 0;
    complexNumber four = 4;
    complexNumber two = 2;
    string userCommand;
    bool isActive = true;                
    
    while (isActive)
    {
        cout << "Please enter integer coefficients of the standard quadratic form \n";
        cout << "a: ";
        cin >> a;
        
        cout << "b: ";
        cin >> b;
        
        cout << "c: ";
        cin >> c;
        
        complexNumber root1 = (-b + sqrt(b*b - (four*a*c)))/two*a;
        complexNumber root2 = (-b - sqrt(b*b - (four*a*c)))/two*a;
        
        cout << "Root 1 is: " << root1.real() << " + " << root1.imag() << "j" << endl;
        cout << "Root 2 is: " << root2.real() << " + " << root2.imag() << "j" << endl;
        
        cout << "Press <q> to quit or press <any> to continue: ";
        cin  >> userCommand;
                
        if(userCommand == "q")
        {
            isActive = false;
        }
        
        cout << endl;
        
    }                    

    return 0;
}
