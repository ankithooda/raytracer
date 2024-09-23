first_image:
	mkdir -p bin && gcc -O3 -o bin/first_image first_image.c

hello: first_image
	mkdir -p images && bin/first_image > images/first_image
	eog images/first_image

raytracer:
	mkdir -p bin
	gcc -o bin/raytracer raytracer.c vector3.c -lm

test:
	mkdir -p tests/bin
	gcc -o tests/bin/vector3_test tests/vector3_test.c vector3.c -lm
	tests/bin/vector3_test
