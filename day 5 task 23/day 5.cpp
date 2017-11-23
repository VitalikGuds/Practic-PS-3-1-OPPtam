#include <iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
struct Event{
	int Year;
	int Month;
	int Day;
}events[20];
int main(){
	 
	srand(time(NULL));
	
	for(int i=0;i<20;i++);
	{
	events[i].Day = 1+rand()%31;
    events[i].Year = 1930+rand()%2000;
    events[i].Month = 1+rand()%12;
	}
	int firstEvent=0+rand()%20;
	int secondEvemt=0+rand()%20;
	if (events[firstEvent].Year > events[secondEvemt].Year)
    cout<< "vtoroe sobitie ranse";
else if (events[firstEvent].Year < events[secondEvemt].Year)
        {cout<<"pervoe sobitie ranise";}
           else if (events[firstEvent].Month > events[secondEvemt].Month)
                {cout<< "vtoroe sobitie ranse";}
            else if (events[firstEvent].Month < events[secondEvemt].Month)
                   { cout<< "pervoe sobitie ranse";}
                else if (events[firstEvent].Day > events[secondEvemt].Day)
                           { cout<< "vtoroe sobitie ranise";}
                        else if (events[firstEvent].Day < events[secondEvemt].Day)
                                					{
								cout<< "pervoe sobitie ranise";}
                            else
                            {    cout<<"sobitia v odin day";
                    }
}
system("pause");
return 0;
}

