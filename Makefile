PROJECT_NAME = all.exe
SRC = Outputequal.c support\scan_support.c
HEADER = header

$(PROJECT_NAME): $(SRC)
	gcc -I $(HEADER) $(SRC) -o $(PROJECT_NAME)

run : $(PROJECT_NAME)
	$(PROJECT_NAME)

clean:  
	del /q *.exe