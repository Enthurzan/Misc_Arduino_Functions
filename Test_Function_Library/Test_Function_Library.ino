#define letterArrayLength 100

void initialize(int baud) { //so that you don't have to write Serial.begin(baud)
  Serial.begin(baud);

}

void tab(int tabNumber) { //tabs the Serial Monitor by tabNumber space(s)
  for (int tabStart = 0; tabStart < tabNumber; tabStart++) {
    Serial.println("");

  }
}

void typeString(String phrase) {
  int typeSpeed = 100; //time to wait in milliseconds before typing next letter
  char letters [letterArrayLength] {}; //array to store chars in "phrase"
  phrase.toCharArray(letters, letterArrayLength); //Converts all chars in "phrase" to chars in array "letters"
  int phraseLength = phrase.length(); //sets int phraseLength to the length of parameter "phrase"
  for (int i = 0; i < phraseLength; i++) { //while i < phraseLength increase i by interval one - types letters 0 - phraseLength - 1
    Serial.print(letters[i]); //prints the i-th element of array "letters"
    delay(typeSpeed); //wait typeSpeed seconds before looping
  }
}

void waitSeconds(int seconds) { //Function for changing delay(milliseconds) to wait(seconds)
 delay(seconds * 1000); //converts the parameter seconds into milliseconds
}

void pinHigh(int pin) { //automatically sets pin to HIGH
  digitalWrite(pin, HIGH);
}

void pinLow(int pin) { //automatically sets pin to LOW
  digitalWrite(pin, LOW);
}

void Blink(int pin, int interval){
  pinHigh(pin);
  wait(interval);
  pinHigh(pin);
  wait(interval);
  
}

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
