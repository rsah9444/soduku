#include<iostream>
using namespace std;
int main()
{
int a[9][9],b[9][9],c[9][9],i,j,row ,column,d=0,e=0;char c$;
//for taking the number as a game play in the matrix form
do{
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            cout<<"enter the number of field you want to enter the number in the basis of row and column as like for the second row 1st column enter 1 ,1"<<endl;
            cin>>row>>column;
            cout<<"enter the number in the sudoku"<<endl;
            cin>>a[row][column];

        }
    }
    //for printing the numbers in matrix form
     for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            cout<<"the sudoku number you have entered till now are presented in the matrix order like"<<endl;
            cout<<a[i][j];

        }
        cout<<endl;
    }
    //for checking the number and matching the sudoku with the real problems
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            if(a[i][j]==b[i][j])
            {
              d=1;
              d++;

            }
            else
            {
                e=1;
                e++;
            }
        }
    }
        //for checking that the any number in the sudoku is miss match
        if(d=81||e>0)
        {
            cout<<"congratulation you have solved sudoku"<<endl;
        }
        else
        {
            cout<<"you have some number mismatch want to try again "<<endl<<"if yes press y else press n" ;
            cin>>c$;


        }

}while(c$!='n');
return 0;

}
