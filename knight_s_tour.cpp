
#include<bits/stdc++>
using namespace std;

int knightTourUtil(int x, int y, int movei, int xMove[n], int yMove[n], int solve[n][n]){

	if(movei == n*n) 
		return 1;
	int k, next_x, next_y;
	for(int k=0; k<8; k++){
		next_x = x + xMove[k];
		next_y = y + yMove[k];
		if(next_x>=0 && next_x<n && next_y>=0 && next_y<n && solve[next_x][next_y] == -1){
			solve[next_x][next_y] = movei;
			if(knightTourUtil(next_x, next_y, movei+1, xMove, yMove, solve) == 1)
				return 1;
			else
				solve[next_x][next_y] = -1;
		}
	}
	return 0;
}
void printSolution(int sol[N][N]) 
{ 
    for (int x = 0; x < N; x++) 
    { 
        for (int y = 0; y < N; y++) 
            printf(" %2d ", sol[x][y]); 
        printf("\n"); 
    } 
} 

int knightTour(int n){
	int solve[n][n];
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			solve[i][j] = -1;

	solve[0][0] = 0; //starting position, can be any cell here (0,0)

	int xMove = {-2, -1, 1, 2, 2, 1, -1, -2};
	int yMove = {1, 2, 2, 1, -1, -2, -2, -1};

	if(knightTourUtil(0, 0, 1, xMove, yMove, solve() == 0){
		cout<<-1<<endl;
		return 0;
	} else {
		printSolution(solve);
	}
	return 1;
}


int main(){
	int n;
	cin>>n;
	knightTour(n);
	return 0;
}