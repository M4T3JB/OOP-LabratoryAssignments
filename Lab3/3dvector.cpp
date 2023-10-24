#include<iostream>
#include<math.h>
#include<assert.h>
#include "Header.h"
using namespace std;
using namespace OOP;
typedef float f;

Vec3::Vec3(const Vec3& vec)
{
    x = vec.x;
    y = vec.y;
    z = vec.z;
}

//addition

Vec3 Vec3 ::operator+(const Vec3& vec)
{
    return Vec3(x + vec.x, y + vec.y, z + vec.z);
}

Vec3& Vec3 ::operator+=(const Vec3& vec)
{
    x += vec.x;
    y += vec.y;
    z += vec.z;
    return *this;
}
//substraction//
Vec3 Vec3 ::operator-(const Vec3& vec)
{
    return Vec3(x - vec.x, y - vec.y, z - vec.z);
}

Vec3& Vec3::operator-=(const Vec3& vec)
{
    x -= vec.x;
    y -= vec.y;
    z -= vec.z;
    return *this;
}

//scalar multiplication

Vec3 Vec3 ::operator*(f value)
{
    return Vec3(x * value, y * value, z * value);
}



Vec3& Vec3::operator*=(f value)
{
    x *= value;
    y *= value;
    z *= value;
    return *this;
}

//scalar division
Vec3 Vec3 ::operator/(f value)
{
    assert(value != 0);
    return Vec3(x / value, y / value, z / value);
}

Vec3& Vec3 ::operator/=(f value)
{
    assert(value != 0);
    x /= value;
    y /= value;
    z /= value;
    return *this;
}


Vec3& Vec3::operator=(const Vec3& vec)
{
    x = vec.x;
    y = vec.y;
    z = vec.z;
    return *this;
}




f Vec3::magnitude()
{
    return sqrt(square());
}

f Vec3::square()
{
    return x * x + y * y + z * z;
}

Vec3 Vec3::normalization()
{
    assert(magnitude() != 0);
    *this /= magnitude();
    return *this;
}



f Vec3::show_X()
{
    return x;
}

f Vec3::show_Y()
{
    return y;
}

f Vec3::show_Z()
{
    return z;
}

void Vec3::disp()
{
    cout << x << " " << y << " " << z << endl;
}

istream& operator>>(istream& is, Vec3& vec)
{
    is >> vec.x;
    is >> vec.y;
    is >> vec.z;
    return is;
}

ostream& operator<<(ostream& os, const Vec3& vec)
{
    os << vec.x << " - X |" << vec.y << " - Y | " << vec.z << " - Z " << endl;
    return os;
}


