//
// Mutation.cpp for mutation in /home/exam/rendu/ex2
// 
// Made by exam user
// Login   <exam@epitech.net>
// 
// Started on  Fri Jan 20 17:50:43 2017 exam user
// Last update Fri Jan 20 18:15:35 2017 exam user
//

#include "Mutation.hpp"
#include "Overlord.hpp"
#include "Zergling.hpp"
#include "Baneling.hpp"
#include "Overseer.hpp"

AUnit*	Mutation::muter(AUnit* obj)
{
  AUnit* mutant = NULL;
  if (dynamic_cast<Overlord*>(obj))
    {
      mutant = new Overseer();
      mutant->setX(obj->getX());
      mutant->setY(obj->getY());
      delete obj;
    }
  else if (dynamic_cast<Zergling*>(obj))
    {
      mutant = new Baneling();
      mutant->setX(obj->getX());
      mutant->setY(obj->getY());
      delete obj;
    }
  return mutant;
}
