#include "cVect2D.h"
#include <math.h>
#include <iostream>
using namespace std;

void CVect2D::affiche()const {
	cout << "coordonnees : " << x << " " << y << "\n";
}

CVect2D operator+(CVect2D a, CVect2D b) {

	CVect2D p;
	p.x = a.x + b.x;
	p.y = a.y + a.y;

	return p;
}

float CVect2D::getVectX()const {

	return x;
}

float CVect2D::getVectY()const {

	return y;
}

void CVect2D::setVectX(float fltX) {

	x = fltX;
}

void CVect2D::setVectY(float fltY) {

	y = fltY;
}

CVect2D::CVect2D() {

	x = 0.0f;
	y = 0.0f;
}

CVect2D::CVect2D(float a, float b) {

	x = a;
	y = b;
}

void CVect2D::sumVect(CVect2D u, CVect2D v) {

	//Je récupère les valeurs x et y de u et v...
	float ux = u.getVectX();
	float uy = u.getVectY();
	float vx = v.getVectX();
	float vy = v.getVectY();

	//... puis je les additionne
	x = ux + vx;
	y = uy + vy;
}

void CVect2D::subVect(CVect2D u, CVect2D v) {

	//Je récupère les valeurs x et y de u et v...
	float ux = u.getVectX();
	float uy = u.getVectY();
	float vx = v.getVectX();
	float vy = v.getVectY();

	//... puis je les soustraits
	x = ux - vx;
	y = uy - vy;
}

void CVect2D::multVect(CVect2D u, CVect2D v) {

	//Je récupère les valeurs x et y de u et v...
	float ux = u.getVectX();
	float uy = u.getVectY();
	float vx = v.getVectX();
	float vy = v.getVectY();

	//... puis je les multiplie
	x = ux * vx;
	y = uy * vy;
}

void CVect2D::multScal(float r) {

	//Je multiplie mon vecteur par le scalaire
	x *= r;
	y *= r;
}

float CVect2D::multNorm(CVect2D v) {

	//Je récupère les valeurs x et y de v...

	float vx = v.getVectX();
	float vy = v.getVectY();

	//... puis je multiplie les normes
	return sqrt(pow(vx - this->x, 2) + pow(vy - this->y, 2));
}

CVect2D::~CVect2D() {}