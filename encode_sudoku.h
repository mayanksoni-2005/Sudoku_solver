#include <vector>
#include <unordered_map>

// Define types for literals and CNF formula
using Literal = int;
using Clause = std::vector<Literal>;
using CNFFormula = std::vector<Clause>;

// /**
//  * @brief Encode the Sudoku puzzle into a CNF formula
//  * 
//  * This function translates the Sudoku rules into CNF clauses:
//  *  - Each cell contains at least one number.
//  *  - Each cell contains at most one number.
//  *  - Each number appears exactly once per row.
//  *  - Each number appears exactly once per column.
//  *  - Each number appears exactly once per 3x3 block.
//  * 
//  * The clues provided by the puzzle are also encoded as unit clauses.
//  * 
//  * @param formula CNF formula to store the clauses.
//  * @param puzzle 9x9 grid of integers representing the Sudoku puzzle. 0 means unfilled cell.
//  */
void encodeSudokuCNF(CNFFormula &formula, const std::vector<std::vector<int> > &puzzle);
