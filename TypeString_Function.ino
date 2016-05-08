#define letterArrayLength 100

void initialize() { //I'm lazy
  Serial.begin(9600);

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
void setup() {
  initialize();
  typeString("Hello World");
  tab(1);
  typeString("Welcome, Enthurzan, to the Serial Monitor. How do you do?");
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
