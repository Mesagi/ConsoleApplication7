using namespace std;
#include <iostream>

void getVolumeSurface(double* s,double* v)
{
	double width = 0;
	double height = 0;
	double depth = 0;
	


	cout << "幅を入力してくだしあ:";
	cin >> width;

	cout << "高さを入力してくだしあ:";
	cin >> height;

	cout << "奥行きを入力してくだしあ:";
	cin >> depth;

	*s = ((depth * width) + (height * depth) + (width * height)) * 2;
	*v = width * height * depth;


	
	
}

