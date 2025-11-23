#include <iostream>
#include <cstring>

using namespace std;

class Elev
{	
private:
	const int id;
	static int nrelevi;
	char* nume;
	string prenume;
	int varsta;
	float medie;

public:
	Elev():	id(0) 
	{
		this->nume = new char [strlen("IONESCU")+1];
		strcpy_s(this->nume, strlen("IONESCU") + 1, "ionescu");
		this->varsta = 25;
		this->medie = 9.5;

	}
	Elev(const char* nume, int varsta, float medie, string prenume):id(nrelevi)
	{
		this->nume = new char[strlen(nume) + 1];
		strcpy_s(this->nume, strlen(nume) + 1, nume);
		this->varsta = varsta;
		this->medie = medie;
		this->prenume = prenume;
		nrelevi++;

	}
	Elev(const Elev& d):id(nrelevi)
	{
		this->nume = new char[strlen(d.nume) + 1];
		strcpy_s(this->nume, strlen(d.nume) + 1, d.nume);
		this->varsta = d.varsta;
	}
	void setNume(const char* nume)
	{
		if (strlen(nume) != NULL)
		{	
			delete[] this->nume;
			this->nume = new char[strlen(nume) + 1];
			strcpy_s(this->nume, strlen(nume) + 1, nume);
		}
	}
	char* getNume()
	{
		return this->nume;

	}
	void setVarsta(int varsta)
	{
		if (varsta > 0)
		{
			this->varsta = varsta;
		}
	}
	int getVarsta()
	{
		return this->varsta;
	}
	static int nrElevi()
	{
		return nrelevi;
	}
};

int Elev::nrelevi = 0;

int main ()
{
	Elev e1;
	e1.setNume("gige");
	cout <<	e1.getNume()<<endl;
	e1.setVarsta(40);
	cout << e1.getVarsta()<<endl;
	Elev e2 = Elev("ionel", 43, 9.5, "florin");
	cout << e2.getNume();
	Elev e3 = Elev("ionel", 43, 9.5, "florin");
	cout << Elev::nrElevi()<<endl;
	Elev e4 = e2;
	cout << e4.getNume();

}