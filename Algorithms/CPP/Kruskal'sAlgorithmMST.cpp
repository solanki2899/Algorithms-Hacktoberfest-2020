/// Minimum Spanning tree (using Kruskal's Algorithm)
/// Author: SHAHiD
/// Date: 12/10/16
#include<iostream>
using namespace std;
int main(){

        int nNodes=3;
		int matrix[nNodes][nNodes];
		int parent[nNodes];
		int Min;
		int u = 0;
		int v = 0;
		int noOfEdges = 1;
		int total = 0;
		cout<<"Enter an adjacency matrix "<<nNodes<<"x"<<nNodes<<":\n";

		for(int i = 0; i < nNodes; i++)
        {
            parent[i] = 0;  /// Due to not be initialized , as variable
			for(int j = 0; j < nNodes; j++)
            {
                cin>>matrix[i][j];
				if(matrix[i][j]==0)
				{
					matrix[i][j] = 999;
				}

			}

		}

		while(noOfEdges < nNodes)
        {

			Min = 999;

			for(int i = 0; i < nNodes; i++)
            {
				for(int j = 0; j < nNodes; j++)
                {
                    if(matrix[i][j] < Min)
                    {
						Min = matrix[i][j];
						u = i;
						v = j;

					}

				}

			}

			if(parent[u]!=0){
				u = parent[u];
			}

			if(parent[v]!=0){
				v = parent[v];
			}

			if(v!=u){

				noOfEdges++;
				cout<<"Edge Found: "<<u <<"->" <<v<<" Weight : " << Min<<endl;
				total+=Min;


			}

			matrix[u][v] = 999;
			matrix[v][u] = 999;

		}

		cout<<"The weight of the Minimum spanning tree is "<<total<<endl;

	}

