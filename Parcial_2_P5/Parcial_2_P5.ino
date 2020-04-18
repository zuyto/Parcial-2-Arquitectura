
/*************/
/*  Encendido de Led por medio de pulsador con interrupciones externas HW */
/*************/

/*** Mauro Ferney Martines Quiroga ***/


/*** Profesor: Jonathan Pardo   ***/



/*** se inicializan variables  ***/

int pinButton = 7;
int LED = 12;
int stateLED = LOW;
int stateButton;
int previous = LOW;
long time = 0;
long debounce = 200;

 
/*** se definen los pines como entrada (Pulsador) y  salida(Led) ***/
void setup() {
  pinMode(pinButton, INPUT);
  pinMode(LED, OUTPUT);
}

 /*** si se presiona el botón (Pulsador) el LED está apagado o viceversa ***/

void loop() {
  stateButton = digitalRead(pinButton);  
  if(stateButton == HIGH && previous == LOW && millis() - time > debounce) {
    if(stateLED == HIGH){
      stateLED = LOW; 
    } else {
       stateLED = HIGH; 
    }
    time = millis();
  }
  digitalWrite(LED, stateLED);
  previous == stateButton;
}
