#include <stdio.h>

int main ()
{
   char actualstring[100], ch;
	int i, shift,length;
	printf("string length: ");
	scanf("%d", &length);
	printf("Enter a string to Cipher No Spaces: ");
	scanf("%s", actualstring);
	printf("Enter Shift/Rotation: ");
	scanf("%d", &shift);
	
	for(i = 0; actualstring[i] != ' '; ++i){
		ch = actualstring[i];
		
		if(ch >= 'a' && ch <= 'z'){
			ch = ch + shift;
			
			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;
			}
			
			actualstring[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch + shift;
			
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
			}
			
			actualstring[i] = ch;
		}
	}
	
	printf("Encrypted message: %s", actualstring);

}