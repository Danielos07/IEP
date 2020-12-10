//
//  Strut.hpp
//  
//
//  Created by Moica Dan on 10/12/2020.
//

#ifndef Strut_hpp
#define Strut_hpp

#include <stdio.h>

#endif /* Strut_hpp */
#include "Pasare.hpp"
#include "Gaina.hpp"

#ifndef STRUT_HPP
#define STRUT_HPP

class Strut: public Pasare{
    private:
        static Strut *strut;
        int gaini;
        Strut();
        Strut(Strut const&);
        void operator=(Strut const&);

    public:
        static Strut * creareStrut();
        Strut * operator+ (const Gaina& g);
        int getGaini();
        void zboara();
        std::string sunet();

};

