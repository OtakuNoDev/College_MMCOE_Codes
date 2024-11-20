#include <stdio.h>

int isPalindrome(int num)
{
    int original_num = num;
    int reversed_num = 0;

    while (num > 0) 
    {
        int digit = num % 10;
        reversed_num = reversed_num * 10 + digit;
        num /= 10;
    }

    return original_num == reversed_num;
}

int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isPalindrome(num)) 
    {
        printf("%d is a palindrome.\n", num);
    } 
    else 
    {
        printf("%d is not a palindrome.\n", num);
    }

    return 0; 
}

/* 
OUTPUT:-
Enter an integer: 121
121 is a palindrome.
