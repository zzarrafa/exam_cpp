#pragma once

#include <string>
#include <iostream>



class ASpell;
class ATarget
{
    protected:
    std::string type;
  

    public:
    ATarget(std::string type) : type(type) {}
    virtual ~ATarget(){}
    ATarget(ATarget const &cp) : type(cp.type){}
    
    ATarget &operator=(ATarget const &rh)
    {
        this->type = rh.type;
    
        return (*this);
    }
    std::string const &getType() const {return type;}
    virtual ATarget *clone() const =0;
    void getHitBySpell(ASpell const &ref) const;

};
#include "ASpell.hpp"