#include <stdio.h> 
#include <string.h> 
  
// A function to check if a string str is palindrome 
void isPalindrome(char str[]) 
{ 
    // Start from leftmost and rightmost corners of str 
    int l = 0,flag=0; 
    int h = strlen(str); 
  
    // Keep comparing characters while they are same 
    for(l=0;l<=str[l];l++) 
    { 
        if (str[l] != str[h-l-1]) 
        { 
            flag++;
	    break;
        } 
    } 

    if(flag)
    {
      printf("%s is not palindrome\n", str);
    }else
    {
      printf("%s is palindrome\n", str);
    }
    return 0;
} 
  
// Driver program to test above function 
int main() 
{ 
    isPalindrome("abba"); 
    //isPalindrome("abbccbba"); 
    //isPalindrome("geeks"); 
    return 0; 
}
