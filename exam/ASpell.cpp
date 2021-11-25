


#include "ASpell.hpp"


ASpell::ASpell(std::string name, std::string effects) : name(name) , efffects(effects)
{

}

ASpell::~ASpell() {}

ASpell::ASpell(const ASpell &cp) : name(cp.name) , effects(cp.effects)
{

}

ASpell & ASpell::operator=(const ASpell &rh)
{
    this->name = rh.name;
    this->effects = rh.effect;

    return *this;
}

std::string ASpell::getName() const
{
    return this->name;
}

std::string ASpell::getEffects() const
{
    return this->effects;
}

void ASpell::lunch (const ATarget &s)
{
    ATarget::getHitBySpell(s);
}
