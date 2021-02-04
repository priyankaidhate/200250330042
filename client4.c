#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
  
void printRandoms(int lower_limit, int upper_limit,  
                             int count) 
{ 
    int i; 
    for (i = 0; i < count; i++) { 
        int n = (rand() % 
           (upper_limit - lower_limit + 1)) + lower_limit; 
        printf("%d is the temperature", n); 
    } 
} 
  
// Driver code 
int main() 
{ 
    int gyro_Rocket(lower,upper);
    int lower_limit = 0, upper_limit = 360, count = 1; 
  
    // Use current time as  
    // seed for random generator 
    srand(time(0)); 
  
    printRandoms(lower_limit, upper_limit, count); 
  
    return 0; 
} 