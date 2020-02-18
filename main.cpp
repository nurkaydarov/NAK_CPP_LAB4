#include <cstdlib>
#include <stdio.h>
#include <math.h>
using namespace std;

//const unsigned int ARR1 = 4; // Это константа размера массива
//const unsigned int ARR2 = 4;

int i, j;
int maxElement = 0;
bool isTrue = false;

int main() {
    int arr[4][4] = {
        {26, 20, 13, 14}, //0
        {4, 666, 20, 9}, //1
        {7, 9, 888, 4}, //2
        {777, 8, 999, 666}//3
    };

    printf("Исходный массив 4х4\n");

    for (i = 0; i < 4; i++) //Цикл вывода исходного массива
    {
        for (j = 0; j < 4; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }


    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {

            if (arr[i][j] > maxElement) // Условие нахождение максимального элемента
            {
                maxElement = arr[i][j]; // Присваевам максимальный элемент массива в переменную maxElement
            }


        }
        printf("\n");
    }
    printf("Максимальный элемент = ");
    printf("%d\n", maxElement); //Для проверки выводим максимальный элемент

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (i == j) { // Проверка в главной диагонали
                if (arr[i][j] == maxElement) // Если максимальный элемент найден в главной диагонали то IsTrue = True
                {
                    isTrue = true;
                }

            }
        }
        printf("\n");
    }

    

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (i == j) { //Прохождение по главной диагонали
                if (isTrue == true) { //Если isTrue == True то присваеваем массив
                    arr[i][j] = maxElement; //то присваеваем массиву arr[i][j] =  maxElement
                }
            } 
            printf("%d\t", arr[i][j]); // Вывод
        }
        printf("\n");
    }
    
    printf("\n");
    
    if (!isTrue){
        printf("Max Element в главной диагонали не найден");
    }





}