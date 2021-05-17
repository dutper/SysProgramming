#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char a;
	char b;
	
	for(int i=0; i<1;) {

		printf("문자 입력 : ");
		scanf("%c", &a);
		getchar();
		
		if((a>64)&&(a<91)==1){
			b=a+32;
			printf("입력한 %c의 소문자는 %c입니다.\n", a, b);
		}
		else if((a>96)&&(a<123)==1){
			b=a-32;
			printf("입력한 %c의 대문자는 %c입니다.\n", a, b);
		}
		else if(a==48){
			break;
		}
	}
}
