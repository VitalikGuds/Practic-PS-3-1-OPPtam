#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string.h>
#include <fstream>
using namespace std;

struct biblioteca
{
	char avtork[50];
	char nazvak[50];
	int kilkist;
}a[100];
int n;
void input(void)
{
	ofstream output_file("baza.dat");
	cout<<"how many tracks in the database do you want to enter:";
	cin>>n;
		for(int i=0;i<n;i++)
	{
		output_file<<"avtor  "<<"nazva  "<<"kilkist  ";
		cout<<"vedite avtora cnigi:";
		
		cin>>a[i].avtork;
		output_file<<a[i].avtork;
		cout<<"vvedite nazvy knigi";
		output_file<<" ";
		
		cin>>a[i].nazvak;
		output_file<<a[i].nazvak;
		cout<<"vvedite kilkist";
		output_file<<" ";
		
		cin>>a[i].kilkist;
		output_file<<a[i].kilkist;
		output_file<<endl;
	}
		output_file.close();
	}
	
void deliteol(void)
{
	
	ofstream output_file("baza.dat");
			output_file<<" ";
			cout<<" delite sicses";
		output_file.close();
	}
void autput(void)	
	
{
	ifstream istr;
	istr.open("baza.dat");
	if(!istr)
	{
		cout<<"file don't open!"<<endl;
	}
	char * buf = new char[101];
	while(!istr.eof())
	{
		istr.getline(buf,100,' ');
		cout << buf << " ";
	}
	istr.close();
	delete [] buf;
}
	
void redagiu(void)
{
deliteol();

ofstream output_file("baza.dat");
	cout<<"how many tracks in the database do you want to enter:";
	cin>>n;
		for(int i=0;i<n;i++)
	{
		output_file<<"avtor  "<<"nazva  "<<"kilkist  ";
		cout<<"vedite avtora cnigi:";
		
		cin>>a[i].avtork;
		output_file<<a[i].avtork;
		cout<<"vvedite nazvy knigi";
		output_file<<" ";
		
		cin>>a[i].nazvak;
		output_file<<a[i].nazvak;
		cout<<"vvedite kilkist";
		output_file<<" ";
		
		cin>>a[i].kilkist;
		output_file<<a[i].kilkist;
		output_file<<endl;
	}
		output_file.close();
	}


void delitefile(void)
{
if(remove("baza.dat")!=0)
	cout<<"osibka";
	else 
	cout<<"gg vp izi";
}
/*void readFile(void)	
{
	ifstream obj("baza.dat",ios::binary);
	biblioteca buff;
	obj.eof();
	obj.read((char*)&buff,sizeof(biblioteca));
	cout<<buff
}*/
int main()
   {
  
   
   int key;
   {
    cin>>key;
    switch (key)
    {   
    case 1: 
    { 
    input(); 
    break;
    }
    case 2: 
    {
    deliteol();
    break;
    } 
    case 3:
    	{
    		autput();
    		break;
		}
   case 4:
    	{
    	 redagiu();
		 break;	
    }
    
    case 5:
    	{
    	 delitefile();
		 break;	
    }	
  /*  case 6:
    	{
    	readFile();
		break;	
		}*/
		}
//default: cout<<"nichogo";
   
    return 0;
    }
}
