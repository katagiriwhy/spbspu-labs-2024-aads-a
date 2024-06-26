#include "input_output_data.hpp"
#include <stdexcept>
#include "delimeters.hpp"

namestnikov::HashTable< std::string, std::string > namestnikov::inputDict(std::ifstream & in)
{
  std::string key = "";
  std::string value = "";
  HashTable< std::string, std::string > res;
  using delC = DelimeterChar;
  while (in >> key >> delC{'-'} >> value)
  {
    res.insert(key, value);
  }
  if (!in.eof())
  {
    throw std::invalid_argument("Wrong file input");
  }
  return res;
}

void namestnikov::outputDict(std::ofstream & out, const HashTable< std::string, std::string > & dict)
{
  for (const auto & pair: dict)
  {
    out << pair.first << " - " << pair.second << "\n";
  }
}
