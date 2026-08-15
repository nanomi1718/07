#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 #include <stdio.h> 
int inc(int counter);

int main(void) 
{ 

int i=10; 
	printf("before i=%d\n", i); 
	i=inc(i); // 함수의변환값이용 , i= 없으면 변환안됨 
	printf("after i=%d\n", i); 
	

}
int inc(int counter) 
{ 
	counter++; 
	return counter; 
}

