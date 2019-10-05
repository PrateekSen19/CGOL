/*
 ============================================================================
 Name        : CGOL.c
 Author      : Prateek
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
   // To declare 2-D array
   int data[5][5];

   int i, j;
   for(i=0; i<5; i++) {
      for(j=0;j<5;j++) {
         printf("Enter the values of data[%d][%d]:", i, j);
         fflush(stdout);
         scanf("%d", &data[i][j]);
      }

   }
   //Display elements of Array
   printf("First Generation:\n");
   for(i=0; i<5; i++) {
      for(j=0;j<5;j++) {

         printf("%d", data[i][j]);
      }

      printf("\n");
   }


  void fun(int n, int m, int data[n][m]);
  const int n=5,m=5;

  fun(n,m,data);

  return 0;
}

void fun(int n,int m, int data[n][m]){

	int array[5][5];
	int i,j;
	int aliveNeighbours = 0;
	for(i=0; i<5; i++){
		for(j=0;j<5;j++){
			aliveNeighbours = 0;
			 int l,k;
			                for (l = -1; l <= 1; l++){
			                    for (k = -1; k <= 1; k++){

			                    	if (data[i+l][j+k]==1){
			                    		aliveNeighbours++;


			                    	}



			                    }

		}

			                aliveNeighbours = aliveNeighbours - data[i][j];


			                if (aliveNeighbours < 2)
			                                    array[i][j] = 0;

			                                // Cell dies due to over population
			                                else if (aliveNeighbours > 3)
			                                    array[i][j] = 0;

			                                // A new cell is born
			                                else if (aliveNeighbours == 3)
			                                    array[i][j] = 1;

			                                // Remains the same
			                                else if (aliveNeighbours==2){

			                                	if(data[i][j]==1){
			                                		array[i][j]=1;
			                                	}
			                                	else
			                                		array[i][j]=0;

			                                }

		}
	}

	int a,b;
printf("\n");
printf("Second Generation:\n");
	 for(a=0; a<5; a++) {
	      for(b=0;b<5;b++) {

	         printf("%d", array[a][b]);
	      }
	      printf("\n");
	   }


}

