#pragma once
using namespace std;

template <typename T>
class point
{
    T a, b;

public:

    point() : a(0), b(0) {}
    point(T a, T b) : a(a), b(b) {}

    double udaljenost(const point& other) {
        return sqrt((a - other.a) * (a - other.a) + (b - other.b) * (b - other.b));
    }
    double operator-(const point& other) {
        return udaljenost(other);
    }
    friend ostream& operator<<(ostream& os, const point& point) {
        os << "(" << point.a << ", " << point.b << ")";
        return os;
    }
};