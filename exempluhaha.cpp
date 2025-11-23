#include<iostream>
#include<cstring>
using namespace std;

class Telefon
{	
private:
	const int id;
	int numartel;
	float pret;
	char* model;
public:
	Telefon():id(0)
	{
		this->numartel = 23;
		this->model = new char[strlen("iphone")+1];
		strcpy_s(this->model, strlen("iphone") + 1, "iphone");
		this->pret = 42321.2;
		this->numartel = 0720201650;

	}
	Telefon(int numartel, float pret, const char* model):id(1)
	{
		this->numartel = numartel;
		this->pret = pret;
		this->model = new char[strlen(model) + 1];
		strcpy_s(this->model, strlen(model) + 1, model);
	}
	void setNumartel(int numartel)
	{
		if (numartel > 0)
		{
			this->numartel = numartel;
		}
	}
	int getNumartel()
	{
		return this->numartel;
	}
};

int main()
{
	Telefon t1;

	cout << t1.getNumartel();

}