#include <iostream>
#include <math.h>
#include <cstdlib>
#include <time.h>
#include <vector>
#include "klase.h"
using namespace std;

Gun::Gun(int capacity) {
    pozicija.random_set(10, 100);
    gunCapacity = capacity;
}
double Tocka::getZ() {
    return height;
}
Tocka Target::getBottomLeft() {
    return bottomLeft;
}
Tocka Target::getTopRight() {
    return topRight;
}
Target::Target() {
    bottomLeft.random_set(10, 100);
    topRight.random_set(10, 100);
}
void Gun::shoot()
{
    int curBullet = 1;
    while (gunCapacity > 0) {
        cout << "Bullet " << gunCapacity << endl;
        gunCapacity--;
    }
}

void Gun::reload(int chamber, int bullet)
{
    bullet = chamber;

    cout << bullet << "\n";
}
Tocka::Tocka() {
}
Tocka::Tocka(double x, double y, double z)
{
    length = x;
    height = y;
    width = z;

    cout << "Set funkcija: Duzina " << length << " Visina " << height << " Sirina " << width << "\n";
}

void Tocka::get(double* x, double* y, double* z)
{
    *x = length;
    *y = height;
    *z = width;
}

void Tocka::distance_2D(double x, double y, double x1, double y1)
{
    double distance = sqrt(pow(x1 - x, 2) + pow(y1 - y, 2) * 1.0);
    cout << "2D udaljenost je " << distance << "\n";
}

void Tocka::distance_3D(double x, double y, double z, double x1, double y1, double z1)
{
    double distance = sqrt(pow(x1 - x, 2) + pow(y1 - y, 2) + pow(z1 - z, 2) * 1.0);
    cout << "3D udaljenost je " << distance << "\n";
}

void Tocka::random_set(int a, int b)
{


    length = b + (rand() % a);
    height = b + (rand() % a);
    width = b + (rand() % a);

    cout << "random_set funkcija: Duzina " << length << " Visina " << height << " Sirina " << width << "\n";

}
int pucanje(int n_meta)
{
    Gun pistolj(20);
    vector<Target> mete;
    mete.reserve(n_meta);
    for (int i = 0; i < n_meta; i++) {
        Target t;
        mete.push_back(t);
    }


}



int main()
{
    srand(time(NULL));
    pucanje(20);
    return 0;

}