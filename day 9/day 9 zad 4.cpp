#include <iostream>
using namespace std;
int main()
{
   int c,b=0;
   cin >> c;
   while (c)
   {
      b+=c&1;
      c>>=1;
   }
   cout << b;
   return 0;
}
