#include <iostream>
#include <math.h>
#include <cstdlib>
#include <time.h>
#include <vector>

using namespace std;

class Tocka {
	double length;
	double height;
	double width;
public:
	Tocka();
	Tocka(double x, double y, double z);
	void random_set(int a, int b);
	void get(double* x, double* y, double* z);
	void distance_2D(double x, double y, double x1, double y1);
	void distance_3D(double x, double y, double z, double x1, double y1, double z1);
	double getZ();


};

class Gun {
	Tocka pozicija;

	int gunCapacity;
	int bulletsInChamber;

public:
	Gun(int capacity);
	void shoot();
	void reload(int chamber, int bullet);


};
class Target {
	Tocka bottomLeft;
	Tocka topRight;

	bool flag;


public:
	Target();
	void setBottomLeft(double x, double y, double z);
	void setTopRight(double x, double y, double z);
	Tocka getBottomLeft();
	Tocka getTopRight();


};