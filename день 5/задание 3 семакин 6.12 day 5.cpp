
//Translate, Calculate the average score of the pupils of the class, if the scores of each student are known in mathematics, Russian and physics.

#include "iostream"
#include "iomanip"
#include "cmath"
#include "windows.h"
#include "TCHAR.h"
using namespace std;
 
struct tablica
{
    char name[10];
    float sred;
    int rus, math, fiz;
};
 
 
int _tmain(int argc, _TCHAR* argv[])
{
    SetConsoleCP(1251);  SetConsoleOutputCP(1251);
 
    int a;
    int mas[30];
    float s=0, sred;
    int n;
 
    system("cls");
 
    cout << "Enter the number of students: ";
    cin >> n;
 
    for (int i=0; i<n; i++)
    {
        cout << "last name" << (i+1) << "student: ";    cin >> mas[i].name;
        cout << "Russian language :";                   cin >> mas[i].rus;
        cout << "mathematics : ";                       cin >> mas[i].math;
        cout << "physics: ";                            cin >> mas[i].fiz;
        sred = (mas[i].rus + mas[i].math + mas[i].fiz) / 3.0;
        s = s + sred;
    }
 
    s = s / n;
    cout << "Overall average score:" << s << endl;
  
 
    system("pause");
    return 0;
}
