#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_WORDS 23
const char* get_random_word(void);
const char *word_collection[MAX_WORDS]= {
                    "este","es","un","banco","de",
                    "palabras","sientase","en","libertad",
                    "de","agregar","la","cantidad","de",
                    "palabras","que","usted","desee","hasta",
                    "un","maximo","de","MAX_WORDS"
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
inicio:
int x;
char nombre[20];
    const char* palabra_elegida = get_random_word();  
    scanf("%d", &x);    
printf("1. Empezar Juego\n");
printf("2. Ver Instrucciones\n");
printf("3. About\n");
printf("4. Salir\n");
scanf("%d", &x);
if (x >= 1 && x <=4){    
if(x == 1){
printf("Introduzca su nombre (20 letras maximo)");
scanf("%s", &nombre);
printf("Jugador: %s", y);
printf("Intentos: %d/10", s);
printf("Aciertos: %d", z);
strlen(palabra_elegida);
for(int q = 0; q<palabra_elegida; q++){






}  
}
else if(x == 2){
printf("El objetivo del juego es: Adivinar la palabra que le mostraremos");
goto inicio;
}
else if(x == 3){
printf("Hecho por Pablo Velasquez y Carmen Xiloj\n");
printf("Correo electronico: pablovelasquez@ufm.edu y carmenxiloj@ufm.edu");
goto inicio;


}
else{
exit(0);    
}
    // comparemos 2 strings. puede remover estas lineas.
    // char str1[] = "abcd", str2[] = "abcd", str3[]="abCd";
    // printf("strcmp(str1, str2) = %d\n", strcmp(str1,str2));
    // printf("strcmp(str1, str2) = %d\n", strcmp(str1,str3));

   /*
        Insert your code here
    */
}
    return 0;
}