target: include/*.h include/*.c
	gcc include/*.c include/*.h

clean:
	rm include/*.gch