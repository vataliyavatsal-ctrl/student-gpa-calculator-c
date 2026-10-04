# Bank Management System in C

A menu-driven console application built using C language to manage multiple bank accounts. This project demonstrates core procedural programming concepts like array of structures, loops, and searching logic.

## Features
- **Create Account:** Register a new bank account with account number, holder name, and opening balance.
- **Display All Accounts:** View a complete list of all registered accounts.
- **Deposit Money:** Search account by account number and credit funds.
- **Withdraw Money:** Withdraw funds with insufficient balance checking.
- **Search Account:** Look up single account details quickly.

## Technical Concepts Covered
- **Structures (`struct`):** Custom data type for grouping account attributes.
- **Array of Structures:** Managing multiple account records simultaneously.
- **Linear Search:** Searching through array elements to match account numbers.
- **Control Flow:** Menu navigation using `while(1)` loop and `switch-case`.

## How to Run

1. Compile the program:
   ```bash
   gcc main.c -o bank