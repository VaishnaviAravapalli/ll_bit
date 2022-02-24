#include <stdio.h>  
#define N 10
int main()  
{  
    //Initialize string   
    char str[] = "abcabcddd";   
    
    //Array fr will store frequencies of element  
     int fr[N];
    int visited = -1;  
      
    for(int i = 0; i < 10; i++){  
        int count = 1;  
        for(int j = i+1; j < 10; j++){  
            if(str[i] == str[j]){  
                count++;  
                //To avoid counting same element again  
                fr[j] = visited;  
            }  
        }  
        if(fr[i] != visited)  
            fr[i] = count;  
    }  
      
    //Displays the frequency of each element present in array  
    for(int i = 0; i < N; i++){  
        if(fr[i] != visited){  
            printf( "%c", str[i]);  
            printf(" - ");  
            printf(" %d\n", fr[i]);  
        }  
    }  
    return 0;  
} 

