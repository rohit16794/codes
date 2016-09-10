// Program to count islands in boolean 2D matrix

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <bits/stdc++.h>
#define ROW 5
#define COL 5
#define MAX 100
using namespace std;

/*you are required to complete this method*/

bool issafe(int A[][MAX],int row,int col,int visited[MAX][MAX])
{
    if(row>=0 and row<MAX and col>=0 and col<MAX and A[row][col] and !visited[row][col])
    {
        return true;
    }
    else
    return false;
}

void dfs(int A[][MAX],int row,int col,int visited[][MAX])
{
    visited[row][col]=true;
    
    static int rowN[]={-1,-1,-1,0,0,1,1,1};
    static int colN[]={-1,0,1,-1,1,-1,0,1};
    
    for(int k=0;k<8;k++)
    {
        if(issafe(A,row+rowN[k],col+colN[k],visited))
        {
            dfs(A,row+rowN[k],col+colN[k],visited);
        }
    }
}
int findIslands(int A[MAX][MAX], int N, int M)
{
//Your code here 
int count=0;

int visited[MAX][MAX];

for(int i=0;i<MAX;i++)
{
    for(int j=0;j<MAX;j++)
    visited[i][j]=0;
}

for(int i=0;i<MAX;i++)
{
    for(int j=0;j<MAX;j++)
    {
        if(A[i][j] and !visited[i][j])
        {
            dfs(A,i,j,visited);
            ++count;
        }
    }
}

return count;
}

int main()
{
    int M[][COL]= {  {1, 1, 0, 0, 0},
				      {0, 1, 0, 0, 1},
        				{1, 0, 0, 1, 1},
        			{0, 0, 0, 0, 0},
        			{1, 0, 1, 0, 1}
    };
    
  cout<< findIslands(M,5,5); 
    
return 0;    
}
    
    