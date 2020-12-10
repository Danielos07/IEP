//
//  Gaina.cpp
//  
//
//  Created by Moica Dan on 10/12/2020.
//


#include "Gaina.hpp"

Gaina::Gaina(){
    std::cout << "Constructor\n" ;
}
int Gaina::numar_gaini = 0;

Gaina * Gaina::creareGaina(){
            if (numar_gaini < 30){
                numar_gaini++;
                return new Gaina();
            }
            else{
                return nullptr;
                //throw logic_error("Nu se mai pot crea instante");
            }
        
        }

 int Gaina::getGaini(){
    return numar_gaini;
}
        
        
void Gaina::zboara(){
    std::cout << " zboara gaina " << "\n";
}
std::string Gaina::sunet(){
    std::cout << "Gaina cotcodaceste \n";
    return "cotccodac" ;
}
        
void Gaina::vanzare(Pasare& p){
    std::cout << "Gaina s-a vand pe pasare \n";
}
void Gaina::decrementare(){
    numar_gaini--;
}

Gaina::~Gaina(){
    decrementare();
}
        
    
    
