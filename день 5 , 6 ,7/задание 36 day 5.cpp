#include <iostream>
#include <string>
 using namespace std;
const size_t countObject = 12;
struct Pupil
{
   string surname , name;
   int rating[countObject];
   int avg;
};
 
float getAVG(Pupil & pupil, const size_t countObject)
{
      int avg = 0;
       for(int j = 0; j < countObject; ++i)
         avg += pupil.rating[j];
      
      return avg / countObject;
}
 
int main()
{ 
    const size_t countPupil = 20;
    Pupil pupils[countPupil];
    
    for(int i = 0; i < countPupil; ++i)
    {
         cout << "Input surname:"; cin >> pupils[i].name;
         for(int j = 0; j < countPupil; ++j)
         {
             cout << "Input rating for predmet #" << j << ": ";
                       cin >> pupils[i].rating[j];
         }
    }
    
    for(int i = 0; i < countPupil; ++i)
       pupils[i].avg = getAVG(pupils[i], countObject);
       
    int sumClass = 0;
    for(int i = 0; i < countPupil; ++i)
       sumClass += pupils[i].avg;
       
    int avgClass = sumClass / countPupil;
    
    for(int i = 0; i < countPupil; ++i)
      if(pupils[i].avg > avgClass)
     cout << pupils[i].surname << endl;
       
 
      system("PAUSE");
    
   return 0;
}
