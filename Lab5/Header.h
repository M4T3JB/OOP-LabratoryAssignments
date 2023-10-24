#pragma once
#include<iostream>
#include<vector>

using namespace std;

struct Point {
	double x;
	double y;
public:
	Point(double x1, double y1) { x = x1; y = y1; };
	Point(const Point& other) { x = other.x; y = other.y; };
	~Point() {};
};


class Board {
	int width;
	int height;
	char z;
	char** matrix;
public:
	Board(int w, int h);
	~Board();
	Board(const Board& other);
	void matrica();
	void display();
	void create();
	void draw_ch(Point p, char ch);
	void draw_up_line(Point p, char ch);
	void draw_line(Point p1, Point p2, char ch);
};