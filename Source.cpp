#include <iostream>
using namespace std;

class Fruct
{
private:

	//numarFruct
	char* nume;
	string culoare;
	float greutate;
	int lunaMaturitate;
	float* vitamine;
	int sizeVit;


public:
	void setGreutate(float greutate)
	{
		if (greutate > 0)
			this->greutate = greutate;

	}
	float getGreutate()
	{
		return this->greutate;
	}
	void setNume(const char* nume)
	{	
		if (strlen(nume) > 0)
		{
			if (this->nume != Null)
			{
				delete[] this->nume;
			}
			this->nume = new char[strlen(nume) + 1];
			strcpy_s(this->nume, strlen(nume) + 1, nume);
				
		}
			
	}
	char* getNume()
	{
		return nume;
	}
	void setCuloare(string culoare)
	{	
		if (culoare.length() > 0) {
			this->culoare = culoare;
		}
	}

	void setVitamine(float* vitamine, int sizeVit)
	{
		if (sizeVit > 0)
		{
			this->sizeVit = sizeVit;
			if (this->vitamine != NULL)
			{
				delete[] this->vitamine;
			}
			this->vitamine = new float[sizeVit];
			for (int i = 0; i < size; i++)
			{
				this->vitamine[i] = vitamine[i];
			}
		}	
	}
	float* getVitamine(float* vitamine, int size)
	{
		for (int i = 0; i < size; i++)
		{
			vitamine[i] = this->vitamine[i];
			return this->vitamine;
		}
		
	
}

};

void main() {
	
	Fruct fruct;
	Fruct f;
	Fruct para;

	fruct.setGreutate(23.5);

	cout << fruct.getGreutate()<<endl;
	fruct.setNume("Mar");
	cout<<fruct.getNume();

}
