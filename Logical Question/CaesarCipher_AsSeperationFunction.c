#include <stdio.h>

char *CaesarCipher(int charCount, char *actualString, int shiftValue)
{
 char ch;
 if (charCount >= 1 && charCount <= 100 && shiftValue >= 0 && shiftValue <= 100)
    {
            for(int i = 0; actualString[i] != ' '; ++i)
            {
	            ch = actualString[i+1];
		   		if(ch >= 'a' && ch <= 'z')
        		{
        			ch = ch + shiftValue;
			        if(ch > 'z')
    				ch = ch - 'z' + 'a' - 1;
    			    actualString[i+1] = ch;
		        }
		        else if(ch >= 'A' && ch <= 'Z')
		        {
			        ch = ch + shiftValue;
					if(ch > 'Z')
			    	ch = ch - 'Z' + 'A' - 1;
			        actualString[i+1] = ch;
		        }
	        }
    }
return (char *)actualString;
}

int main ()
{
   	char *encryptedString;
   	printf("execute");
    encryptedString	= CaesarCipher(8,"Hello-! ",3);
   	printf("%s", encryptedString);
	return 0;
}
