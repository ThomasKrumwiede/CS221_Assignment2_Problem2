#include <iostream>
#include <stdlib.h>
#include "sharedString.h"
using namespace std;

SharedString g; // Global value

int main()
{
      cout << "Entering main\n";
      cout << "SharedString a = \"Fred\";\n";
   SharedString a = "Fred";
      cout << "SharedString b = \"Alice\";\n";
   SharedString b = "Alice";
      cout << "SharedString c;\n";
   SharedString c;
      cout << "c = a; // Fred\n";
   c = a; // Fred
      cout << "a = b; // Alice\n";
   a = b; // Alice
      cout << "g = b; // Alice\n";
   g = b; // Alice
      cout << "Exiting main\n";

      bool test1 = a == b;
      cout << test1 << endl;

      bool test2 = c == a;
      cout << test2 << endl;

      bool test3 = a < c;
      cout << test3 << endl;

      cout << "a and b are Alice" << endl;
      cout << "check if a and b are equal: " << test1 << endl;
      cout << "Changing b to blice" << endl;
      b[0] = 'B';
      bool afterChange = a == b;
      cout << "check if a and b are equal: " << afterChange << endl;


      
   return 0;
}
