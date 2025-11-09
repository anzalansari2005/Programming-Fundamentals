#include <stdio.h>
int main() {
	int r,c,R,C;
	printf("Enter Rows and Columns for A:\n");
	scanf("%d %d",&r,&c);
	printf("Enter Rows and Columns for B:\n");
	scanf("%d %d",&R,&C);
	if(c!=R){
		printf("Multiplication not possible");
	}
	else{
    int A[r][c];
    for(int i=0;i<r;i++){
    	for(int j=0;j<c;j++){
    		printf("Enter a num:");
    		scanf("%d",&A[i][j]);
		}
	}
	int B[R][C];
    for(int i=0;i<R;i++){
    	for(int j=0;j<C;j++){
    		printf("Enter a num:");
    		scanf("%d",&B[i][j]);
		}
	}
	int D[r][C];
		for(int i =0;i<r;i++){
			for(int j=0;j<C;j++){
				D[i][j]=0;
				for(int k=0;k<c;k++){
					D[i][j] += A[i][k]*B[k][j];
				}
			}
		}	
	printf("resultant: \n");
	for(int i=0;i<r;i++){
		for(int j=0;j<C;j++){
			printf("%d ", D[i][j]);
		}
		printf("\n");
	}
	}
}
	
