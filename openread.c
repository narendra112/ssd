#include<stdio.h>
   #include<stdlib.h>
   void main()
   {
           FILE *f1;
           char c;
           printf("Data INPUT\n");
           f1=fopen("/home/narendra/Desktop/cmake_install.cmake","w");\
           while((c=getchar())!=EOF)
           putc(c,f1);
         fclose(f1);
          printf("Data output\n");
        f1=fopen("home/narendra/Desktop/cmake_install.cmake","r");
         while((c=getc(f1))!=EOF)
          printf("%c",c);
       fclose(f1);
  }

