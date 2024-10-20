#include <iostream.h>
#include <conio.h>
#define MAX 3

void accept(int x[MAX][MAX],int row,int col)
{
	int i,j;
	cout<<"\nEnter the no for matrix: ";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			cin>>x[i][j];
	}


}

void display(int x[MAX][MAX],int row,int col)
{
	int i,j;
	cout<<"\nMatrix: \n";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			cout<<x[i][j]<<" ";
		cout<<"\n";
	}


}
void main()
{
	clrscr();
	int mat1[3][3],mat2[3][3],mat3[3][3];
	accept(mat1,3,3);
	accept(mat2,3,3);

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			mat3[i][j]=mat1[i][j]+mat2[i][j];

	}
	display(mat3,3,3);
	getch();
}
