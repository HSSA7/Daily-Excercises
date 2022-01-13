#include<stdio.h>
#include<string.h>

// we need to create a function which parses a string 
void parser(char* string)
{
   int in=0;
   int index=0;
   for(int i=0;i<strlen(string);i++)
   {
       if(string[i]=='<')
       {
           in=1;
           
       }
       else if(string[i]=='>')
       {
           in=0;
         
       }
       
       if(in==0)
       {
           string[index]=string[i];
           index++;
       }
   }
   string[index] ='\0';

 
       while(string[0] ==' ')
{
       
 for(int i=0;i<strlen(string);i++)
   {
        string[i] = string[i+1];
   }
   while (string[strlen(string)-1]==' ')
   {
      string[strlen(string)-1] = '\0';
   }
}

}
int main()
{

    char string[]="<h1>   This is the heading </h1>";
    parser(string);
    printf("The parsed string is ~~%s~~",string);

     return 0;
}


/*
Input:-
<h1> This is a heading </h1> 

Output:- 
This is a heading
*/