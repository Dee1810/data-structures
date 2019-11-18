#include <stdio.h>
#include <stdlib.h> 
#include<string.h>
int top=-1;

char * pop(char s[][25]) 
{ 
    if (top!=-1) 
        return s[top--]; 
    
} 
void push( char op[],char s[][25]) 
{ 
   // s[++top] = op; 
  strcpy(s[++top],op);
} 
  
  

int isOperand(char ch) 
{ 
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'); 
} 
  

  
// Convert postfix to Prefix expression 
void postToPre(char post_exp[],char pre_exp[]) 
{ 
    char s[25][25];
    int length = strlen(post_exp); 
    char temp[2];
  char *op1,*op2;
    // reading from right to left 
    for (int i = 0; i < length; i++) { 
   
   temp[0]=post_exp[i];
   temp[1]='\0';
        // check if symbol is operator 
        switch(post_exp[i])
        {
          case '+':
          case '-':
          case '*':
          case '/':
          case '^':op2=pop(s);
                    op1=pop(s);
                     strcpy(pre_exp,temp);
      strcat(pre_exp,op1);
      strcat(pre_exp,op2);
      push(pre_exp,s);
      break;
           default:push(temp,s);  
           
           }
     
      }       
            
  
        
    } 
  
    
 
 
int main() 
{ 
    
     char post_exp[25],pre_exp[25];
     scanf("%s",post_exp);
     postToPre(post_exp,pre_exp);
      printf("\nPrefix :%s ",pre_exp);
    return 0; 
} 
