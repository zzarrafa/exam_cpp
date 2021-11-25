
#include "ATarget.hpp"
ATarget::ATarget()
{
}
ATarget::~ATarget() {}
ATarget::ATarget(std::string type) : type(type)
{
}

ATarget::ATarget(const ATarget &cp) : type(cp.type) {}

ATarget &ATarget::operator=(const ATarget &rs)
{
  this->type = rs.type;
  return *this;
}

std::string const &ATarget::getType() const
{
  return this->type;
}

void ATarget::getHitBySpell(ASpell const &str)
{
  std::cout << this->type << " has been " << str.getEffects() << std::endl;
}