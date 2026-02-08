#include <stdio.h>
#include <stdbool.h>

int main()
{
    //? Solid Rectangle / Square
    // int r;
    // printf("Enter number of rows: ");
    // scanf("%d", &r);

    // for (int i = 1; i <= r; i++)
    // { //? No of row
    //     for (int j = 1; j <= r; j++)
    //     { //? No of column or the character which is to be print
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // //? 2. Number Square
    // int r;
    // printf("Enter number of rows: ");
    // scanf("%d", &r);

    // for (int i = 1; i <= r; i++)
    // { //. No of row
    //     for (int j = 1; j <= r; j++)
    //     { //.No of column or the character which is to be print
    //         printf("%d",j);
    //     }
    //     printf("\n");
    // }
    //? 3. Star Triangle (Right Angled)
    // int r;
    // printf("Enter number of rows: ");
    // scanf("%d", &r);

    // for (int i = 1; i <= r; i++)
    // {
    //     for (int j = 1; j <=i; j++)
    //     {
    //         // printf("%d",j);
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    //? 3. Star Triangle (Right Angled) Hz inverted
    // int r;
    // printf("Enter number of rows: ");
    // scanf("%d", &r);

    // for (int i = 1; i <= r; i++)
    // {
    //     for (int j = 1; j <=r + 1 - i; j++)
    //     {
    //         // printf("%d",j); //# for number
    //         printf("*"); //# for star
    //     }
    //     printf("\n");
    // }

    //? 6. Odd Number Triangle
    // int r;
    // printf("Enter number of rows: ");
    // scanf("%d", &r);

    // for (int i = 1; i <= r; i++)
    // {
    //     int a = 1 ;
    //     for (int j = 1; j <=i; j++)
    //     {
    //         // printf("%d",j); //# for number
    //         printf("%d",a);
    //         a +=2 ; // a = a+2
    //     }
    //     printf("\n");
    // }
    // return 0;
    //? odd num triangle
    // int r;
    // printf("Enter number of rows: ");
    // scanf("%d", &r);

    // for (int i = 1; i <= r; i++)
    // {
    //     int a = 1 ;
    //     for (int j = 1; j <=i; j++)
    //     {
    //         // printf("%d",j); //# for number
    //         printf("%d",a);
    //         a +=2 ; // a = a+2
    //     }
    //     printf("\n");
    // }
    //? 7. Alphabet Square
    // int r;
    // printf("Enter number of rows: ");
    // scanf("%d", &r);

    // for (int i = 1; i <= r; i++)
    // {
    //     int a = 1 ;
    //     for (int j = 1; j <=r; j++)
    //     {
    //        int d = a + 64 ;
    //         char ch = (char)d;
    //         printf("%c ", ch );
    //         a++;
    //     }
    //     printf("\n");
    // }
    //? Star Plus (+)
    // int r;
    // printf("Enter number of rows: ");
    // scanf("%d", &r);

    // for (int i = 1; i <= r; i++)
    // {
    //     for (int j = 1; j <= r; j++)
    //     {
    //         if (i == (r / 2) + 1 || j == (r / 2) + 1)
    //             printf("*");
    //             else{
    //                 printf(" ");
    //             }
    //     };
    //     printf("\n");
    // }
    //? Floyd’s Triangle
    // int r;
    // printf("Enter number of rows: ");
    // scanf("%d", &r);
    // int a = 1;
    // for (int i = 1; i <= r; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%d ", a);
    //         a++;
    //     };
    //     printf("\n");
    // }
    //? 11. Binary Triangle (0 and 1 Triangle)
    // int r;
    // printf("Enter number of rows: ");
    // scanf("%d", &r);
    // int a = 1;
    // for (int i = 1; i <= r; i++)
    // {
    //     for ( int j = 1; j <= i; j++)
    //     {
    //         int d = i+j ;
    //         if( d%2==0){
    //             printf("%d", 1);
    //         }else{
    //             printf("%d",0);
    //         }
    //     }
    //     printf("\n");
    // }
    // ? 11. Binary Triangle (0 and 1 Triangle)
    // int r;
    // printf("Enter number of rows: ");
    // scanf("%d", &r);
    // int a = 1;
    // for (int i = 1; i <= r; i++)
    // {
    //     for (int j = 1; j <= r - i; j++) //..for print spaces
    //     {
    //        printf(" ");
    //     }
    //     for (int k = 1; k <= i ; k++) //.. for print stars
    //     {
    //        printf("*");
    //     }
    //     printf("\n");
    // }
    //? Star Pyramid
    // int r;
    // printf("Enter number of rows: ");
    // scanf("%d", &r);
    // int a = 1;
    // for (int i = 1; i <= r; i++)
    // {
    //     for (int j = 1; j <= r - i; j++) //..for print spaces
    //     {
    //        printf(" ");
    //     }
    //     for (int k = 1; k <= i ; k++) //.. for print stars
    //     {
    //        printf("*");
    //     }
    //     printf("\n");
    // }
    //? Star Pyramid
    int r;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    int a = 1;

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= r - i; j++) //..for print spaces
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) //.. for print stars
        {
            int d = k + 64;
            char ch = (char)d;
            printf("%c", ch);
                }

        printf("\n");
    }

    return 0;
}