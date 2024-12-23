    #include <stdio.h>  
    void swap(int *, int *);  
    int main()  
    {  
        int a;  
        int b;   

        printf("Enter a:- ");
        scanf("%d", &a);

        printf("Enter b:- ");
        scanf("%d", &b);

        printf("Before swapping the values in main a = %d, b = %d\n",a,b); 
        swap(&a,&b);  
        printf("After swapping values in main a = %d, b = %d\n",a,b); 
    }  

    void swap (int *a, int *b)  
    {  
         *a = *a - *b;

         *b = *a + *b;

         *a = *b - *a;
  
        printf("After swapping values in function a = %d, b = %d\n",*a,*b); 
    }  