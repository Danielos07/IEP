//
//  Strut.cpp
//  
//
//  Created by Moica Dan on 10/12/2020.
//


#include "Strut.hpp"

Strut::Strut():gaini(0) {}
Strut * Strut::strut = nullptr;

Strut * Strut::creareStrut(){
    if (! strut){
            strut = new Strut;
    }
    return strut;
}

void Strut::zboara(){
    std::cout << "Strutul zboara \n";
}
std::string Strut::sunet(){
    std::cout << "Strutul produce anumite sunete \n";
    return "Strut";
}
int Strut::getGaini(){
    return gaini;
}
Strut * Strut::operator +(const Gaina &g){
    Strut::creareStrut()->gaini++;
    Gaina::decrementare();
    return Strut::creareStrut();


}
