!#/bin/bash
gcc wall -pedantic -werror -wextra -c *.c
ar -rc liball.a *.c
Ranlib liball.a
