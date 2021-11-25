#pragma once

#include <iostream>
#include <string>
#include "ATarget.hpp"
class ASpell
{

private:
    std::string name;
    std::string effects;

public:
    ASpell(std::string name, std::string effects) ~ASpell();
    ASpell(const ASpell &cp);
    ASpell &operator=(const ASpell &rh);
    std::string &getName() const;
    std::string &getEffects() const;
    virtual ASpell *clone() const = 0;
    void lunch(ATarget const &s) const;
};
