/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Admin
 *
 * Created on February 13, 2019, 6:41 PM
 */

#include <cstdlib>
using namespace std;
#include <iostream>
#include "BubbleSortTemplate.h"
#include "BubbleSortIncreasing.h"
#include "BubbleSortDecreasing.h"
#include "IntegerVectorSortable.h"
#include "SortableVector.h"
/*
 * 
 */
int main(int argc, char** argv) {
    IntegerVectorSortable ivs;
    ivs.insertInteger(5);
    ivs.insertInteger(4);
    ivs.insertInteger(6);
   ivs.insertInteger(10);
    cout<<"***************** Before Sorting Integers Decreasing"<<endl;
    ivs.print();
    cout<<"***************** After Sorting Integers Decreasing"<<endl;
    BubbleSortDecreasing bsd;
    bsd.sort(&ivs);
    ivs.print();
    cout<<"***************** After Sorting Integers Increasing"<<endl;
    BubbleSortIncreasing bsi;
    bsi.sort(&ivs);
    ivs.print();
    return 0;
}

