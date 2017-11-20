

//Elements of the typed file are separate words. Change all of its elements to other words (their values ??are entered from the keyboard


#include <fstream>
#include <iostream>
 
using namespace std;
 
int main()
{
fstream f;
f.open("laba6a.txt");
for(int i = 0; i < 12; i++){
cout << "enter the word  " << i+1 << " : \n";
string s;
cin >> s;
s = s + ' ';
f << s;
}
f.close();
return 0;
}
