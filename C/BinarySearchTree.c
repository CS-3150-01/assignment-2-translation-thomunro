#include <stdio.h>

typedef struct Node{
    int data, left, right;
} NODE;

typedef struct binarySearchTree{
    NODE root;
} binarySearchTree;

int factorial(int num){
    int fact = 1;
    if(num == 0) {   
            return 1;    
    }else {    
        while(num > 1) {    
            fact = fact * num;    
            num--;    
        }    
        return fact;    
    }
}

int numBinarySearchTrees(int key) {    
        int catalanNumber = factorial(2 * key)/(factorial(key + 1) * factorial(key));    
        return catalanNumber;    
    }

int main() {
    binarySearchTree bt;
    bt.root.data = 5;

    printf("Number of possible Binary Search Trees with given key: %d", numBinarySearchTrees(bt.root.data));

    return 0;
}