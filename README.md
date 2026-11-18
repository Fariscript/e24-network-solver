# e24-network-solver

In many labs, the same problem comes up: you need a very specific
resistance, like 0.73 Ω, but you can't find that resistor on the shelf,
and you often can't order it either. Resistors are only made in a fixed
set of standard values.

The usual workaround is to combine different resistors in series and
parallel until you get close enough. This project came from that
problem.

This program will search through the available values and return the
best combinations for a target resistance. An exact match often isn't
possible, so "best" means the smallest error using the fewest resistors.

## The E24 series

E24 is a standard set of 24 resistor values per decade, typically sold
with ±5% tolerance. The program starts with E24 because these are values
commonly found in labs and shops. See
[E series of preferred numbers](https://en.wikipedia.org/wiki/E_series_of_preferred_numbers)
for more detail.

The search is planned to work with any list of values, so it can later
support other series or the resistors you actually own.

## Status

The program is in early development.

- [x] Build the E24 values from 1 Ω to 10 MΩ
- [x] Read and validate a target resistance
- [ ] Find the closest single resistor


## Build and run

Requires a C++17 compiler and CMake.

1. Open `CMakeLists.txt` in Qt Creator.
2. Choose a kit with a C++17 compiler.
3. Enable **Run in terminal** under Projects → Run Settings.
4. Press Ctrl+R, then type a resistance in ohms when asked.

## References

A. F. Van Dyck, "Preferred Numbers," Proc. IRE, vol. 24, no. 2,
pp. 159-179, Feb. 1936, doi: 10.1109/JRPROC.1936.228053.
