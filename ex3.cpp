#include<iostream>
#include<cstring>
using namespace std;

class Telefon
{
private:
	const int id;
	long long numartel;
	float pret;
	char* model;

public:
	Telefon() :id(0)
	{
		this->numartel = 23;
		this->model = new char[strlen("iphone") + 1];
		strcpy_s(this->model, strlen("iphone") + 1, "iphone");
		this->pret = 42321.2;
		this->numartel = 3424124;

	}
	Telefon(long long numartel, float pret, const char* model) :id(1)
	{
		this->numartel = numartel;
		this->pret = pret;
		this->model = new char[strlen(model) + 1];
		strcpy_s(this->model, strlen(model) + 1, model);
	}
	Telefon(Telefon& c):id(3)
	{
		this->numartel = c.numartel;
	}
	void setNumartel(long long numartel)
	{
		if (numartel > 0)
		{
			this->numartel = numartel;
		}
	}
	long long getNumartel()
	{
		return this->numartel;
	}
	void setModel(const char* model)
	{
		if (strlen(model) > 0)
		{
			delete[] this->model;
			this->model = new char[strlen(model) + 1];
			strcpy_s(this->model, strlen(model) + 1, model);
		}
	}
	char* getModel()
	{
		return this->model;

	}
};

int main()
{
	Telefon t1;
	Telefon t2(6, 8.2, "nokia");
	cout << t1.getNumartel()<<endl;
	cout << t2.getNumartel() << endl;
	Telefon t3 = t2;
	cout << t3.getNumartel() << endl;
	t3.setModel("Yamil Angura"); t3.setModel("Tyo Mi Ping");
	t3.setModel("Kugura Myoiei");
	t3.setModel("Lee Geo Ngur");
	Telefon t4;
	cout << t4.getModel() << endl;
	cout << t3.getModel();

			
}