
all:
	make ex01
	make ex02
	make ex03
	make ex04
	make ex05
	make ex06
	make ex07
	make ex08

ex01:
	g++ -Wall -Wextra -Werror ex01/main.cpp -o ex01/ex01
	./ex01/ex01

ex02:
	g++ -Wall -Wextra -Werror ex02/main.cpp -o ex02/ex02
	./ex02/ex02

ex03:
	g++ -Wall -Wextra -Werror ex03/main.cpp ex03/Socio.cpp -o ex03/ex03
	./ex03/ex03

ex04:
	echo "Just an abstract class, no need to run it"

ex05:
	g++ -Wall -Wextra -Werror ex05/main.cpp -o ex05/ex05
	./ex05/ex05

ex06:
	g++ -Wall -Wextra -Werror ex06/main.cpp -o ex06/ex06
	./ex06/ex06

ex07:
	g++ -Wall -Wextra -Werror ex07/main.cpp -o ex07/ex07
	./ex07/ex07

ex08:
	g++ -Wall -Wextra -Werror ex08/main.cpp -o ex08/ex08
	./ex08/ex08

clean:
	rm -f ./ex01/ex01
	rm -f ./ex02/ex02
	rm -f ./ex03/ex03
	rm -f ./ex04/ex04
	rm -f ./ex05/ex05
	rm -f ./ex06/ex06
	rm -f ./ex07/ex07
	rm -f ./ex08/ex08

fclean: clean

re: fclean all

.PHONY: all ex01 ex02 ex03 ex04 ex05 ex06 ex07 ex08 clean fclean re