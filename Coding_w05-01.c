#include <stdio.h>

int main() {
    char name = 'D'; //ตัวอักษรตัวแรกของชื่อ
    int age = 18; //อายุ
    double weight = 60.5; //น้ำหนัก

    printf("Student %c is %d years old.\n", name, age); // %c เเสดงชื่อ %d อายุของนักเรียน
    printf("His weighs is %.2f kg.\n", weight);// เเสดงน้ำหนักของนักเรียน

    return 0;
}