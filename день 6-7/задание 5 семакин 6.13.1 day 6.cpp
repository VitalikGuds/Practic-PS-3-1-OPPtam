

//FIll the sequential access file f with integers obtained with the help of the random number generator. From file f get file g, excluding repeated occurrences of numbers. output file g to print
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <time.h>
#include <string>
#include <cstdlib>
using namespace std;
int main() 
{
    srand( time(0));
    int n;
    cout<<"Enter the number of numbers"<<endl;
    cin>>n;
  
    ofstream f;
    f.open("f.txt");
    for (int i=0;i<n;i++)
    f<<rand() %100<<" ";
    f.close();
    
    ifstream is;
    is.open("f.txt");
    string *str=new string[n+1];
    int i=0;
    while (!is.eof())
    {
        char ch = is.get();
        
        if (ch!=' ') 
            str[i]=str[i]+ch;
        else i++;
    }
    int k=0;
    string strkon="";
    for (int i =0;i<n;i++)
    {
        for (int j =i+1;j<n;j++)
        {
            if (str[i]==str[j]) k++;
        }
        if (k==0) 
            strkon=strkon+str[i]+" ";
    k=0;
    }

    f.open("g.txt");
    f<<strkon;
    f.close();
   system("pause");
   return 0;
 
}
