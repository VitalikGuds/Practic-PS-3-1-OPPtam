
//There is information about 25 events that occurred during the day: hours (values ??from 0 to 23) and minutes (from 0 to 59). Make a program that determines which of the two events occurred this day earlier
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
 
struct time1
{
    int hour;
    int min;
    int sec;
};
 
int main()
{
    time1 tm[24] =  {2, 4, 20, 3, 6, 25, 22, 30, 5, 15, 12, 36, 23, 5, 47,
                    14, 19, 7, 21, 24, 17, 6, 55, 48, 12, 15, 3, 16, 28, 34,
                    1, 17, 34, 3, 28, 59, 8, 13, 19, 4, 26, 42, 17, 12, 36,
                    3, 15, 27, 19, 54, 43, 18, 27, 52, 23, 27, 43, 20, 46, 12,
                    6, 17, 33, 5, 34, 32, 9, 14, 24, 10, 15, 41};
 
    srand(time(NULL));
        int x = rand()%24 + 1;
        int y = rand()%24 + 1;
 
    if(tm[x].hour > tm[y].hour)
        cout << tm[y].hour << ":" << tm[y].min << ":" << tm[y].sec << endl;
    if(tm[x].hour < tm[y].hour)
        cout << tm[x].hour << ":" << tm[x].min << ":" << tm[x].sec << endl;
    if(tm[x].hour == tm[y].hour)
    {
        if(tm[x].min > tm[y].min)
            cout << tm[y].hour << ":" << tm[y].min << ":" << tm[y].sec << endl;
        if(tm[x].min < tm[y].min)
            cout << tm[x].hour << ":" << tm[x].min << ":" << tm[x].sec << endl;
        if(tm[x].min == tm[y].min)
        {
 
            if(tm[x].sec > tm[y].sec)
                cout << tm[y].hour << ":" << tm[y].min << ":" << tm[y].sec << endl;
            if(tm[x].sec == tm[y].sec)
                cout << tm[y].hour << ":" << tm[y].min << ":" << tm[y].sec << " - moments coincided" << endl;
            if(tm[x].sec < tm[y].sec)
                cout << tm[x].hour << ":" << tm[x].min << ":" << tm[x].sec << endl;
        }
    }
    system("pause");
    return 0;
 
}
