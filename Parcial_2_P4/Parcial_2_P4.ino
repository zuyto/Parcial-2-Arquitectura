
/*************/
/*  SEMAFORO usando interrupciones Delay() */
/*************/

/*** Mauro Ferney Martinez Quiroga ***/


/*** Profesor: Jonathan Pardo   ***/


/*** se nombran los pines con su respectivo color ***/

int LED_ROJO=10;
int LED_AMARILLO=11;
int LED_VERDE=12;

/*** variable para el contador del led verde para intermitencia ***/
int i=0;

void setup (){
  /*** se definen los led como pines de salida ***/
  
  pinMode(LED_ROJO,OUTPUT);
  pinMode(LED_AMARILLO,OUTPUT);
  pinMode(LED_VERDE,OUTPUT);
 }
  
void loop(){
  /*** Se iniciaalizan los pines en LOW ***/
digitalWrite(LED_ROJO,LOW);
digitalWrite(LED_AMARILLO,LOW);
digitalWrite(LED_VERDE,LOW);
delay(10);

/*** se enciende el led verde durante 2 segundos ***/
digitalWrite(LED_VERDE,HIGH);
delay(2000);

i=0;

/*** PLUS del desarrollo ***/

/*** el led verde titila 4 veces con un tiempo de 0.3 segundos encendido y 0.3 apagado ***/

while (i<5){
  digitalWrite(LED_VERDE,LOW);
  delay(300);
  digitalWrite(LED_VERDE,HIGH);
  delay(300);
  i=i+1;  
  }


/*** Apagamos el Led Verde y encendemos el Led Amarillo por 2 segundos ***/

digitalWrite(LED_VERDE,LOW);
digitalWrite(LED_AMARILLO,HIGH);
delay(2000);

/*** apagamos el Led amarillo y encendemos Led Rojo por 2 segundos  ***/

digitalWrite(LED_AMARILLO,LOW);//se apaga el led amarillo
digitalWrite(LED_ROJO,HIGH);//se enciende el led rojo por 2 segundos
delay(2000); 
}
