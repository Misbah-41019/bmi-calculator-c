# BMI Calculator in C

A lightweight, terminal-based Body Mass Index (BMI) calculator written in C. It features robust input validation to ensure user inputs are both the correct data type and within realistic human ranges.

## Features
* **Input Type Validation:** Prevents crashes or unexpected behavior if a user types letters instead of numbers.
* **Range Checking:** Ensures weight (30-300kg) and height (1.0-2.5m) are within realistic boundaries.
* **Input Buffer Clearing:** Avoids standard `scanf` trailing character bugs.

## How to Run

### Prerequisites
You will need a C compiler (like `gcc`) installed on your system.

### Compilation
Open your terminal and run the following command:
```bash
gcc main.c -o bmi_calculator
