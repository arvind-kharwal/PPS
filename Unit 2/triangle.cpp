 /*Write a program to check whether a triangle is 
 valid or not, when the three angles of the
 triangle are entered through the keyboard.
 A triangle is valid if the sum of all the three angles
 is equal to 180 degrees. 
 == comparison operator
 = assignment operator
 a = 10;
 a == 10
 */
 #include<stdio.h>
 int main()
 {
     int a1,a2,a3,sum;
     printf("Enter the three angles:");
     scanf("%d%d%d",&a1,&a2,&a3);
     sum = a1+a2+a3;
     if(sum==180)
     {
        printf("Triangle is Valid");
     }
     else
     {
        printf("Triangle is Invalid");
     }
     return(0);
 }
