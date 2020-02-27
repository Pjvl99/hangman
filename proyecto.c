#include <stdio.h>
#include <stdlib.h>

int main(void) {
int random;
int valores;
int resetear = 1;
int x = 0;
int y = 0;
inicio:

scanf ("%d %d", &x, &y);
printf ("Puntuacion jugador: %d\n", x);
printf ("Puntuacion computadora: %d\n", y);
printf ("Elija una opcion jugador \n");
scanf ("%d", &valores);
random = rand()%3;
if (valores < 3){
switch (valores){
case 0:
printf ("Jugador eligio papel \n");
if(random == 0){
printf("La computadora eligio papel \n");
printf("Empate \n");
}
if (random == 1){
printf("La computadora eligio tijera \n");
printf("Gana la computadora \n");
y++;
}
if(random == 2){
printf("La computadora eligio piedra \n");
printf("Gana jugador \n");
x++;
}
break;
case 1:
printf ("Jugador eligio tijera \n");
if(random == 0){
printf("La computadora eligio papel \n");
printf("Gana Jugador \n");
   x++;
}
if (random == 1){
printf("La computadora eligio tijera \n");
printf("Empate \n");
}
if(random == 2){
printf("La computadora eligio piedra \n");
printf("Gana Computadora \n");
y++;
}
break;
case 2:
printf ("Jugador eligio piedra \n");
if(random == 0){
printf("La computadora eligio papel \n");
printf("Gana computadora \n");
y++;   
}
if (random == 1){
printf("La computadora eligio tijera \n");
printf("Gana jugador \n");
x++;
}
if(random == 2){
printf("La computadora eligio piedra \n");
printf("Empate \n");
}
break;
}    
}
else{
    goto inicio;
}
printf("Si deseas volver a jugar presiona 1 \n");
scanf ("%d", &resetear);
if (resetear == 1){
  goto inicio;  
}
else{
    printf("Gracias por jugar \n");
    
}
}