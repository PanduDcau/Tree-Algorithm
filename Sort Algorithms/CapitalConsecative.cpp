#include<stdio.h>
int checkVowel(char ch)
{
		char toupper;
        ch=toupper(ch);
        
        if((ch=='A') || (ch=='E') || (ch=='I') || (ch=='O') || (ch=='U'))
                return 1;
        else
                return 0;
}
int main()
{
        char str[100];
        printf("Enter string : ");
        scanf("%[^\n]",str);
        int i,strlen,consecutiveVowel=0;
        for(i=0;str[i];i++);
        strlen=i;
        for(i=0;i<strlen-1;i++)
        {
                if(checkVowel(str[i]))
                {
                        if(checkVowel(str[i+1]))
                        {
                                consecutiveVowel++;
                        }
                }
        }
        printf("Total Consecutive Vowel = %d\n",consecutiveVowel);
        return 0;
}
