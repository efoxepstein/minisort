# The Challenge

Sort array `a` with length `i` in as few characters of C as possible.

Rules:
- Compile with `-Wall -Wextra -std=c99`
- No preprocessor directives allowed
- Must sort in ascending order
- Must be deterministic and always work

# Example
In `selectionsort.60.c` we have:

    for(;--i;a++)for(int*j=a,t;++j<=a+i;)*j<(t=*a)?*a=*j,*j=t:0;

# Progress

Selection sort in 60 characters is a combined effort with Mark Yagnatinsky. To test a solution, copy it to `minisort.c`, compile (`gcc -Wall -Wextra -std=c99 driver.c`) and run (`./a.out 45 1 2 65 23 1 55 4` for example).

# Contributing

If you can beat this, please fork and show me.
Write your code in `minisort.c`, the driver shouldn't need altering.
