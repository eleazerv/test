#include <stdio.h>

int main( ){
    // // task 1
    int number = 0; 
    printf("enter the number: ") ;
    scanf("%d", &number) ;
    char *resluts = (number % 2 == 0) ? "even" : "odd";
    printf("%d is %s number\n", number, resluts) ;


    // // task 2  
    for ( int i = 5 ; i <15 ; i++){
        if ( i % 3 == 0){
            printf("%d\n", i) ;
        }
    }

    // // task 3 

    for ( int i = 1 ; i <= 10 ; i++){
        int base = 8 ;
       printf("%d x %d = %d\n", i, base, i*base) ;
    }

    // // task 4 
    int a = 0 ; 
    printf("input the number: ") ;
    scanf("%d",&a) ;
    for ( int i = 1 ; i <= 10 ; i++){
       printf("%d x %d = %d\n", i, a, i*a) ;
    }

    // // task 5 

    int x = 10 ; 
    int y = 2 ; 
    int z = 20 ; 

    
    for ( int i = x ; i<=z ; i+=y){
        printf("%d ", i) ;
    }

    return 0 ; 

}