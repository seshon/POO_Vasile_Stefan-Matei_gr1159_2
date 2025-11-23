#include <iostream>
#include <cstring>
using namespace std;

class Elev
{
private:
	char* nume;
	int varsta;
	float medie;

public:
	Elev ()
	{
		this->nume = NULL;
		this->varsta = 0;
		this->medie = 0;
	}

	void setNume(const char* nume)
	{
		if (nume && strlen(nume) > 0) {
			if (this->nume != NULL) {
				delete[] this->nume;
			}
			this->nume = new char[strlen(nume) + 1];
			strcpy_s(this->nume, strlen(nume) + 1, nume);
		}
	}
	char* getNume()
	{
		return this->nume;
	}
};

int main()
{
	Elev e1;
	e1.setNume("Gigel");
	cout << "Numele elevului este: " << e1.getNume();
	return 0;

	
}