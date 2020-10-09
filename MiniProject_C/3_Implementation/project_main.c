#include<stdio.h>
#define ROT 13

int main(void)
{
	
    int c,e;
    
    printf("Enter the characters to be rotated by 13 position from it:\n");

    while((c=getchar())!=EOF)
    {
    
        if(c >='A' && c <='Z')
        {
            if((e = c + ROT) <= 'Z')
            {
                putchar(e);
               
            }
            else
            {
                e = c - ROT;
                putchar(e);
            }
        }
        else if (c >='a' && c <='z')
        {
        	
            if((e= c + ROT) <= 'z')
            {
            	 putchar(e);
            	 
            }
            else
            {
               e=c-ROT;
               putchar(e);
              
            }
        }
        else 
        
        {
        	
        	putchar(c);
        	
		}
    
    }
    

return 0;
}

