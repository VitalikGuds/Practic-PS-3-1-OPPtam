
//There is a typed file with thirty numbers. Write the number of the existing file in the reverse order to another file

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   ifstream f("input.txt");
   string s,q;
   while(!f.eof()){
       f>>s;
       q=s+'\n'+q;
   }
   f.close();cout<<q;
   ofstream o("file.txt");   o<<q;   o.close();
   
   return 0;
}
