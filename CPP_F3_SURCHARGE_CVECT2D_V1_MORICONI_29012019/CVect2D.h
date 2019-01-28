#pragma once

class CVect2D {

	//Données membres
private:						
	float x;
	float y;

	//Fonctions membres
public:

	//Fonction affiche
	void affiche() const;
	
	//Surcharge opérateur
	friend CVect2D operator+(CVect2D, CVect2D);

	//Assesseurs
	float getVectX()const;
	float getVectY()const;

	//Mutateurs
	void setVectX(float fltX);
	void setVectY(float fltY);

	//Constructeurs
	CVect2D();
	CVect2D(float, float);

	//Méthodes de calcul
	void sumVect(CVect2D u, CVect2D v);
	void subVect(CVect2D u, CVect2D v);
	void multVect(CVect2D u, CVect2D v);
	void multScal(float r);
	float multNorm(CVect2D v);

	//Destructeur
	~CVect2D();
};