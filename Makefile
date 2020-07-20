CC = gcc
files = src/* main.c
bin = app

all: build run

build: $(files)
	@$(CC) $(files) -o $(bin) -Wall

run: $(bin)
	@./$(bin)

clean: $(bin)
	@rm $(bin)

git-am: $(files)
	@git add $(files)
	@git commit

git-push: $(files)
	@git push -u origin master

