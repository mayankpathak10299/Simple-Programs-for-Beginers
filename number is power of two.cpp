#include <iostream>
using namespace std;

int main()
{
   int num;

   cout << "Enter the number you want to test: ";
   cin >> num;

   if((num != 0) && ((num &(num - 1)) == 0))
      cout << num << " is a power of 2." << endl;

   else
      cout << num << " is not a power of 2." << endl;

   return 0;
}
