//Data on the mass and volume of 30 bodies made of various materials are known. Determine the material with the minimum density
#include<iostream>
#include<stdio.h>
using namespace std;
struct DATA{
    string material;
    double massa;
    double objem;
}a[30];
int main()
{
    int i;
    int o;
    double m[10];
    double min;
    for (i = 0; i<3; i++)
    {
        cout<<"enter the material ";
        cin >> a[i].material;
        cout<<"Enter the mass ";
        cin>>a[i].massa;
        cout<<"enter the amount ";
        cin >> a[i].objem;
        printf("------------------------\n");
    }
    min = a[0].massa / a[0].objem;
    o = 0;
    for (i = 1; i<3; i++)
    {
        m[i] = a[i].massa / a[i].objem;//Подсчитывает плотность
 
        if (m[i]<min) {
            o = i;
            min = m[i];//Находит минимальное число
        }
    }
 
    cout << "material " << a[o].material << " with density " << min;
return 0;
}
