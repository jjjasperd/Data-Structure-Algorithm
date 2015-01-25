//
//  PrintLots.h
//  printLots
//
//  Created by DuanYujia on 1/25/15.
//  Copyright (c) 2015 DuanYujia. All rights reserved.
//

#ifndef printLots_PrintLots_h
#define printLots_PrintLots_h

#include<iostream>
#include<list>

using namespace std;

template < typename Object>
void printLots(const list<Object> &L , const list <int> &P){
    auto Liter = L.begin();
    typename list<int> ::const_iterator Piter;
    int count = 0;
    for (Piter = P.begin(); Piter != P.end(); ++Piter) {
        while (count != *Piter && Liter != L.end()) {
            ++count;
            ++Liter;
        }
        cout<< *Liter << " ";
    }
}

#endif
