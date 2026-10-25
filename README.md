# MEE
Mathematical expression evaluator - a CLI calculator. This works very similarly to an interpreted programming language but does not include any statements. All functions can be seen in [include/functions.hpp](include/functions.hpp) and all constants can be seen in [include/lexer.hpp](include/lexer.hpp).

## Features:
- Constants: pi, e, phi, gamma and tau
- Functions: sin, cos, tan, sqrt, log, randf, randi and many more
- Operators: +, -, /, *, ^ (exponentiation), ! (factorial), % (percent) and ()

## How it works:
User Input --> Lexer --> Parser --> Evaluator --> Result

1. Program retrieves input from the user.
2. Lexer turns characters into words (tokens)
3. Parser reads the tokens and produces the AST tree
4. Evaluator evaluates the AST tree and produces the final result

## Building
This project only depends on C++17 and can be built like this:
```bash
g++ -std=c++17 -Iinclude src/main.cpp -o mee
```

## Credits
This project was made by Daniel Vishnevsky and is licensed under MIT License. It was made in March of 2025 and published on October 2026 as an effort to make all of my projects open-source.
