#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>
int main(){
	
	int x;
        printf("enter the value");
	scanf("%d",&x);
	if(x<0){

		printf("you have entered negative value\n");
		exit(0);
	}
	if(fork()== 0){

		while(x>=1){

			printf("%d \n",x);
			x/=2;
		}

	}
	else{

		wait(NULL);

	}
	return 0;
}
