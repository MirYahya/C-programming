#include<stdio.h>
void main()
{
    char x;
    printf("enter the alphabet");
    scanf("%c",&x);
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
    {
        printf("the alphabet is vowel");
    }
        else
        {
            printf("the alphabet is consonants");
        }
}