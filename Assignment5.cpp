// Author: Jacob Christiansen
// Recitation: 104 – Vipra Gupta
//
// Assignment 5

#include <iostream>
using namespace std;

//sumArray simply goes through every value in array, and adds them to a
//variable sum. By the end, each value has been added to sum, and the total is returned
float sumArray(float array[], int size){
    float sum=0.0;
    for(int i=0; i<size; i++){
        sum += array[i];
    }
    return sum;
}

//this search function is incrementing through the array with variable i in a for loop
//and checking at each if it is equal to the given value. If it is found, the spot in the
//array is return, if it is not found, the function returns -1.
int search(int array[], int size, int target){
    for(int i = 0; i<size; i++){
        if(target==array[i]){
           return i;
        }
    }
    return -1;
}


//This function increments through the a and b array, and adds the result of (a-b)^2
//to a variable. So at every place in the arrays, the (a-b)^2 is added to the total sum,
//which is then returned.
float calculateDifference(int a[], int b[], int size){
    float diff = 0;
    for(int i=0; i<size; i++){
        diff += ( (a[i]-b[i]) * (a[i]-b[i]) );
    }
    return diff;
}

void sortArray(float unsortedArr[], int size){
    for(int i=0; i<=size; i++){
        for(int i=0; i<size-1; i++){
            if(unsortedArr[i]>unsortedArr[i+1]){
                float large = unsortedArr[i];
                float small = unsortedArr[i+1];
                unsortedArr[i] = small;
                unsortedArr[i+1] = large;
            }
        }
    }
}


//This function simply copies each value in an array, to another array, using
//i as an array placement incrementor.
void copyArray(float source[], int size, float dest[]){
    for(int i=0; i<size; i++){
        dest[i] = source[i];
    }
}


//Convert checks if at i spot in the rating array is equal to any of the given values
//and then sets the given statement corresponding to that value into a string array
//at the same spot i.
void convert(int rating[], string text[], int size){
    for(int i=0; i<size; i++){
        if(rating[i]==-5){
            text[i]="Terrible";
        }
        else if(rating[i]==-3){
            text[i]="Disliked";
        }
        else if(rating[i]==0){
            text[i]="Not-read";
        }
        else if(rating[i]==1){
            text[i]="Average";
        }
        else if(rating[i]==3){
            text[i]="Good";
        }
        else if(rating[i]==5){
            text[i]="Excellent";
        }
        else{
            text[i]="INVALID";
        }
    }
}

//floatMedian takes an array, duplicates it so it doesn't modify the original, then I used
//my sortArray function, then fnd the middle spot of the array with size/2, and returned
//that value. However, this will only work when it is and odd # of array spots, so you have to find the average
//the middle two when you have an even # of array spots.
float findMedian(float arr[], int size){
    float newArr[size];
    for(int i=0; i<size; i++){
        newArr[i]=arr[i];
    }
    sortArray(newArr, size);
    float median = newArr[size/2];
    if(size%2 == 0){
        float temp = newArr[(size/2)-1];
        median = (median+temp)/2;
        }
    return median;
}
