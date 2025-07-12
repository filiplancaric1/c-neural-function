# c-neural-functions
This project calculates and displays tables with values of the most common neural activation functions.
The program is written in the C programming language and was created as a school assignment.

# how to use
Run the file main.exe.
Upon execution, the program expects the following values from standard input:

xstart xstop step precision width [functions...] X
xstart, xstop – range of x values (e.g., -5 5)

xstart – starting value
xstop – ending value
step – step between values (e.g., 0.5)
precision – number of decimal places in the output
width – column width in the output
functions – optional numbers of activation functions to use (e.g., 1 2 5)
X – any non-numeric character to terminate the input (e.g., x or m)

Activation Functions
Number	Function
1	Binary step function
2	ReLU
3	Squareplus
4	Gaussian
5	Hyperbolic tangent
6	Swish

Examples
Auto mode (computes all functions):
-5 5 1 2 10 x

Manual mode (only selected functions):
-2 2 0.5 3 8 1 3 5 m

Error Messages
E1 – incomplete or non-numeric input
E2 – xstart ≥ xstop (invalid interval)
