//
//  Gaina.hpp
//  
//
//  Created by Moica Dan on 10/12/2020.
//

#ifndef Gaina_hpp
#define Gaina_hpp

#include <stdio.h>

#endif /* Gaina_hpp */
#include "Pasare.hpp"


class Gaina: public Pasare{
    private:
        static int numar_gaini;
        Gaina();
    public:
        ~Gaina();
        static Gaina* creareGaina();
        static int getGaini();
        static void decrementare();
        void zboara();
        std::string sunet();
        void vanzare(Pasare& p);
};
