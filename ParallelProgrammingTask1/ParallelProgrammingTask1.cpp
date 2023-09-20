// ParallelProgrammingTask1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <iostream>

int main()
{
    FILE* original_file;
    FILE* new_file;
    const int size = 1900;
    unsigned char f[1900];
    int x = 1;

    original_file = fopen("C://Users//707//Downloads//binary.jpg", "rb");
    fread(f, sizeof(f), 1, original_file);

    /*for (int i = 0; i < size; i++) {
        printf("%u ", f[i]);
    }
    std::cout << "\n\n\n";*/

    for (int i = 0; i < size; i++) {
        f[i] += (i * x) & 255;
    }

    new_file = fopen("C://Users//707//Downloads//new_binary.jpg", "wb");
    fwrite(f, sizeof(f), 1, new_file);

    fclose(original_file);
    fclose(new_file);
}