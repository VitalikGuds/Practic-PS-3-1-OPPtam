#include<iostream>
#include<cstdlib>


using namespace std;
struct sredbal
{	char name[50];
	int matimatika;
	int fizik;
	int ruskiu;
	float sred;
};
int n;
void input(void)
{
	
	sredbal a;
    sredbal mas[30];
    float s=0, sred;
   
 
	cout<<"how many tracks in the database do you want to enter:";
	cin>>n;
		for(int i=0;i<n;i++)
	{
		
		cout<<"vedite name student:";
		cin>>mas[i].name;
			cout<<"                                     ";
		cout<<mas[i].name;
		cout<<endl;
	
		
		cout<<"vedite otsinky s matimatiki:";
		
		cin>>mas[i].matimatika;
		cout<<"                                     ";
		cout<<mas[i].matimatika;
		cout<<endl;
		cout<<"vedite otsinky s fiziki";
		cout<<" ";
			
		cin>>mas[i].fizik;
		cout<<"                                     ";
		cout<<mas[i].fizik;
		cout<<endl;
		cout<<"vvedite otsinky s ruskogo";
		cout<<" ";
		
		cin>>mas[i].ruskiu;
		cout<<"                                     ";
		cout<<mas[i].ruskiu;
		cout<<endl;
		sred = (mas[i].ruskiu + mas[i].matimatika + mas[i].fizik) / 3.0;
        s = s + sred;
	}
		
		s = s / n;
    cout << "Overall average score:" << s << endl;

	}
	int main(){
	input();	
}
