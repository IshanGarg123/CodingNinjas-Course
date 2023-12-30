#include <iostream>
using namespace std;

class ComplexNumbers{
    private:
    int real;
    int imag;

    public:
    ComplexNumbers(int real1,int imag1)
    {
        real = real1;
        imag = imag1;
    }

    void plus(ComplexNumbers const &c2)
    {
        real = real + c2.real;
        imag = imag + c2.imag;
    }

    void multiply(ComplexNumbers const &c2)
    {
        int newReal = real*c2.real - imag*c2.imag;
        int newImag = imag*c2.real + real*c2.imag;
        real = newReal;
        imag = newImag;
    }

    void print()
    {
        cout << real << " + i" << imag << endl;
    }
};




int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }
    
}
