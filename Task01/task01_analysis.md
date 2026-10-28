# Task 1 — Understand the Problem and Identify the Data

## Inputs
- Household number: identifier; use an unsigned integer or text if leading zeroes matter.
- Category: domestic, commercial, farm, etc.; a small code or enum is sufficient.
- Previous and current meter readings: 0–65535 for a 16-bit register.

## Outputs
- Units consumed, corrected for one possible rollover.
- Energy charge, calculated in paise.
- Fixed charge of 5000 paise (Rs 50.00).
- Total bill = energy charge + fixed charge.

## Rules and assumptions
- No negative bills or consumption.
- First 100 units are free; units 101–200 cost 225 paise each; units above 200 cost 450 paise each.
- Fixed charge is Rs 50.00, including when consumption is zero.
- Use integer paise for exact arithmetic.
- The 16-bit meter can roll over at most once in a billing month.
- For district-scale totals, use a 64-bit integer.

## Text versus integer readings
The companion `text_vs_int.c` compares digit strings and integer readings and reports memory and timing measurements for its test workload.
