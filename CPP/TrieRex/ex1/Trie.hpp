//
// Trie.hpp for trie in /home/exam/rendu/ex0
// 
// Made by exam user
// Login   <exam@epitech.net>
// 
// Started on  Fri Jun  2 14:02:39 2017 exam user
// Last update Fri Jun  2 16:23:53 2017 exam user
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
  void	addWord(std::string const& word);
  void	removeWord(std::string const& word);

  TrieNode	*node;
};

std::ostream&	operator<<(std::ostream& os, TrieNode const &obj);
void	operator<<(Trie &obj, std::string const& word);
void	operator>>(Trie &obj, std::string const& word);

#endif
