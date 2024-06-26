#ifndef INFIXTOPOSTFIX_HPP
#define INFIXTOPOSTFIX_HPP

#include <queue.hpp>

namespace zhalilov
{
  class InfixToken;
  class PostfixToken;
  void infixToPostfix(Queue< InfixToken > infix, Queue< PostfixToken > &postfix);
  void infixToPostfix(List< InfixToken > infix, List< PostfixToken > &postfix);
}

#endif
