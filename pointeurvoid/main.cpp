#include <iostream>

using namespace std;

void printInt(int* number) {
 cout <<"Number :" << *number << endl;
}

void printChar (char* letter) {
	cout <<"Letter :" << *letter << endl;
}
void print (void* valeur,char type ){
  switch(type) {
  case 'i': cout << *((int*)valeur) <<endl; break;
  case 'c': cout << *((char*)valeur) << endl; break;
  }
}
int main() {
   int number= 5;
   char letter= 'a';

   print(&number, 'i');
   print(&letter, 'c');

    return 0;
}
