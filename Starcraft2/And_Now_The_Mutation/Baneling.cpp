//
// Baneling.cpp for baneling in /home/exam/rendu/ex2
// 
// Made by exam user
// Login   <exam@epitech.net>
// 
// Started on  Fri Jan 20 17:16:45 2017 exam user
// Last update Fri Jan 20 17:25:49 2017 exam user
//

#include "Baneling.hpp"

Baneling::Baneling()
{
  this->setX(0);
  this->setY(0);
  this->setDam(15);
  std::cout << "Mutation d'un Zergling en Baneling" << std::endl;
}

Baneling::Baneling(const AUnit& copy)
{
  this->setX(copy.getX());
  this->setY(copy.getY());
  this->setDam(copy.getDam());
  std::cout << "Mutation d'un Zergling en Baneling" << std::endl;
}

Baneling::~Baneling()
{
  std::cout << "Baneling a explose" << std::endl;
}

Baneling&	Baneling::operator=(const AUnit& copy)
{
  this->setX(copy.getX());
  this->setY(copy.getY());
  this->setDam(copy.getDam());
  return *this;
}

void	Baneling::attack(int x, int y)
{
  this->move(x, y);
  std::cout << "Dommage Baneling : " << this->getDam() << std::endl;
}

void	Baneling::move(int x, int y)
{
  this->setX(x);
  this->setY(y);
  std::cout << "Deplacement en x : " << this->getX() << " y : " << this->getY() << std::endl;
}
