#include <stdio.h> 

int inc(int counter);

int main(void) 
{ 
    int i = 10; 
	printf("함수 호출전 i=%d\n", i); 
	i = inc(i); // 함수의변환값이용 , i= 없으면 변환안됨 
	printf("함수 호출후 i=%d\n", i); 

}
int inc(int counter) 
{ 
	counter++; 
	return counter; 
}


