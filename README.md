# my-first-cpp-projects
# C++ Console Utilities & Games

Hello! I am a 13-year-old self-taught developer. This repository serves as a personal showcase of my early steps in C++ programming, focusing on core logic, memory management, and algorithm optimization. 

Everything here was written, compiled, and tested entirely on an Android device.

## Tech Stack & Compatibility
* **Language:** C++11 / C++14
* **Compiler:** Clang (tested via Cxxdroid on Android / Aarch64) or GCC
* **OS:** Android / Linux / Windows (Cross-platform console apps)

---

## Repository Contents

### 1. Fibonacci.cpp
Generates Fibonacci numbers up to $N \le 90$. 
* Uses `unsigned long long` to prevent integer overflow and guarantee exact precision for large numbers.
* Configured with `std::fixed` and `std::setprecision(0)` for clean digit output without scientific notation.
* Calculates the Golden Ratio value ($\approx 1.618$) at the end of the sequence using double precision casting.
* **Optimization:** Implements sequence progression using a fast double-`swap()` mechanic instead of multiple temporary assignments.

### 2. GuessTheNumber.cpp
A classic console-based guessing game. 
* Uses `rand()` with `time(NULL)` seeding for pseudo-random number generation.
* The computer picks a number from 1 to 100, and the player has 7 attempts to guess it.
* Provides immediate interactive feedback ("more/less" hints) after each turn and handles strict state verification for win/loss conditions.

### 3. prime-search-naive.cpp
Finds all prime numbers from 2 up to N.
* Implemented via the trial division algorithm.
* **Optimization:** Optimized by limiting the inner loop boundary to $\sqrt{i}$ (`std::sqrt(i)`). This significantly reduces execution time and avoids unnecessary division iterations, turning a heavy brute-force search into an efficient algorithm.

---

## How to Run

Clone the repository and compile any file using `g++` or `clang++` by replacing `FileName.cpp` and `output_name` with the corresponding project files:

```bash
clang++ -std=c++11 FileName.cpp -o output_name
./output_name
