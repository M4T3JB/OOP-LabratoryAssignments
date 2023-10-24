#pragma once
#include<iostream>
#include<math.h>
#include<assert.h>
using namespace std;
typedef float f;
namespace OOP {
    class Vec3
    {
        
    public:
        f x, y, z;
       
        
        Vec3()
        {
            x = 0;
            y = 0;
            z = 0;
        }

        Vec3(f x1, f y1, f z1 = 0)
        {
            x = x1;
            y = y1;
            z = z1;
        }
        Vec3(const Vec3& vec);
        Vec3 operator+(const Vec3& vec);
        Vec3& operator+=(const Vec3& vec);
        Vec3 operator-(const Vec3& vec);
        Vec3& operator-=(const Vec3& vec);
        Vec3 operator*(f value);
        Vec3& operator*=(f value);
        Vec3 operator/(f value);
        Vec3& operator/=(f value);
        Vec3& operator=(const Vec3& vec);

        f magnitude();
        Vec3 normalization();
        f square();


        f show_X();
        f show_Y();
        f show_Z();
        void disp();
  
        friend std::istream& operator>>(std::istream& is, Vec3& vec);
        friend std::ostream& operator<<(std::ostream& os, const Vec3& vec);
    };
}