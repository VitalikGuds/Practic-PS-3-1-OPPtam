
//There is a typed file in which 12 real numbers are written. Rewrite all file numbers in the array in the same order.

#include <iostream>
#include <fstream>
#include <time.h>
#include <conio.h>
#include <cstdlib>
using namespace std;

 main()
{
	ofstream File;
	srand((float)time(NULL));
	locale loc("and.1251");
	File.imbue(loc);
	File.open("file1.txt");
	File.clear();
	float A[30];
	for (int i = 0; i<30; i++)
	{
		A[i] = rand();
		cout << float(A[i] / 3.14) << endl;
		File << float(A[i] / 3.14) << endl;

	}
	
	system("pause");
	File.close();
	
}
