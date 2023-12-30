#include <iostream>
using namespace std;


class Polynomial{
    public:
    int *degcoff;
    int capacity;

    Polynomial()
    {
        degcoff = new int[5];
        capacity = 5;

        for(int i=0;i<5;i++)
        {
            degcoff[i]=0;
        }
    }

    // copy constructor
    Polynomial (Polynomial const &p)
    {
        degcoff = new int[p.capacity];
        capacity = p.capacity;
        for(int i=0;i<capacity;i++)
        {
            degcoff[i] = p.degcoff[i];
        }
    }
    
    void doubly()
    {
        int * newdegcoff = new int[2*capacity];
        for(int i=0;i<capacity;i++)
        {
            newdegcoff[i] = degcoff[i];
        }
        for(int i=capacity;i<2*capacity;i++)
        {
            newdegcoff[i]=0;
        }
        delete [] degcoff;
        degcoff = newdegcoff;
        capacity = 2*capacity;
    }

    void setCoefficient(int deg,int coff)
    {
        while(deg>=capacity)
        {
            doubly();
        }
        this -> degcoff[deg] = coff;
    }

    // copy operator 
    Polynomial operator=(Polynomial const &p)
    {
        degcoff = new int[p.capacity];
        capacity = p.capacity;
        for(int i=0;i<capacity;i++)
        {
            degcoff[i] = p.degcoff[i];
        }
    }

    Polynomial operator+(Polynomial const &p)
    {
        Polynomial result;

        if(capacity>=p.capacity)
        { 
            while(result.capacity < capacity)
            {
                result.doubly();
            }
            for(int i=0;i<p.capacity;i++)
            {
                result.degcoff[i] = degcoff[i] + p.degcoff[i];
            }
            for(int i=p.capacity;i<capacity;i++)
            {
                result.degcoff[i] = degcoff[i];
            }

            return result;
        }
        else
        { 
            while(result.capacity < p.capacity)
            {
                result.doubly();
            }
            for(int i=0;i<capacity;i++)
            {
                result.degcoff[i] = degcoff[i] + p.degcoff[i];
            }
            for(int i=capacity;i<p.capacity;i++)
            {
                result.degcoff[i] = p.degcoff[i];
            }

            return result;
        }
    }

    Polynomial operator-(Polynomial const &p)
      {
        Polynomial result;

        if(capacity>=p.capacity)
        { 
            while(result.capacity < capacity)
            {
                result.doubly();
            }
            for(int i=0;i<p.capacity;i++)
            {
                result.degcoff[i] = degcoff[i] - p.degcoff[i];
            }
            for(int i=p.capacity;i<capacity;i++)
            {
                result.degcoff[i] = degcoff[i];
            }

            return result;
        }
        else
        { 
            while(result.capacity < p.capacity)
            {
                result.doubly();
            }
            for(int i=0;i<capacity;i++)
            {
                result.degcoff[i] = degcoff[i] - p.degcoff[i];
            }
            for(int i=capacity;i<p.capacity;i++)
            {
                result.degcoff[i] = p.degcoff[i] * (-1);
            }

            return result;
        }
    }

    Polynomial operator*(Polynomial const &p)
    {
        Polynomial result;
        while ( result.capacity < (capacity+p.capacity))
        {
            result.doubly();
        }
        for(int i=0;i<capacity;i++)
        {
            for(int j=0;j<p.capacity;j++)
            {
                result.degcoff[i+j] = result.degcoff[i+j] + (degcoff[i]*p.degcoff[j]);
            }
        }
        return result;
    }

    void print()
    {
        for(int i=0;i<capacity;i++)
        {
            if(degcoff[i] != 0)
            {
                    cout << degcoff[i] << 'x' << i << " ";
            }
        }
        cout << endl;
    }

};


int main()
{
    int count1,count2,choice;
    cin >> count1;
    
    int *degree1 = new int[count1];
    int *coeff1 = new int[count1];
    
    for(int i=0;i < count1; i++) {
        cin >> degree1[i];
    }
    
    for(int i=0;i < count1; i++) {
        cin >> coeff1[i];
    }
    
    Polynomial first;
    for(int i = 0; i < count1; i++){
        first.setCoefficient(degree1[i],coeff1[i]);
    }
    
    cin >> count2;
    
    int *degree2 = new int[count2];
    int *coeff2 = new int[count2];
    
    for(int i=0;i < count2; i++) {
        cin >> degree2[i];
    }
    
    for(int i=0;i < count2; i++) {
        cin >> coeff2[i];
    }
    
    Polynomial second;
    for(int i = 0; i < count2; i++){
        second.setCoefficient(degree2[i],coeff2[i]);
    }
    
    cin >> choice;
    
    Polynomial result;
    switch(choice){
            // Add
        case 1:
            result = first + second;
            result.print();
            break;
            // Subtract
        case 2 :
            result = first - second;
            result.print();
            break;
            // Multiply
        case 3 :
            result = first * second;
            result.print();
            break;
    
    return 0;
}
