//
// Zergling.cpp for zergling in /home/exam/rendu/ex1
// 
// Made by exam user
// Login   <exam@epitech.net>
// 
// Started on  Fri Jan 20 16:51:06 2017 exam user
// Last update Fri Jan 20 18:05:37 2017 exam user
//

#include "Zergling.hpp"

Zergling::Zergling()
{
  this->setX(0);
  this->setY(0);
  this->setDam(5);
  std::cout << "Creation d'un Zergling" << std::endl;
}

Zergling::Zergling(const AUnit& copy)
{
  this->setX(copy.getX());
  this->setY(copy.getY());
  this->setDam(copy.getDam());
  std::cout << "Creation d'un Zergling" << std::endl;
}

Zergling::~Zergling()
{
  std::cout << "Zergling est mort" << std::endl;
}

Zergling&	Zergling::operator=(const AUnit& copy)
{
  this->setX(copy.getX());
  this->setY(copy.getY());
  this->setDam(copy.getDam());
  return *this;
}

void	Zergling::attack(int x, int y)
{
  this->move(x, y);
  std::cout << "Dommage Zergling : " << this->getDam() << std::endl;
}

void	Zergling::move(int x, int y)
{
  this->setX(x);
  this->setY(y);
  std::cout << "Deplacement en x : " << this->getX() << " y : " << this->getY() << std::endl;
}
