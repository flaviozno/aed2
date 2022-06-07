build: main.c ./utils/*.c
		gcc main.c ./utils/*.c -o app -lm
run:
	app.exe
clean:
	rm -rf app.exe