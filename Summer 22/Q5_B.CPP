#include <iostream.h>
#include <conio.h>

class science
{
	protected:
		float phyMarks,chyMarks;
	public:
		void acceptScienceMarks()
		{
			cout<<"\nEnter marks for Phy";
			cin>>phyMarks;
			cout<<"\nEntet marks for Chy ";
			cin>>chyMarks;
		}


};


class maths
{
	protected:
		float algMarks,geoMarks;
	public:
		void acceptMathsMarks()
		{
			cout<<"\nEnter marks for Alg";
			cin>>algMarks;
			cout<<"\nEntet marks for Geo ";
			cin>>geoMarks;
		}


};


class result : public science,public maths
{
	private:
		float total;
	public:
		result()
		{
			acceptScienceMarks();
			acceptMathsMarks();
			total = phyMarks+chyMarks+algMarks+geoMarks;
		}
	void displayTotal()
	{
		cout<<"\nTotal = "<<total;
	}
};


void main()
{
	clrscr();
	result r1;
	r1.displayTotal();
	getch();
}