% _printf fucntion
% Meliza Posada Arias - Miguel Angel Torres Arango
% July 2022

# NAME 

	_printf - a library function to send formatted output to the screen.

#SYNOPSIS

	int _printf(const char *format, …)
	_printf[argument]…

# DESCRIPTION

	The printf function prints numerical values or ASCII characters. Characters of the format specifiers passed to it in the argument. This _printf includes our version of the printf function, the basic and main functions.
	Return: The number of characters printed. Excluding the null byte used to end output to string.
	Conversation specifiers: There are a many different conversion specifiers that can be used for various data types.

	% - It prints a percent sign.
	%d - It prints an integer as a signed decimal (base 10) number.
	%i - It prints same as “d”, integer in base 10.
	%s - It prints a string.
	%c - It prints a single character.

	 conversion specifier begins with a percent sign and ends with the conversion characters shown below.

# EXAMPLES

	_printf(“character: %c” , character);
	_printf(“string: %s” , string);
	_printf(“integer: %d” , integer); (can be substituted with “%i”
