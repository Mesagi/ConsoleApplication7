using namespace std;
#include <iostream>

void getVolumeSurface(double* s,double* v)
{
	double width = 0;
	double height = 0;
	double depth = 0;
	


	cout << "������͂��Ă�������:";
	cin >> width;

	cout << "��������͂��Ă�������:";
	cin >> height;

	cout << "���s������͂��Ă�������:";
	cin >> depth;

	*s = ((depth * width) + (height * depth) + (width * height)) * 2;
	*v = width * height * depth;


	
	
}

