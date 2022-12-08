#include <iostream>

using namespace std;

int main()
{
   int n = 7;
   cout << n << endl;
   cout << &n << endl;
   int* ptr = &n;
   cout << ptr << endl;
   cout <<*ptr <<endl;
   n = 25;
   *ptr = 18;
   int* ptr1 = &ptr;
   return 0;
}
