# SAT Solver & Sudoku Encoder Project

## Overview

This project implements a **SAT Solver** using the **DPLL (Davis-Putnam-Logemann-Loveland)** algorithm, with performance optimizations like **unit propagation**, **pure literal elimination**, and recursive **backtracking** to solve Boolean Satisfiability Problems. It also includes a **Sudoku Encoder**, which translates a given Sudoku puzzle into a **Propositional Logic formula in Conjunctive Normal Form (CNF)**, allowing the puzzle to be solved using the SAT Solver.

## Features

- **Efficient SAT Solver**: Implements the **DPLL algorithm** with optimizations to solve complex Boolean logic problems.
- **Sudoku Encoder**: Converts Sudoku puzzles into CNF format, ensuring all puzzle constraints are correctly represented.
- **Performance Optimizations**:
  - **Unit Propagation**: Automatically assigns values to literals in unit clauses.
  - **Pure Literal Elimination**: Detects and assigns values to pure literals, reducing the formula size.
  - **Recursive Backtracking**: Implements a systematic search for a satisfying assignment.

## Files

- `sat_solver.h` - Header file for SAT solver data structures and function declarations.
- `encode_sudoku.h` - Header file for the Sudoku Encoder.
- `sat_solver.cpp` - Contains the implementation of the SAT solver, including the DPLL algorithm and optimizations.
- `encode_sudoku.cpp` - Contains the Sudoku Encoder that generates CNF formulas for Sudoku puzzles.
- `main.cpp` - In this file you can put data for the sudoku that you want to solve

## Run
First download the zip file and unzip it. Now go to that directory and run following commands.

```
g++ -o sat_solver main.cpp sat_solver.cpp encode_sudoku.cpp -std=c++11
```
```
./sat_solver
```
