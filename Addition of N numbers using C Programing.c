// Addition of N numbers using C Programing
#include<stdio.h>
#include<conio.h>
int main()
{
        int i, n, s=0, N;      
        printf("How many Numbers You want to Enter to Add them ? ");
        scanf("%d",&n);
        
        printf("Enter %d numbers : ",n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&N);
            s = s + N;
        }
        printf("Sum of all %d numbers is %d",n,s);
        getch();
        return 0;
}
