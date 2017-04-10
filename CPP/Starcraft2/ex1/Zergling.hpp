//
// Zergling.hpp for zergling in /home/exam/rendu/ex1
// 
// Made by exam user
// Login   <exam@epitech.net>
// 
// Started on  Fri Jan 20 16:50:18 2017 exam user
// Last update Fri Jan 20 17:03:01 2017 exam user
//

#ifndef ZERGLING_HPP_
#define ZERGLING_HPP_

#include <iostream>
#include "AUnit.hpp"

class Zergling : public AUnit
{
public:
  Zergling();
  explicit Zergling(const AUnit& copy);
  ~Zergling();
  Zergling&	operator=(const AUnit& copy);
  void	attack(int x, int y);
  void	move(int x, int y);
};

#endif
