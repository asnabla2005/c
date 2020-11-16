#include<iostream>
using namespace std;
using namespace std;



const int SENTINEL = 1;

int facto_num(int n);

int main()
{
    int num;

    cout << "Enter a positive integer: ";
           cin >> num;
    cout << "Factorial of " << num << " = " << facto_num(num);
    cout << "\nEnter a positive integer:";
           cin >> num;
     
    cout << "Factorial of " << num << " = " << facto_num(num);
}

int facto_num(int num)
{
    
        if (num > 1)
            return num * facto_num(num - 1);
       
        else
       
              return 1;

  cout << "\n\n**ERROR FACTORIAL NUMBER CANNOT BE 0 **\n\n" << endl;

    
    return 0;
}