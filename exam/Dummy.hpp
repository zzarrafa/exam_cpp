#pragma once

#include <iostrem>
#include <string>
#include "ATarget.hpp"

class Dummy : public ATarget
{
public:
  Dummy();
  ~Dummy();
  virtual ASpell *clone() const