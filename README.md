# c-neural-functions
This project calculates and displays tables with values of the most common neural activation functions.<br>
The program is written in the C programming language and was created as a school assignment.<br>

# how to use<br>
Run the file main.exe.<br>
Upon execution, the program expects the following values from standard input:<br>

xstart xstop step precision width [functions...] X<br>
xstart, xstop – range of x values (e.g., -5 5)<br>

xstart – starting value<br>
xstop – ending value<br>
step – step between values (e.g., 0.5)<br>
precision – number of decimal places in the output<br>
width – column width in the output<br>
functions – optional numbers of activation functions to use (e.g., 1 2 5)<br>
X – any non-numeric character to terminate the input (e.g., x or m)<br>

Activation Functions<br>
Number	Function<br>
1	Binary step function<br>
2	ReLU<br>
3	Squareplus<br>
4	Gaussian<br>
5	Hyperbolic tangent<br>
6	Swish<br>

Examples<br>
Auto mode (computes all functions):

<img width="869" height="345" alt="image" src="https://github.com/user-attachments/assets/dee553fa-27aa-42dc-a6f8-e12e768138be" />

Manual mode (only selected functions):

<img width="980" height="154" alt="image" src="https://github.com/user-attachments/assets/2f6a3b5e-e3ef-4f18-842f-353097c2eec6" />

Error Messages
E1 – incomplete or non-numeric input<br>
E2 – xstart ≥ xstop (invalid interval)
