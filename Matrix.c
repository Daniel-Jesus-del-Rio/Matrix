/*
* Author: Daniel Jesus del Rio

*/

/* System header files */
#include <stdio.h>

/* Main function */

int main(int argc, char **argv)
{
	/* Variable definition */
	
	int f[3][3];
	int c[2][2];
	int order;
	int det;
	printf("INPUT\n");
	printf("SIZE (2-3)?\n");
	scanf("%d",&order);
	
	/* Data Processing */

	if (order==3){
	/* Data Input */
	printf("POSITION(0,0)?\n");
	scanf("%d", &f[0][0]);
	printf("POSITION(0,1)?\n");
	scanf("%d",&f[0][1]);
	printf("POSITION(0,2)?\n");
	scanf("%d",&f[0][2]);
	printf("POSITION(1,0)?\n");
	scanf("%d",&f[1][0]);
	printf("POSITION(1,1)?\n");
	scanf("%d",&f[1][1]);
	printf("POSITION(1,2)?\n");
	scanf("%d",&f[1][2]);
	printf("POSITION(2,0)?\n");
	scanf("%d",&f[2][0]);
	printf("POSITION(2,1)?\n");
	scanf("%d",&f[2][1]);
	printf("POSITION(2,2)?\n");
	scanf("%d",&f[2][2]);
	/* Data Output */
	printf("OUTPUT\n");
	det=f[0][0]*f[1][1]*f[2][2]+f[0][1]*f[1][2]*f[2][0]+f[0][2]*f[1][0]*f[2][1]+-f[0][2]*f[1][1]*f[2][0]-f[0][0]*f[1][2]*f[2][1]-f[0][1]*f[1][0]*f[2][2];
	printf("RESULT:%d\n",det);
		

	} else if(order==2){
	/* Data Input */
	printf("POSITION(0,0)?\n");
	scanf("%d", &c[0][0]);
	printf("POSITION(0,1)?\n");
	scanf("%d",&c[0][1]);
	printf("POSITION(1,0)?\n");
	scanf("%d",&c[1][0]);
	printf("POSITION(1,1)?\n");
	scanf("%d",&c[1][1]);
	/* Data Output */
	printf("OUTPUT\n");
	det=c[0][0]*c[1][1]-c[0][1]*c[1][0];
	printf("RESULT:%d\n",det);
	}else {
		printf("INVALID VALUE\n");}
	
	return 0;
}
