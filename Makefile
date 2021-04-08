div_result.exe: division.c division_logic.c
	gcc division.c division_logic.c -o div_result.exe

run: div_result.exe
	div_result.exe