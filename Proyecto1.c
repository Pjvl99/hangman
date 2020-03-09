#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void clearscreen()
{
    system("@cls||clear");
}
#define MAX_WORDS 23
const char* get_random_word(void);
const char *word_collection[MAX_WORDS]= {
                    "almuerzo","hola","estufa","banco","escrito",
                    "mariposa","trunks","dragon","libertad",
                    "perro","dar","amor","hack","madre",
                    "padre","pera","diez","desayuno","cena",
                    "cobra","rosa","raul","terminar"
                    };
const char* get_random_word(void){
    // seed the random generator.
    srand ( time (0) );
    // obtain a 0 < randon number < MAX_WORDS
    int random_position = rand() % MAX_WORDS;
    //printf("Random number is: %i\n", random_position);
    return word_collection[random_position];
}

int main(){
    int x;
    int z = 0;
    int s = 0;
    int y = 0;
    int p = 0;
char letra[40];
  
    int q = 0;
    int l = 0;
int palabralargo;
int largocaracter;
const char nombre[20];
char largo[q];
char largo_2[q];
    const char* palabra_elegida = get_random_word();  
inicio:
printf("1. Empezar Juego\n");
printf("2. Ver Instrucciones\n");
printf("3. About\n");
printf("4. Salir\n");
scanf("%d", &x);
if (x >= 1 && x <=4){    
if(x == 1){
printf("Ingrese nombre del jugador\n");
scanf("%s", &nombre);
printf("Jugador: %s\n", nombre);
printf("Intentos: %d/10\n", s);
printf("Aciertos: %d\n", z);
palabralargo = strlen(palabra_elegida);
for(; q<palabralargo; q++){
largo[q] = '_';
printf("%c", largo[q]);
}
printf("\n\n");
goto juego;

}
else if(x == 2){
printf("El objetivo del juego es: Adivinar la palabra que le mostraremos\n");
goto inicio;
}
else if(x == 3){
printf("Hecho por Pablo Velasquez y Carmen Xiloj\n");
printf("Correo electronico: pablovelasquez@ufm.edu y carmenxiloj@ufm.edu\n");
goto inicio;
}
else{
exit(0);    
}
juego:
printf("Ingrese letra/palabra: ");
scanf("%s", letra);
largocaracter = strlen(letra);
 if(largocaracter == 1){
for(; p < palabralargo; p++){
if(letra[0] == palabra_elegida[p]){
largo[p] = letra[0];
p = p*0;
z++;
goto otro;
}
}
p=p*0;
printf("Caracter incorrecto, introduzca otro\n");
s++;
goto perdio;
}
else{	
contador:
for(int a = 0; a<largocaracter;){
for(; l<palabralargo; l++){
if(letra[a] == palabra_elegida[l]){
largo[l] = letra[a];
l = l*0;
a++;
z++;
goto contador;
}
}
s++;
a++;
printf("Caracter incorrecto\n");  
}
goto perdio;
}


otro:
printf("Jugador: %s\n", nombre);
printf("Intentos: %d/10\n", s);
printf("Aciertos: %d\n", z);
for(; y<palabralargo; y++){
printf("%c", largo[y]);
}
printf("\n\n");

y = y*0;
goto gano;
perdio:
if(s ==> 10){
    system("cls");
printf("###### GAME OVER ######\n");
printf("Palabra a adivinar: %s\n", palabra_elegida);
printf("Jugador: %s\n", nombre);
printf("Intentos 10/10\n");
return 0;    
}
printf("Jugador: %s\n", nombre);
printf("Intentos: %d/10\n", s);
printf("Aciertos: %d\n", z);
for(; y<palabralargo; y++){
printf("%c", largo[y]);
}
printf("\n\n");
y=y*0;
goto gano;
gano:
if(z == palabralargo){
printf("###### GANO ######\n");
printf("Palabra adivinada: %s\n", palabra_elegida);
printf("Jugador: %s\n", nombre);
printf("Intentos %d/10", s);
return 0;    
}
goto juego;
}
}
