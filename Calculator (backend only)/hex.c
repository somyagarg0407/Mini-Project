#include <stdio.h>
int dectoOct(int n);

int main(){
  char fName[100];
  printf("Enter First Name:");
  scanf("%s",fName);
  int aName[100];
    for(int i =0;fName[i] != '\0';i++){
     aName[i]=fName[i];
    }
    printf("The ASCII form is:");
        for(int i =0;fName[i] != '\0';i++){
     printf("%d ",aName[i]);
    }
    printf("\nIn Binary\n");
    for(int i = 0;fName[i] != '\0';i++){
      aName[i] = dectoOct(aName[i]);
    }
    for(int i =0;fName[i] != '\0';i++){
     printf("%d ",aName[i]);
    }
   
  return 0;
}

void dectohex(int dec) { 
    char hex[50]; 
    int rem; 
    int i = 0; 
    while (dec != 0) { 
        rem = dec % 16; 
        if (rem < 10) 
            hex[i] = rem + '0'; 
        else 
            hex[i] = rem - 10 + 'A'; 
        dec = dec / 16; 
        i++; 
    } 
    for (int j = i - 1; j >= 0; j--) { 
        printf("%c", hex[j]); 
    } 
    printf("\n"); 
}