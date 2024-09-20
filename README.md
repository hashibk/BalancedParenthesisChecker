# Balanced Parentheses Checker

This C++ program verifies if the parentheses in a given expression are balanced. It checks for matching pairs of parentheses, square brackets, and curly braces.

## Features

- **Multi-Type Bracket Support**: Checks for balanced parentheses, square brackets, and curly braces.
- **Stack-Based Algorithm**: Utilizes a stack to manage opening and closing brackets.

## Usage

1. **Input Expression**:
   - The program processes a predefined expression (e.g., `(A + B) * (C - D)`).

2. **Checking Balance**:
   - The program iterates through each character in the expression, pushing opening brackets onto the stack and checking for matching closing brackets.

3. **Output**:
   - The program outputs whether the brackets are balanced.

### Example

In the given code:

- The expression `(A + B) * (C - D)` is checked for balanced brackets.
- The output indicates whether the brackets are balanced or not.

**Output**:
```plaintext
Balanced.
