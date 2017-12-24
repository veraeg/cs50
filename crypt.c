// Implement a program that cracks passwords. 
// Assume that each password has been hashed with C’s DES-based (not MD5-based) crypt function.

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <unistd.h>
#include <crypt.h>

int main (int argc, string argv[])
{
    // The user should provide a hash to be cracked
 if (argc !=2){
     printf("Please provide 2 arguments");
 }

 char alphabet[] = {'A','B','C','D','E','F','G','H','I','K','L','M','N','O','P','Q','R','S','T','V','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
 string salt = "50";

 for (int i =0;i<52; i++)
 {
     char cracked[5];
     cracked[0]= alphabet[i];
     cracked[1] = '\0';
     if(!strcmp(crypt(cracked, salt), argv[1])){
         printf("The password is %s\n", cracked);
     }
     for(int j=0; j<52;j++)
     {
         cracked[0]=alphabet[i];
         cracked[1]=alphabet[j];
         cracked[2]= '\0';
         if(!strcmp(crypt(cracked,salt), cracked))
         {
             printf("The password is %s\n", cracked);
         }
         for (int k=0; k <52; k++)
         {
                 cracked[0]=alphabet[i];
                 cracked[1]=alphabet[j];
                 cracked[2]=alphabet[k];
                 cracked[3]= '\0';
                 if(!strcmp(crypt(cracked, salt), argv[1]))
                 {
                     printf("The password is %s\n", cracked);
                 }
                 for(int l=0; l<52; l++)
                 {
                 cracked[0]=alphabet[i];
                 cracked[1]=alphabet[j];
                 cracked[2]=alphabet[k];
                 cracked[3]= alphabet[l];
                 cracked[4]='\0';
                 if(!strcmp(crypt(cracked,salt), argv[1]))
                 {
                     printf("The password is %s\n", cracked);
                 }

                 }

         }
     }

}
}
