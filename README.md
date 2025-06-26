# Alternating-Sequence-Generator

An alternating sequence ("altseq") is defined below:
- Starts at 1
- Always counting up or down by 1
- At element n, the counting direction changes direction if
- n is a multiple of 7, or
- n contains the digit 7

The first 30 elements of "altseq" are listed below, with direction swaps marked using brackets at the 7th, 14th, 17th, 21st, 27th, and 28th elements:

| Index | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | 26 | 27 | 28 | 29 | 30 |
|-------|---|---|---|---|---|---|----|---|---|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|
| Value | 1 | 2 | 3 | 4 | 5 | 6 | [7]| 6 | 5 |  4 |  3 |  2 |  1 | [0]|  1 |  2 | [3]|  2 |  1 |  0 | [-1]|  0 |  1 |  2 |  3 | [4]| [5]|  4 |  5 |  6 |
