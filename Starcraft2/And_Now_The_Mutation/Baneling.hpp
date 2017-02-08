//
// Baneling.hpp for baneling in /home/exam/rendu/ex2
// 
// Made by exam user
// Login   <exam@epitech.net>
// 
// Started on  Fri Jan 20 17:17:01 2017 exam user
// Last update Fri Jan 20 17:32:31 2017 exam user
//

#ifndef BANELING_HPP_
#define BANELING_HPP_

#include <iostream>
#include "AUnit.hpp"

class Baneling : public AUnit
{
public:
  Baneling();
  explicit Baneling(const AUnit& copy);
  ~Baneling();
  Baneling&	operator=(const AUnit& copy);
  void	attack(int x, int y);
  void	move(int x, int y);
};

#endif
