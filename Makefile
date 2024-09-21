first_image:
	mkdir -p bin && gcc -O3 -o bin/first_image first_image.c

gen_first_image:
	mkdir -p images && bin/first_image > images/first_image
