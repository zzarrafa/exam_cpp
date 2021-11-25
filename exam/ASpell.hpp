#pragma once

#include <iostream>
#include <string>


class ASpell
{

    private:
    std::string name;
    std::string effects

    public:
    ASpell(std::string name, std::string effects)
    ~ASpell();
    ASpell(const ASpell &cp);
    ASpell & operator=(const  ASpell &rh)
    std::string getName() const;
    std::string getEffects() const;
    virtual void *clone( ) =0; 
    void lunch (const ASpell &s);


}

