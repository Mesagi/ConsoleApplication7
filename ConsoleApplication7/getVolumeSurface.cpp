using namespace std;
#include <iostream>

void getVolumeSurface(double* s,double* v)
{
	double width = 0;
	double height = 0;
	double depth = 0;
	


	cout << "•‚ð“ü—Í‚µ‚Ä‚­‚¾‚µ‚ :";
	cin >> width;

	cout << "‚‚³‚ð“ü—Í‚µ‚Ä‚­‚¾‚µ‚ :";
	cin >> height;

	cout << "‰œs‚«‚ð“ü—Í‚µ‚Ä‚­‚¾‚µ‚ :";
	cin >> depth;

	*s = ((depth * width) + (height * depth) + (width * height)) * 2;
	*v = width * height * depth;


	
	
}

