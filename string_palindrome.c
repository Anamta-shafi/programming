#include<stdio.h>
#include<string.h>
#include <ctype.h>
int ispalindrome(char *string){
	int start=0;
	int end=strlen(string)-1;
	while(start<end){
		if(string[start]!=string[end]){
			return 0;
		}
		start++;
		end--;
	}
	return 1;
}
int main (void){
	char str[100];
	fgets(str,100,stdin);
	str[strcspn(str,"\n")]='\0';
	
	for (int i=0;str[i]!='\0';i++){
		str[i]=tolower (str[i]);
	}
	 char processed[100];
	 int j=0;
	 for(int i=0;str[i]!='\0';i++){
	 	if(isalnum(str[i])){
	 		processed[j++]=str[i];
		 }
	 }
	 processed[j]='\0';
	 
	 if(ispalindrome(processed)){
	 	printf("given string is a palindrome");
	 }
	 else{printf("not a palindrome");
	 
	 }
	return 0;
}