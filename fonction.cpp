//
//  fonction.cpp
//  suite_Syracuse
//
//  Created by Thomas JAULGEY on 05/09/2019.
//  Copyright © 2019 Thomas JAULGEY. All rights reserved.
//
#include "fonction.h"
#include <stdio.h>
#include <iostream>
using namespace std;

int suite_Syracuse(int terme0){
    int resultat, incrementation = 0;
    resultat = terme0;
    while(resultat >1){
        if(resultat % 2 == 0){
            resultat /= 2;
        }
        else{
            resultat= resultat*3+1;
        }
        incrementation++;
    }
    return incrementation;
}

void affiche(int terme0, int incrementation){
    cout<<"La suite de Syracuse de premier terme "<<terme0<<" s'est terminee en "<<incrementation<<" iterations. Le "<< incrementation +1<<"eme terme etant egal a 1."<<endl;
}
