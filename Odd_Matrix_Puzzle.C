/**
 * Main Program to Solve Odd Matrix Puzzle
 * 
 * @author Kirankumar Kotari
 * @version 1,Feb 2009
 */

/**
 * Header File Import Stmts. 
 */
#include "Headers\stdio.h"
#include "Headers\conio.h"


/**
 * Global Parameter 
 */
int ip;

/**
 * Main Function 
 */
int main(){
	int i,temp=1,sum=1,max,x,y,x_new,y_new,j,puz=1;
	
	printf("\n ODD MATRIX PUZZLE");
	input();

	ip+=1;
	for(i=1;i<ip-1;i++){
		temp+=ip;
		sum+=temp;
	}

	ip=ip-1;
	max=ip;

	x=(ip+1)/2;
	y=1;

	for(i=1;i<=ip;i++){
		for(j=1;j<=ip;j++){
			x_new = 4*x;
			y_new = y+6;
			gotoxy(x_new,y_new);
			printf("%d",puz);
			puz++;

			if(j!=ip){
				if(x==max) x=0;
				if(x!=max) x=x+1;
				if(y==1) y=ip+1;
				if(y!=1) y=y-1;
			}
			if(j==ip)	
				y=y+1;
		}
	}

	printf("\n Odd Matrix Puzzle Sum is : %d",sum);
	return 0;
}

/**
 * Function for Input Data
 */
int input(){
	printf("\n Enter a odd +ve number :");
	scanf("%d",&ip);
		
		if(ip%2 != 1){
			printf("In-valid Entry!");
			input();
		}			
	return 0;
}