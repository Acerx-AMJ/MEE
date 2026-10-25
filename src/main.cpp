#include "lexer.hpp"
#include "parser.hpp"
#include "evaluator.hpp"

int main()
{
   std::cout << "Terminal calculator with a mathematical expression evaluator." << std::endl;
   Catcher catcher;

   while (true)
   {
      // Get input from the user
      std::cout << "> ";
      std::string command;
      std::getline(std::cin, command);

      // Quit the program
      if (command == "quit"s || command == "exit"s)
      {
         std::cout << "Exiting..." << std::endl;
         break;
      }

      // Tokenize the input
      Lexer lexer (catcher, command);
      auto& tokens = lexer.tokenize();

      if (catcher.display())
         continue;

      // Parse the tokens
      Parser parser (catcher, tokens);
      auto& program = parser.parse();

      if (catcher.display())
         continue;
      
      // Evaluate the result
      Evaluator evaluator (catcher, program);
      long double result = evaluator.evaluate();

      if (catcher.display())
         continue;

      // Print out the result if everything was successful
      std::cout << "Result: " << result << std::endl;
   }
}