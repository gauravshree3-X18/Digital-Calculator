
📘 Digital Calculator in C – README

📝 Project Title

Digital Calculator using C Programming


---

📌 Project Overview

This project is a menu-driven digital calculator developed in the C programming language.
It allows the user to perform a variety of basic and scientific mathematical operations.
The program keeps running until the user chooses the Exit option.

It is ideal for:

Beginners in C

Academic projects

Practical lab programs

Demonstrating switch-case, loops, and math functions



---

🚀 Features

The calculator supports the following operations:

Option	Operation

1	Addition
2	Subtraction
3	Multiplication
4	Division
5	Modulo
6	Power (xⁿ)
7	Square Root
8	Exit


Extra features:

Handles division by zero

Prevents square root of negative numbers

Uses math.h for advanced functions

User-friendly interface



---

🧠 How It Works

1. The program displays a menu.


2. The user selects an option.


3. The user enters required numbers.


4. The calculator performs the selected operation.


5. Result is shown.


6. Menu appears again until user exits.




---

🛠 Technologies Used

C Programming Language

Standard I/O (stdio.h)

Math Library (math.h)

GCC / MinGW / Turbo C / Clang compiler



---

📂 Project Structure

Digital-Calculator/
│
├── calculator.c     # Main Source Code
└── README.md        # Documentation (This file)


---

📥 How to Compile and Run

gcc calculator.c -o calculator -lm
./calculator
On Turbo C:

Simply compile and run (math library loads automatically).



---

🖥 Sample Output

===== DIGITAL CALCULATOR =====

Choose an operation:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulo
6. Power
7. Square Root
8. Exit
Enter your choice: 1
Enter two numbers: 4 5
Result = 9


---

❗ Error Handling

The calculator avoids errors like:

Dividing a number by zero

Taking square root of negative numbers

Wrong/invalid menu choice



---

👨‍💻 Author 

Created by Gaurav
Feel free to improve or modify the project.
