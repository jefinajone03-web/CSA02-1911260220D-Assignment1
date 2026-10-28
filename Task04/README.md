# CO1 Assignment 1 — Reliable Billing Program for a Rural Electricity Co-operative

**Student:** Jefina Jone S  
**Register number:** 1911260220D  
**Course:** Online Programming Lab – C Programming  
**Compiler used for this prepared package:** GCC (compile with `-std=c11 -Wall -Wextra`)

## Scenario
Grama Jyoti Rural Electricity Co-operative bills about 4,000 households each month and may scale to 800,000 households. Bills must be exact to the paisa.

## Repository structure
- `Task01/` — input/output analysis and text-versus-integer comparison
- `Task02/` — data types, floating-point versus integer-paise demonstration, meter rollover
- `Task03/` — named tariff constants and slab billing
- `Task04/` — safe and unsafe macro demonstrations
- `Outputs/` — text outputs produced by compiling and running the included programs
- `Screenshots/` — PNG captures of those terminal outputs

## Compile and run
Run these commands from the repository root (requires GCC):

```sh
gcc -std=c11 -Wall -Wextra Task01/text_vs_int.c -o /tmp/task01 && /tmp/task01
gcc -std=c11 -Wall -Wextra Task02/task02_types_table.c -o /tmp/types && /tmp/types
gcc -std=c11 -Wall -Wextra Task02/task02_float_vs_paise.c -o /tmp/float_test && /tmp/float_test
gcc -std=c11 -Wall -Wextra Task02/task02_consumption.c -o /tmp/consumption && /tmp/consumption
gcc -std=c11 -Wall -Wextra Task03/task03_bill.c -o /tmp/task03 && /tmp/task03
gcc -std=c11 -Wall -Wextra Task04/task04_macros.c -o /tmp/task04 && /tmp/task04
gcc -E Task04/task04_macro_expand.c | tail -n 1
```

## Expected concepts demonstrated
1. Identify inputs, outputs, assumptions and billing invariants.
2. Choose suitable data types; use integer paise for exact money and modular conversion for a 16-bit meter rollover.
3. Keep tariff values in named constants and calculate each slab separately.
4. Parenthesize macro parameters and avoid side-effecting expressions in macros; use inline functions when appropriate.

## Evidence note
The `Outputs/` text files and `Screenshots/` images in this package are generated from the source files included here in this environment. Re-run the commands on your own machine and replace the evidence if your compiler or platform produces different results. The PDF report mentions GCC 13.3.0 on Ubuntu; this package was compiled with the available GCC environment, so timing and type-size output may differ by system.
