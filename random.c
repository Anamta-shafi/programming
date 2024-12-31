#include<stdio.h>
#include<string.h>
int ispalindrome(char *str){
	int start=0;
	int end=strlen(str)-1;
	while(start<end){
		if(str[start]!=str[end])
		{
		return 0;}
	start++;
	end--;	
	}
	return 1;
}
int main(void){
	char str[100];
	fgets(str,100,stdin);
	str[strcspn(str,"\n")]='\0';
	char *token;
	int max=0;
	char longest[100];
	longest[0]='\0';
	token=strtok(str," ");
	int palindrome=0;
	while(token!=NULL){
		if(ispalindrome(token)){
		    palindrome=1;
	     	int length=strlen(token);
	     	if(length==1) palindrome=0; // ignore the single character word as it is always a palindrome 
	     	
		    if(length>=max  ){ /* ">=" print the last palindrome word in case of multiple palindromes of same length  
		                            while  ">" print the first one */
				max=length; 
		    	strcpy(longest,token);
		}}
		token=strtok(NULL," ");
	}
	if(palindrome==1){
	
	printf("longest palindrome word is %s\n",longest);
	printf("length of %s is %d",longest,max);}
	else{
		printf("no word is palindrome in a given string ");
	}
	return 0;
}