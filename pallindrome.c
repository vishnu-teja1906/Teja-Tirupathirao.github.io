#include<stdio.h>
void main()
{
        int l,s;
        char a[20];
        printf("Enter the length of string :");
        scanf("%d",&l);
        printf("Enter string:");
        for(int i=0;i<l;i++)
        {
            scanf("%c",&a[i]);
        }
        for(int i=0;i<l/2;i++)
        {
            for(int j=l;j>l/2;j--)
            {
                if(a[i]==a[j])
                    s=1;
                else
                    s=0;
            }
        }
        if(s==1)
        {
            printf("Pallindrome");
        }
        else
        {
            printf("Not Pallindrome");
        }



}
