//Vowel ,Con, Special symbol

#include<stdio.h>
void main(){
	
	char chr;
	printf("Enter Character :- ");
	scanf("%c" , &chr);
	
	if(chr=='a'|| chr=='e'||chr=='i'||chr=='o'||chr=='u'||chr=='A'||chr=='E'||chr=='I'||chr=='O'||chr=='U'){
		printf("This is Vowel");
		
	}
	else if ((chr>='a' && chr<='z'|| chr>='A' && chr<='Z')){
		
		printf("This is Consonant");
	}
	else {
		printf("This is Symbol");
	}
}