

#pragma once
#include <iostream>
#include <string>
class ASpell;

class ATarget
{
private:
    std::string type;

public:
    ATarget();
    ~ATarget();
    ATarget(std::string type);
    ATarget(const ATarget &cp);
    ATarget &operator=(const ATarget &rh);
    std::string const &getType() const;
    virtual ATarget *clone() = 0;
    void getHitBySpell(ASpell const &str);
}