
#pragma once

#include <iostream>
#include <string>
#include "ASpell.hpp"
class Fwoosh : public ASpell
{
public:
  Fwoosh();
  ~Fwoosh();
  virtual ASpell *clone() const;
  // Fwoosh(std::string name, std::string effects);
  // ~Foosh();
  // Fwoosh(const Fwoosh &cp);
  // Fwoosh &operator=(const Fwoosh &rh);
};