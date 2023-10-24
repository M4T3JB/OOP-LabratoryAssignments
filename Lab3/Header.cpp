#include "Header.h"
#include<iostream>
#include<math.h>
#include<assert.h>
#include "Header.h"
using namespace std;
using namespace OOP;
typedef float f;

istream& operator>>(istream& in, Vec3& obj)
{
    is >> vec.x >> vec.y >> vec.z;
    return is;
}

ostream& operator<<(ostream& out, const Vec3& obj)
{
    os << vec.x << " - X |" << vec.y << " - Y | " << vec.z << " - Z " << endl;
    return os;
}
