#include<iostream>
#include<iomanip>
#define NODE 7
#define INF 999
using namespace std;

//Cost matrix of the graph
int costMat[NODE][NODE] = {
	{0,9,-4,INF},
	{6,0,INF,2},
	{INF,5,0,INF},
	{INF,INF,1,0},
	
};

void floydWarshal() {
   int cost[NODE][NODE];    //defind to store shortest distance from any node to any node
   for(int i = 0; i<NODE; i++)
      for(int j = 0; j<NODE; j++)
         cost[i][j] = costMat[i][j];     //copy costMatrix to new matrix

   for(int k = 0; k<NODE; k++) {
      for(int i = 0; i<NODE; i++)
         for(int j = 0; j<NODE; j++)
            if(cost[i][k]+cost[k][j] < cost[i][j])
               cost[i][j] = cost[i][k]+cost[k][j];
   }

   cout << "The matrix:" << endl;
   for(int i = 0; i<NODE; i++) {
      for(int j = 0; j<NODE; j++)
         cout << setw(3) << cost[i][j];
      cout << endl;
   }
}

int main() {
   floydWarshal();
}
