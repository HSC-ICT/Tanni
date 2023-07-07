#include<cs50.h>
#include<stdio.h>
#include<string.h>

int main(void){

    string myName;
    int age;

    myName = get_string("Enter your name: ");
    age = get_int("Enter your age: ");

    printf("Hi, I am %s. I am %d years old.\n", myName, age);

}