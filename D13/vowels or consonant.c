#include <stdio.h>   
void main()  
{  
    char letter;   
    printf("Input any alphabet : ");   
    scanf("%c", &letter);  

    if(letter=='a' ||letter=='e' || letter=='i' || letter=='o' || letter=='u' || letter=='A' || letter=='E' || letter=='I' || letter=='O' || letter=='U')  
    {  
        printf("The alphabet is a vowel.\n");   
    }  
    else if((letter>='a' && letter<='z') || (letter>='A' && letter<='Z'))  
    {  
        printf("The alphabet is a consonant.\n");  
    }  
    else  
    {  
        printf("The character is not an alphabet.\n");    
    }   
}
