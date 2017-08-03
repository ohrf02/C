#include <stdio.h>
#include <string.h>

void print_first_50_numbers(int n);
int calculate_sum(int n);
int calculate_fibonacci(int n);
void print_array(int arr[], int st, int n);
int calculate_number_of_digits(int n);
int sum_of_digits(int n);
void reverse_string(char str[], int index, int size);

int main() {

    char str[] = "abcdefg";
    printf("%s\n", str);
    reverse_string(str, 0, strlen(str) - 1);
    printf("%s\n", str);
    return 0;
}

void print_first_50_numbers(int n){
    if(n == 50)
        printf("%d\n", 50);
    else{
        printf("%d\n", n);
        print_first_50_numbers(++n);
    }
}


int calculate_sum(int n){
    if(n == 1)
        return 1;

    return calculate_sum(n - 1) + n;

}

/*Returns the fibonacci element of a given index.*/
int calculate_fibonacci(int n){
    if(n <= 2)
        return 1;

    return calculate_fibonacci(n - 1) + calculate_fibonacci(n - 2);

}

/*Prints all of a given array's elements.*/
void print_array(int arr[], int st, int n){
    if(st < n)
    {
        printf("%d: %d # ",st + 1,  arr[st]);
        print_array(arr, st + 1, n);
    }
}

/*Returns the number of the digits of a given number.*/
int calculate_number_of_digits(int n){
    if(n % 10 == 0)
        return 0;
    return calculate_number_of_digits(n / 10) + 1;
}

/*Returns the sum of the digits of a given number. */
int sum_of_digits(int n){
    if(n == 0)
        return 0;
    return sum_of_digits(n / 10) + n % 10;
}

/*Reverses a given string.*/
void reverse_string(char str[], int index, int size){
    char temp = str[size - index];
    str[size - index] = str[index];
    str[index] = temp;

    if(index == size/2)
        return;
    reverse_string(str, index + 1, size);
}