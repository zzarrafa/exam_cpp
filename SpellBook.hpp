

#pragma once


#include <vector>
#include <string>
#include "ASpell.hpp"


class SpellBook 
{
    private:
    std::vector<ASpell*> tab;
    public:
    SpellBook(){}
    ~SpellBook(){
            std::vector<ASpell*>::iterator itb = this->tab.begin();
        std::vector<ASpell*>::iterator ite = this->tab.end();

        while(itb != ite)
        {
            delete (*itb);
            itb++;
        }
        tab.clear();
    }
    SpellBook(SpellBook const &cp);
    SpellBook &operator=(SpellBook const &rh);
    void learnSpell(ASpell* ptr)
    {
        std::vector<ASpell*>::iterator itb = this->tab.begin();
        std::vector<ASpell*>::iterator ite = this->tab.end();

        while(itb != ite)
        {
            if ((*itb)->getName() == ptr->getName())
                return;
            ++itb;    
        }
        this->tab.push_back(ptr->clone());

    }
    void forgetSpell(std::string const &name)
    {
           std::vector<ASpell*>::iterator itb = this->tab.begin();
        std::vector<ASpell*>::iterator ite = this->tab.end();

        while(itb != ite)
        {
            if ((*itb)->getName() == name)
            {
                delete (*itb);
                tab.erase(itb);
                return;
            }
            ++itb;
        }
        return;
    }

ASpell* createSpell(std::string const &name)
{
    std::vector<ASpell*>::iterator itb = this->tab.begin();
        std::vector<ASpell*>::iterator ite = this->tab.end();

        while(itb != ite)
        {
            if ((*itb)->getName() == name)
            {
                return (*itb);
            }
            ++itb;
        }
        return (NULL);
}



};