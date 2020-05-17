//
//  main.cpp
//  suite_Syracuse
//
//  Created by Thomas JAULGEY on 05/09/2019.
//  Copyright © 2019 Thomas JAULGEY. All rights reserved.
//
#include "fonction.h"
#include <iostream>
using namespace std;

int main() {
    int terme0, i;
    cout<<"Saisir le premier terme de la suite (u0) : ";
    cin>>terme0;
    
    i = suite_Syracuse(terme0);
    affiche(terme0, i);
    return 0;
}
