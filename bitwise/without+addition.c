   #include<stdio.h>
   int main()
    {
         int a, b;
         printf("Enter the value of a & b\n");
         scanf("%d%d", &a, &b);
         while(a)
         {
              b++;
              a--;
          }
          printf("The sum of a & b is %d\n",b);
    }
