#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int costMatrix[3][3];
    
	int i,j;
    int dp[3][3];
    
    printf("Enter 3x3 cost matrix : ");
    for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		scanf("%d",&costMatrix[i][j]);
		}
	}

    dp[0][0] = costMatrix[0][0];

    for (j = 1; j < 3; j++) {
        dp[0][j] = dp[0][j - 1] + costMatrix[0][j];
    }

    for (i = 1; i < 3; i++) {
        dp[i][0] = dp[i - 1][0] + costMatrix[i][0];
    }

    for (i = 1; i < 3; i++) {
        for (j = 1; j < 3; j++) {
            dp[i][j] = costMatrix[i][j] + min(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    int minCost = dp[3 - 1][3 - 1];

    printf("Minimum Cost : %d\n", minCost);

    return 0;
}

