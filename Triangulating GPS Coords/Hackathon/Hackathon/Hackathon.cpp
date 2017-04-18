// Hackathon.cpp : Defines the entry point for the console application.
// Cody Puskas
// Hackathon
//Version 1.0

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <math.h> //sin and cos
#include <valarray>

using namespace std;

int main()
{
	float x = 0, y = 0, z = 0, x_avg = 0, y_avg = 0, z_avg = 0, lat_avg = 0, lon_avg = 0, lat = 0, lon = 0;
	float x2 = 0, y2 = 0, z2 = 0;
	float x3 = 0, y3 = 0, z3 = 0;
	float lat2 = 0, lon2 = 0;
	float lat3 = 0, lon3 = 0;

	cout << "Please enter your first set of latitude coordinates: " << endl;
	cin >> lat;

	cout << "Please enter your first set of longitude coordinates: " << endl;
	cin >> lon;

	cout << "Please enter your second set of latitude coordinates: " << endl;
	cin >> lat2;

	cout << "Please enter your second set of longitude coordinates: " << endl;
	cin >> lon2;

	cout << "Please enter your third set of latitude coordinates: " << endl;
	cin >> lat3;

	cout << "Please enter your third set of longitude coordinates: " << endl;
	cin >> lon3;

	//converting the lat/long coords to 3d catesian coords
	x = cos(lat) * cos(lon);
	y = cos(lat) * sin(lon);
	z = sin(lat);

	x2 = cos(lat2) * cos(lon2);
	y2 = cos(lat2) * sin(lon2);
	z2 = sin(lat2);

	x3 = cos(lat3) * cos(lon3);
	y3 = cos(lat3) * sin(lon3);
	z3 = sin(lat3);
	
	//compute the average of x, the average of y, the average of z
	x_avg = x + x2 + x3 / 3;
	y_avg = y + y2 + y3 / 3;
	z_avg = z + z2 + z3 / 3;


	cout << "This is the x-coordinate average: " << x_avg << endl;
	cout << "This is the y-coordinate average: " << y_avg << endl;
	cout << "This is the z-coordinate average: " << z_avg << endl;

	

	cin.ignore(10, '\n');
	cout << "Press enter to exit..";
	cin.get();
	return 0;
}


