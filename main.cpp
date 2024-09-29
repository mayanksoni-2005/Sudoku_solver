// #include "sat_solver.h"
// #include<iostream>
// #include <unordered_map>
// using namespace std;

// int main() {
//     // Example CNF formula: (x1 ∨ ¬x2) ∧ (x2 ∨ x3) ∧ (¬x1 ∨ ¬x3)
//     // CNFFormula formula = {
//     //     {1, -2},
//     //     {2, 3},
//     //     {-1, -3}
//     // };
//     CNFFormula formula;


//     Clause cl1;
//     cl1.push_back(111);

//     Clause cl2;
//     cl2.push_back(112);

//     Clause cl_I_forgot;
//     cl_I_forgot.push_back(111);
//     cl_I_forgot.push_back(112);
//     cl_I_forgot.push_back(113);

//     Clause cl3;
//     cl3.push_back(121);
//     cl3.push_back(122);
//     cl3.push_back(123);

//     Clause cl4;
//     cl4.push_back(131);
//     cl4.push_back(132);
//     cl4.push_back(133);

//     Clause cl5;
//     cl5.push_back(211);
//     cl5.push_back(212);
//     cl5.push_back(213);

//     Clause cl6;
//     cl6.push_back(221);
//     cl6.push_back(222);
//     cl6.push_back(223);

//     Clause cl7;
//     cl7.push_back(231);
//     cl7.push_back(232);
//     cl7.push_back(233);

//     Clause cl8;
//     cl8.push_back(311);
//     cl8.push_back(312);
//     cl8.push_back(313);

//     Clause cl_I_forgot1;
//     cl_I_forgot1.push_back(321);
//     cl_I_forgot1.push_back(322);
//     cl_I_forgot1.push_back(323);


//     Clause cl9;
//     cl9.push_back(331);
//     cl9.push_back(332);
//     cl9.push_back(333);

//     Clause cl10;
//     cl10.push_back(-111);
//     cl10.push_back(-121);

//     Clause cl11;
//     cl11.push_back(-111);
//     cl11.push_back(-131);

//     Clause cl12;
//     cl12.push_back(-121);
//     cl12.push_back(-131);

//     Clause cl13;
//     cl13.push_back(-112);
//     cl13.push_back(-122);

//     Clause cl14;
//     cl14.push_back(-112);
//     cl14.push_back(-132);

//     Clause cl15;
//     cl15.push_back(-122);
//     cl15.push_back(-132);

//     Clause cl16;
//     cl16.push_back(-113);
//     cl16.push_back(-123);

//     Clause cl17;
//     cl17.push_back(-113);
//     cl17.push_back(-133);

//     Clause cl18;
//     cl18.push_back(-123);
//     cl18.push_back(-133);
    
// //12345
//     Clause cl19;
//     cl19.push_back(-211);
//     cl19.push_back(-221);

//     Clause cl20;
//     cl20.push_back(-211);
//     cl20.push_back(-231);

//     Clause cl21;
//     cl21.push_back(-221);
//     cl21.push_back(-231);

//     Clause cl22;
//     cl22.push_back(-212);
//     cl22.push_back(-222);

//     Clause cl23;
//     cl23.push_back(-212);
//     cl23.push_back(-232);

//     Clause cl24;
//     cl24.push_back(-222);
//     cl24.push_back(-232);

//     Clause cl25;
//     cl25.push_back(-213);
//     cl25.push_back(-223);

//     Clause cl26;
//     cl26.push_back(-213);
//     cl26.push_back(-233);

//     Clause cl27;
//     cl27.push_back(-223);
//     cl27.push_back(-233);

// //234
//     Clause cl28;
//     cl28.push_back(-311);
//     cl28.push_back(-321);

//     Clause cl29;
//     cl29.push_back(-311);
//     cl29.push_back(-331);

//     Clause cl30;
//     cl30.push_back(-321);
//     cl30.push_back(-331);

//     Clause cl31;
//     cl31.push_back(-312);
//     cl31.push_back(-322);

//     Clause cl32;
//     cl32.push_back(-312);
//     cl32.push_back(-332);

//     Clause cl33;
//     cl33.push_back(-322);
//     cl33.push_back(-332);

//     Clause cl34;
//     cl34.push_back(-313);
//     cl34.push_back(-323);

//     Clause cl35;
//     cl35.push_back(-313);
//     cl35.push_back(-333);

//     Clause cl36;
//     cl36.push_back(-323);
//     cl36.push_back(-333);

// //1234
//     Clause cl37;
//     cl37.push_back(-111);
//     cl37.push_back(-211);

//     Clause cl38;
//     cl38.push_back(-111);
//     cl38.push_back(-311);

//     Clause cl39;
//     cl39.push_back(-211);
//     cl39.push_back(-311);


//     Clause cl40;
//     cl40.push_back(-121);
//     cl40.push_back(-221);

//     Clause cl41;
//     cl41.push_back(-121);
//     cl41.push_back(-321);

//     Clause cl42;
//     cl42.push_back(-221);
//     cl42.push_back(-321);


//     Clause cl43;
//     cl43.push_back(-131);
//     cl43.push_back(-231);

//     Clause cl44;
//     cl44.push_back(-131);
//     cl44.push_back(-331);

//     Clause cl45;
//     cl45.push_back(-231);
//     cl45.push_back(-331);

// //1234
//     Clause cl46;
//     cl46.push_back(-112);
//     cl46.push_back(-212);

//     Clause cl47;
//     cl47.push_back(-112);
//     cl47.push_back(-312);

//     Clause cl48;
//     cl48.push_back(-212);
//     cl48.push_back(-312);


//     Clause cl49;
//     cl49.push_back(-122);
//     cl49.push_back(-222);

//     Clause cl50;
//     cl50.push_back(-122);
//     cl50.push_back(-322);

//     Clause cl51;
//     cl51.push_back(-222);
//     cl51.push_back(-322);


//     Clause cl52;
//     cl52.push_back(-132);
//     cl52.push_back(-232);

//     Clause cl53;
//     cl53.push_back(-132);
//     cl53.push_back(-332);

//     Clause cl54;
//     cl54.push_back(-232);
//     cl54.push_back(-332);


// //12334

//     Clause cl55;
//     cl55.push_back(-113);
//     cl55.push_back(-213);

//     Clause cl56;
//     cl56.push_back(-113);
//     cl56.push_back(-313);

//     Clause cl57;
//     cl57.push_back(-213);
//     cl57.push_back(-313);


//     Clause cl58;
//     cl58.push_back(-123);
//     cl58.push_back(-223);

//     Clause cl59;
//     cl59.push_back(-123);
//     cl59.push_back(-323);

//     Clause cl60;
//     cl60.push_back(-223);
//     cl60.push_back(-323);


//     Clause cl61;
//     cl61.push_back(-133);
//     cl61.push_back(-233);

//     Clause cl62;
//     cl62.push_back(-133);
//     cl62.push_back(-333);

//     Clause cl63;
//     cl63.push_back(-233);
//     cl63.push_back(-333);

// //23er
//     Clause cl64;
//     cl64.push_back(-111);
//     cl64.push_back(-112);

//     Clause cl65;
//     cl65.push_back(-111);
//     cl65.push_back(-113);

//     Clause cl66;
//     cl66.push_back(-113);
//     cl66.push_back(-112);


//     Clause cl67;
//     cl67.push_back(-121);
//     cl67.push_back(-122);

//     Clause cl68;
//     cl68.push_back(-121);
//     cl68.push_back(-123);

//     Clause cl69;
//     cl69.push_back(-123);
//     cl69.push_back(-122);


//     Clause cl70;
//     cl70.push_back(-131);
//     cl70.push_back(-132);

//     Clause cl71;
//     cl71.push_back(-131);
//     cl71.push_back(-133);

//     Clause cl72;
//     cl72.push_back(-133);
//     cl72.push_back(-132);


//     Clause cl73;
//     cl73.push_back(-211);
//     cl73.push_back(-212);

//     Clause cl74;
//     cl74.push_back(-211);
//     cl74.push_back(-213);

//     Clause cl75;
//     cl75.push_back(-213);
//     cl75.push_back(-212);


//     Clause cl76;
//     cl76.push_back(-221);
//     cl76.push_back(-222);

//     Clause cl77;
//     cl77.push_back(-221);
//     cl77.push_back(-223);

//     Clause cl78;
//     cl78.push_back(-223);
//     cl78.push_back(-222);


//     Clause cl79;
//     cl79.push_back(-231);
//     cl79.push_back(-232);

//     Clause cl80;
//     cl80.push_back(-231);
//     cl80.push_back(-233);

//     Clause cl81;
//     cl81.push_back(-233);
//     cl81.push_back(-232);


//     Clause cl82;
//     cl82.push_back(-311);
//     cl82.push_back(-312);

//     Clause cl83;
//     cl83.push_back(-311);
//     cl83.push_back(-313);

//     Clause cl84;
//     cl84.push_back(-313);
//     cl84.push_back(-312);


//     Clause cl85;
//     cl85.push_back(-321);
//     cl85.push_back(-322);

//     Clause cl86;
//     cl86.push_back(-321);
//     cl86.push_back(-323);

//     Clause cl87;
//     cl87.push_back(-323);
//     cl87.push_back(-322);


//     Clause cl88;
//     cl88.push_back(-331);
//     cl88.push_back(-332);

//     Clause cl89;
//     cl89.push_back(-331);
//     cl89.push_back(-333);

//     Clause cl90;
//     cl90.push_back(-333);
//     cl90.push_back(-332);
    







//     formula.push_back(cl1);
//     formula.push_back(cl2);
//     formula.push_back(cl_I_forgot);
//     formula.push_back(cl_I_forgot1);
//     formula.push_back(cl3);
//     formula.push_back(cl4);
//     formula.push_back(cl5);
//     formula.push_back(cl6);
//     formula.push_back(cl7);
//     formula.push_back(cl8);
//     formula.push_back(cl9);
//     formula.push_back(cl10);
//     formula.push_back(cl11);
//     formula.push_back(cl12);
//     formula.push_back(cl13);
//     formula.push_back(cl14);
//     formula.push_back(cl15);
//     formula.push_back(cl16);
//     formula.push_back(cl17);
//     formula.push_back(cl18);
//     formula.push_back(cl19);
//     formula.push_back(cl20);
//     formula.push_back(cl21);
//     formula.push_back(cl22);
//     formula.push_back(cl23);
//     formula.push_back(cl24);
//     formula.push_back(cl25);
//     formula.push_back(cl26);
//     formula.push_back(cl27);
//     formula.push_back(cl28);
//     formula.push_back(cl29);
//     formula.push_back(cl30);
//     formula.push_back(cl31);
//     formula.push_back(cl32);
//     formula.push_back(cl33);
//     formula.push_back(cl34);
//     formula.push_back(cl35);
//     formula.push_back(cl36);
//     formula.push_back(cl37);
//     formula.push_back(cl38);
//     formula.push_back(cl39);
//     formula.push_back(cl40);
//     formula.push_back(cl41);
//     formula.push_back(cl42);
//     formula.push_back(cl43);
//     formula.push_back(cl44);
//     formula.push_back(cl45);
//     formula.push_back(cl46);
//     formula.push_back(cl47);
//     formula.push_back(cl48);
//     formula.push_back(cl49);
//     formula.push_back(cl50);
//     formula.push_back(cl51);
//     formula.push_back(cl52);
//     formula.push_back(cl53);
//     formula.push_back(cl54);
//     formula.push_back(cl55);
//     formula.push_back(cl56);
//     formula.push_back(cl57);
//     formula.push_back(cl58);
//     formula.push_back(cl59);
//     formula.push_back(cl60);
//     formula.push_back(cl61);
//     formula.push_back(cl62);
//     formula.push_back(cl63);
//     formula.push_back(cl64);
//     formula.push_back(cl65);
//     formula.push_back(cl66);
//     formula.push_back(cl67);
//     formula.push_back(cl68);
//     formula.push_back(cl69);
//     formula.push_back(cl70);
//     formula.push_back(cl71);
//     formula.push_back(cl72);
//     formula.push_back(cl73);
//     formula.push_back(cl74);
//     formula.push_back(cl75);
//     formula.push_back(cl76);
//     formula.push_back(cl77);
//     formula.push_back(cl78);
//     formula.push_back(cl79);
//     formula.push_back(cl80);
//     formula.push_back(cl81);
//     formula.push_back(cl82);
//     formula.push_back(cl83);
//     formula.push_back(cl84);
//     formula.push_back(cl85);
//     formula.push_back(cl86);
//     formula.push_back(cl87);
//     formula.push_back(cl88);
//     formula.push_back(cl89);
//     formula.push_back(cl90);


//     std::unordered_map<Literal, bool> assignments;  // Store variable assignments

//     if (DPLL(formula, assignments)) {
//         cout << "Satisfiable! Assignments:\n";
//         printAssignments(assignments);
//     } else {
//         cout << "Unsatisfiable.\n";
//     }
//     // printAssignments(assignments);

//     return 0;
// }

#include "encode_sudoku.h"
#include "sat_solver.h"  // Include your DPLL SAT solver
#include<iostream>

int main() {
    // Initialize a 9x9 Sudoku puzzle with some given numbers
    std::vector<std::vector<int> > puzzle;
    std::vector<int> row1;
    row1.push_back(0);
    row1.push_back(0);
    row1.push_back(0);
    row1.push_back(9);
    row1.push_back(0);
    row1.push_back(0);
    row1.push_back(0);
    row1.push_back(6);
    row1.push_back(7);
    puzzle.push_back(row1);

    std::vector<int> row2;
    row2.push_back(0);
    row2.push_back(9);
    row2.push_back(0);
    row2.push_back(0);
    row2.push_back(0);
    row2.push_back(0);
    row2.push_back(2);
    row2.push_back(0);
    row2.push_back(8);
    puzzle.push_back(row2);

    std::vector<int> row3;
    row3.push_back(4);
    row3.push_back(6);
    row3.push_back(0);
    row3.push_back(0);
    row3.push_back(7);
    row3.push_back(8);
    row3.push_back(0);
    row3.push_back(0);
    row3.push_back(0);
    puzzle.push_back(row3);

    std::vector<int> row4;
    row4.push_back(3);
    row4.push_back(2);
    row4.push_back(0);
    row4.push_back(0);
    row4.push_back(9);
    row4.push_back(4);
    row4.push_back(0);
    row4.push_back(7);
    row4.push_back(0);
    puzzle.push_back(row4);

    std::vector<int> row5;
    row5.push_back(7);
    row5.push_back(0);
    row5.push_back(0);
    row5.push_back(6);
    row5.push_back(0);
    row5.push_back(3);
    row5.push_back(0);
    row5.push_back(0);
    row5.push_back(2);
    puzzle.push_back(row5);

    std::vector<int> row6;
    row6.push_back(0);
    row6.push_back(1);
    row6.push_back(0);
    row6.push_back(7);
    row6.push_back(8);
    row6.push_back(0);
    row6.push_back(0);
    row6.push_back(4);
    row6.push_back(3);
    puzzle.push_back(row6);

    std::vector<int> row7;
    row7.push_back(0);
    row7.push_back(0);
    row7.push_back(0);
    row7.push_back(8);
    row7.push_back(5);
    row7.push_back(0);
    row7.push_back(0);
    row7.push_back(1);
    row7.push_back(6);
    puzzle.push_back(row7);

    std::vector<int> row8;
    row8.push_back(5);
    row8.push_back(0);
    row8.push_back(1);
    row8.push_back(0);
    row8.push_back(0);
    row8.push_back(0);
    row8.push_back(0);
    row8.push_back(9);
    row8.push_back(0);
    puzzle.push_back(row8);

    std::vector<int> row9;
    row9.push_back(6);
    row9.push_back(7);
    row9.push_back(0);
    row9.push_back(0);
    row9.push_back(0);
    row9.push_back(9);
    row9.push_back(0);
    row9.push_back(0);
    row9.push_back(0);
    puzzle.push_back(row9);

    // Clause row1;
    // row1.push_back(1);
    // row1.push_back(0);
    // row1.push_back(0);

    // Clause row2;
    // row2.push_back(1);
    // row2.push_back(0);
    // row2.push_back(0);

    // Clause row3;
    // row3.push_back(1);
    // row3.push_back(0);
    // row3.push_back(0);

    int N=9;
    // puzzle.push_back(row1);
    // puzzle.push_back(row2);
    // puzzle.push_back(row3);
    
    

    CNFFormula formula;
    std::unordered_map<Literal, bool> assignments;

    // Encode the Sudoku puzzle into CNF
    encodeSudokuCNF(formula, puzzle);

    // Solve the encoded CNF with the DPLL SAT solver
    if (DPLL(formula, assignments)) {
        std::cout << "Sudoku Solved! Solution:\n";
        for (int r = 1; r <= N; ++r) {
            for (int c = 1; c <= N; ++c) {
                for (int v = 1; v <= N; ++v) {
                    if (assignments[r * 100 + c * 10 + v]) {
                        std::cout << v << " ";
                        break; 
                    }
                }
            }
            std::cout << "\n";
        }
    } else {
        std::cout << "No solution found.\n";
    }

    return 0;
}