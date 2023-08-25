#ifndef LIB_H
#define LIB_H

#include<iostream>
#include"tic.h"

using namespace std;
void tic::addX(int row,int column)
{
  dimArr[row][column]="❌";
  
  
}
void tic::printBoard()
{
for (int i=0;i<3;i++)
    {cout<<endl<<"\t";
      for(int j=0;j<3;j++)
        {
          cout<<"\t"<<"\t"<<dimArr[i][j];
        }
      cout<<endl;
    }
}
#endif

