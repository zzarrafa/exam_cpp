
#pragma once
#include <string>
#include <iostream>



class ATarget;


class ASpell
{
    protected:
    std::string name;
    std::string effects;

    public:
    ASpell(std::string name, std::string effects) : name(name) , effects(effects){}
    virtual ~ASpell(){}
    ASpell(ASpell const &cp) : name(cp.name) , effects(cp.effects)
    {

    }
    ASpell &operator=(ASpell const &rh)
    {
        this->name = rh.name;
        this->effects = rh.effects;
        return (*this);
    }
    std::string getName() const {return name;}
    std::string getEffects() const {return effects;}
    virtual ASpell *clone() const =0;
    void launch(ATarget const &target) const;

};
#include "ATarget.hpp"