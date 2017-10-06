#include<stdio.h>
#include<string.h>
int main()
{
    char comp[67] = {'A','B','C','D','E',
                     'F','G','H','I','J',
                     'K','L','M','N','O',
                     'P','Q','R','S','T',
                     'U','V','W','X','Y',
                     'Z','a','b','c','d',
                     'e','f','g','h','i',
                     'j','k','l','m','n',
                     'o','p','q','r','s',
                     't','u','v','w','x',
                     'y','z','0','1','2',
                     '3','4','5','6','7',
                     '8','9','+','-','*','/'};

    char str[100],sender[100];
    int a,b,c,i,val,j=0,count = 0,count1 = 0;
    scanf("%s",str);
    printf("STRLEN = %d\n",strlen(str));
    for (i = 0; i < strlen(str); i+=3)
    {
        a = str[i];
        printf("%d\n",a);
        if((i+1)<strlen(str))
        b = str[i+1];
        else
        {
        b = 0; count1 = 1;
        }
       // printf("%d\n",b);
        if((i+2)<strlen(str))
        c = str[i+2];
//printf("%d\n",c);
//printf("%d\n",c);
        else
        {
            c = 0;count = 1;
        }
        a<<=16;b<<=8;
        val = a+b+c;
        printf("%d\n",val);
        sender[j] = comp[val>>18];
        printf("J = %d\n",val>>18);
        sender[j+1] = comp[val>>12&63];
        printf("J + 1 =%c\n",sender[j+1]);
         if(count1 == 0)
        sender[j+2] = comp[val>>6&63];
        else
        sender[j+2] = '=';
        printf("J + 2 =%c\n",sender[j+2]);
        if(count == 0)
        sender[j+3] = comp[val&63];
        else
        sender[j+3] = '=';
        j+=4;
    }
    sender[j]='\0';
    printf("%s",sender);
}

