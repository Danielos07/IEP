//
//  Papagal.hpp
//  
//
//  Created by Moica Dan on 10/12/2020.
//

#ifndef Papagal_hpp
#define Papagal_hpp

#include <stdio.h>

#endif /* Papagal_hpp */
#include "Pasare.hpp"

class Papagal: public Pasare{
    private:
        std::vector<std::string> cuvinte;
    public:
        Papagal();
        void adaugaCuvant(const std::string& cuvant);
        void afiseazaCuvinte();
        void zboara();
        std::string sunet();
}; 
