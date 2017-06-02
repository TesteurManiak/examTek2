//
// Trie.cpp for trie in /home/exam/rendu/ex0
// 
// Made by exam user
// Login   <exam@epitech.net>
// 
// Started on  Fri Jun  2 14:12:19 2017 exam user
// Last update Fri Jun  2 15:21:16 2017 exam user
//

#include "Trie.hpp"

Trie::Trie()
{
  TrieNode      *node = new TrieNode();

  node->data = '\0';
  node->weight = 0;
  node->children = NULL;
  this->root = node;
}

Trie::Trie(Trie const &cpy)
{
  (void)cpy;
}

Trie::~Trie()
{}

Trie	Trie::operator=(Trie const &cpy)
{
  (void)cpy;
  return *this;
}

std::ostream&	operator<<(std::ostream & os, TrieNode const &obj)
{
  return os << "('" << obj.data << "', " << obj.weight << ")";
}
