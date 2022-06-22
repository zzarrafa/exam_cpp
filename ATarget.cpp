#include "ATarget.hpp"

void ATarget::getHitBySpell(ASpell const &ref) const
{
    std::cout << type << " has been " + ref.getEffects() + "!" << std::endl;
}