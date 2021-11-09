/*
write a program wchich generates random numbers by user
from 0 - 20, 
but array elements shouldn't have equal numbers
*/

#include <iostream>
#include<ctime>
using namespace std;

int main()
{
srand(time(NULL));

int size;

cout << "Please, enter the size of array " << endl;
cin >> size;

int array[size];

//input random numbers from 0 to 20 and delete equals
for(int i = 0; i < size;){
    
    bool alreadyThere = false;
    int newRandomValue = rand() % 20;
    
    for(int j = 0; j < i; j++){
        
        if(array[j] == newRandomValue){
            alreadyThere = true;
            break;
        }
    }
    
    if(!alreadyThere){
        array[i] = newRandomValue;
        i++;
    }
}

//find the smalest number in array
int theSmallest = array[0];

for(int i = 0; i < size; i++){
    
    if(array[i] < theSmallest){
        theSmallest = array[i];
    }
    
}
cout << "The smallest number in this array is: " << theSmallest << endl;



//find the biggest number in array
int theBiggest = array[0];

for(int i = 0; i < size; i++){
    
    if(array[i] > theBiggest){
        theBiggest = array[i];
    }
    
}
cout << "The biggest number in this array is: " << theBiggest << endl;

    
//output numbers in array
cout << "Array is: ";
for(int i = 0; i < size; i++){
    cout << array[i] << " ";
}



    return 0;
}


