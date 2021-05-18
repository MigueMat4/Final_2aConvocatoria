# Evaluación Final - 2a Convocatoria

Repositorio para la segunda convocatoria del curso Introducción a la Ingeniería en Informática y Sistemas.

## El programa de números estrambóricos :mask:

:anguished: Este programa se me hizo muy difícil ya que no tenia el conocimiento completo para realizarlo. Un generador de números aleatorios es un dispositivo de cómputo o físico diseñado para generar una secuencia de números o símbolos que carecen de cualquier patrón, es decir, aparecen al azar.  :nerd_face:

~~#### Existen diferentes métodos computacionales para la creación de números aleatorios, pero concurridamente no cumplen la meta de la verdadera aleatoriedad - aunque pueden encontrarse, con mayor o menor éxito, algunas de las pruebas estadísticas de aleatoriedad destinado a medir sus resultados son impredecibles.~~

  ``` c++
    string numero, numero2 = "";
    cout << "Ingrese el numero estraborico:" << endl;
    cin >> numero;
    for (int i = 0; i < numero.length(); i++)
    {
        numero2.append(numero.substr(numero.length()- 1 - i, 1));
    }
```    

 - [ ] Realizar el programa
 - [ ] Comprobar que funcione bien.
 - [ ] Terminar el programa.