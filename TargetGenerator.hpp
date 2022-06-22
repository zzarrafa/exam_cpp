
#pragma once
#include <string>
#include <vector>
#include <iostream>

#include "ATarget.hpp"
class TargetGenerator
{
    private:
    std::vector<ATarget*> tab;
    public:
    TargetGenerator(){}
    ~TargetGenerator(){
         std::vector<ATarget*>::iterator itb = this->tab.begin();
        std::vector<ATarget*>::iterator ite = this->tab.end();

         while(itb != ite)
        {
            delete (*itb);
            ++itb;
        }
        tab.clear();
    }
    TargetGenerator(TargetGenerator const &cp);
    TargetGenerator &operator=(TargetGenerator const &rh);
    void learnTargetType(ATarget* target)
    {
        std::vector<ATarget*>::iterator itb = this->tab.begin();
        std::vector<ATarget*>::iterator ite = this->tab.end();

         while(itb != ite)
        {
            if ((*itb)->getType() == target->getType())
                return;
            ++itb;    
        }
        this->tab.push_back(target->clone());
}
void forgetTargetType(std::string const &type)
{
    std::vector<ATarget*>::iterator itb = this->tab.begin();
        std::vector<ATarget*>::iterator ite = this->tab.end();

        while(itb != ite)
        {
            if ((*itb)->getType() == type)
            {
                delete (*itb);
                tab.erase(itb);
                return;
            }
            ++itb;
        }
        return;
}
ATarget* createTarget(std::string const &type)
{
    std::vector<ATarget*>::iterator itb = this->tab.begin();
        std::vector<ATarget*>::iterator ite = this->tab.end();

        while(itb != ite)
        {
            if ((*itb)->getType() == type)
            {
                return (*itb);
            }
            ++itb;
        }
        return (NULL);
}
};