/*
 create shell script, which will start executable
	 exe will ask for a range
	 exe will ask for b range
	 exe will write f(x) = x*x in range [a,b] using 11 points
	 exe ->
	 data.txt:
	 # x	f(x)
	 1.00	1.00
	 1.10	1.21
	 1.20	1.44
	 1.30	1.69
	 1.40	1.96
	 1.50	2.25
	 1.60	2.56
	 1.70	2.89
	 1.80	3.24
	 1.90	3.61
	 2.00	4.00

then shell script will start plot.gp (in gnuplot)
		plot f(x)=x*x in [-10;10]
		add x-axis label
		add y-axis label
		add title
		add legend
	plot.gp should plot data from data.txt with all information
*/

// shell starts executable
