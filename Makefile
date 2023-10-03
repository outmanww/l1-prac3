a.out:
	gcc prac.c

clean:
	rm a.out

test: a.out
	bash test.sh