# CO1 Assignment 1 — Reliable Billing Program for a Rural Electricity Co-operative

**Student:** S Jefina Jone  
**Register number:** 1911260220D  
**Course:** Online Programming Lab – C Programming

## Scenario
Grama Jyoti Rural Electricity Co-operative bills households monthly. The programs in this assignment explore reliable input/output design, data-type selection, exact monetary calculations, tariff constants, and safe C macros.

## Tasks
- **Task 1:** Identify inputs, outputs, assumptions, and billing invariants; compare text and integer handling.
- **Task 2:** Explore C data types, floating-point versus integer-paise calculations, and meter rollover/consumption.
- **Task 3:** Use named tariff constants and calculate electricity bills by slab.
- **Task 4:** Demonstrate safer macro definitions, macro expansion, and common pitfalls.

## Repository structure
- `Task01/` — analysis and text-versus-integer demonstration
- `Task02/` — data types, money representation, and meter consumption
- `Task03/` — tariff constants and billing program
- `Task04/` — macro safety demonstrations
- `Outputs/` — captured program output text files
- `Screenshots/` — output screenshots

## Compile and run
Run these commands from the repository root (requires GCC):

```sh
gcc -std=c11 -Wall -Wextra Task01/text_vs_int.c -o task01 && ./task01
gcc -std=c11 -Wall -Wextra Task02/task02_types_table.c -o types_table && ./types_table
gcc -std=c11 -Wall -Wextra Task02/task02_float_vs_paise.c -o float_vs_paise && ./float_vs_paise
gcc -std=c11 -Wall -Wextra Task02/task02_consumption.c -o consumption && ./consumption
gcc -std=c11 -Wall -Wextra Task03/task03_bill.c -o task03_bill && ./task03_bill
gcc -std=c11 -Wall -Wextra Task04/task04_macros.c -o task04_macros && ./task04_macros
gcc -E Task04/task04_macro_expand.c | tail -n 1
```

## Repository URL
https://github.com/jefinajone03-web/CSA02-1911260220D-Assignment1

## Evidence note
Output and screenshot evidence should be checked against a fresh run on the computer used for submission, because compiler versions and platform-specific type sizes can vary.