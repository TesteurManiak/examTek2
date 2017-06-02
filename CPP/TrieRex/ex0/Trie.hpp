//
// Trie.hpp for trie in /home/exam/rendu/ex0
// 
// Made by exam user
// Login   <exam@epitech.net>
// 
// Started on  Fri Jun  2 14:02:39 2017 exam user
// Last update Fri Jun  2 15:20:52 2017 exam user
//

#ifndef TRIE_HPP
# define TRIE_HPP

# include <iostream>

struct	TrieNode
{
  char	data;
  unsigned int	weight;
  TrieNode	**children;
};

class	Trie
{
public:
  Trie();
  Trie(Trie const &cpy);
  virtual ~Trie();
  Trie	operator=(Trie const &obj);
  TrieNode	*root;
};

std::ostream&	operator<<(std::ostream& os, TrieNode const &obj);

#endif
