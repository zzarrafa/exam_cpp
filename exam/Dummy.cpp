#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy")
{
}
ASpell *Dummy::clone()
{
  return (new Dummy());
}