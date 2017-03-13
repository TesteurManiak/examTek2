//
// Overseer.cpp for overseer in /home/exam/rendu/ex2
// 
// Made by exam user
// Login   <exam@epitech.net>
// 
// Started on  Fri Jan 20 17:28:59 2017 exam user
// Last update Fri Jan 20 17:40:21 2017 exam user
//

#include "Overseer.hpp"

Overseer::Overseer()
{
  this->setX(0);
  this->setY(0);
  this->setDam(0);
  std::cout << "Mutation d'un Overlord en Overseer" << std::endl;
}

Overseer::Overseer(const AUnit& copy)
{
  this->setX(copy.getX());
  this->setY(copy.getY());
  this->setDam(copy.getDam());
  std::cout << "Mutation d'un Overlord en Overseer" << std::endl;
}

Overseer::~Overseer()
{
  std::cout << "Destruction d'un Overseer" << std::endl;
}

Overseer&	Overseer::operator=(const AUnit& copy)
{
  this->setX(copy.getX());
  this->setY(copy.getY());
  this->setDam(copy.getDam());
  return *this;
}

void	Overseer::attack(int x, int y)
{
  this->move(x, y);
  std::cout << "Un Overseer ne peut pas attaquer mais detecte" << std::endl;
}

void	Overseer::move(int x, int y)
{
  this->setX(x);
  this->setY(y);
  std::cout << "Deplacement en x : " << this->getX() << " y : " << this->getY() << std::endl;
}
