Ex01
Dada la clase Bombilla como se presenta a continuación (no se puede modificar), escribe una función EncenderBombilla que cambie el estado de la variable miembro encendida de un objeto de la clase Bombilla a true. Escribe también un programa main que, tras	crear el objeto bombilla1 de la clase Bombilla, utilice la función EncenderBombilla para modificar ese	objeto y después imprima en pantalla la temperatura dada por	GetTemperatura (que deberá ser 100).
class Bombilla {
public:
  bool encendida = false;

  int GetTemperatura() {
     if (encendida) {
        return 100;
     } else {
        return 0;
     }
  }
};

// ToDo EncenderBombilla

int main(void) {
  // ToDo
}
Ex02
Escribe una función que devuelva el número de bits a “1” del entero sin signo que se le pase como argumento.
int GetOneBits(unsigned int number) {
  // ToDo
}
Ex03
Escribe una clase Socio	que tenga una variable miembro numero que sea un entero sin
	signo a modo de identificador. En el constructor de la clase se debe asignar a esta variable el número de socios que se hayan creado hasta el momento. Escribe también una función perteneciente a esta
	clase que devuelva el último número de socio que ha sido asignado a un socio.
class Socio {
//ToDo
};
Ex04
Escribe una clase Forma	que tenga dos variables miembro altura y anchura de tipo entero. Debe ser una clase abstracta que obligue a las clases que hereden de ella a implementar la función GetArea.
class Forma {
  // ToDo
};
Ex05
Escribe las clases	Rectangulo y Triangulo que hereden de la clase Forma del punto anterior y por tanto implementen la función GetArea.
// ToDo class Rectangulo

// ToDo class Triangulo
Ex06
Escribe	la clase Cuadrado que herede de la clase Rectangulo,	completando lo que creas necesario y útil.

Ex07
Escribe una función main 	en la que:
Se creen diversos objetos de las clases Rectangulo, Triangulo y Cuadrado definidas en los puntos anteriores. Deben ser de distintos tamaños, es decir de distintas anchuras y alturas.
Se metan en un unico array
Se rocorra ese array en un blucle (for o while) que imprima el area de cada objeto.
int main(void) {
  // ToDo
}
Ex08