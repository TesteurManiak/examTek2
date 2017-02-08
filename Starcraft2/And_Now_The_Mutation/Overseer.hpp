//
// Overseer.hpp for overseer in /home/exam/rendu/ex2
// 
// Made by exam user
// Login   <exam@epitech.net>
// 
// Started on  Fri Jan 20 17:27:16 2017 exam user
// Last update Fri Jan 20 17:41:21 2017 exam user
//

#ifndef OVERSEER_HPP_
#define OVERSEER_HPP_

#include <iostream>
#include "AUnit.hpp"

class Overseer : public AUnit
{
public:
  Overseer();
  explicit Overseer(const AUnit& copy);
  ~Overseer();
  Overseer&	operator=(const AUnit& copy);
  void	attack(int x, int y);
  void	move(int x, int y);
};

#endif
