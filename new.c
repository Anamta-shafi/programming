#include <stdio.h>
int main(void){
	char str[100];
	fgets(str,100,stdin);
	str[strcspn(str,"\n")]='\0';
	char *endpt;
	long num1=strtol(str,&endpt,10);
	char optr=*endpt;
	long num2=strtol(endpt+1,NULL,10);
	long result;
	switch (optr){
		case '+':
			result=num1+num2;
			break;
			case '-':
				result=num1-num2;
				break;
				case '*':
					result=num1*num2;
					break;
					case '/':
						if(num2!=0)
						result=num1/num2;
						else
						printf("error: divisible by zero");
							exit(0);
						break;
						
						default:
							printf("not a valid operator");
							exit(0);
							break;
	}
	printf("result is %ld",result);
	return 0;
}