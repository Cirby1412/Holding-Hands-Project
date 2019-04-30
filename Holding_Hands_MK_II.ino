/*Holding Hands
  Two gloves stitched together with string and conductive thread.
  Each glove has two buttons that operates a motor near the wrist.
  Used to communicate nonverbally between two users. */

const int L1 = 11; // Runs left motor at high
const int L2 = 12; // Runs left motor at low
const int LM = A0; // Is left motor
const int R1 = 7; // Runs right motor at high
const int R2 = 9; // Runs right motor at low
const int RM = A3; // Is right motor

int buttonStateL1 = 0; //default button state
int buttonStateL2 = 0;
int buttonStateR1 = 0;
int buttonStateR2 = 0;


void setup() {
  pinMode(L1, INPUT_PULLUP);
  pinMode(L2, INPUT_PULLUP);
  pinMode(R1, INPUT_PULLUP);
  pinMode(R2, INPUT_PULLUP);
  pinMode(LM, OUTPUT);
  pinMode(RM, OUTPUT);
}

void loop() {
  // read the state of L1
  // and store it in the 'buttonStateL1' variable:
  buttonStateL1 = digitalRead(L1);

  // check if the pushbutton is pressed.
  // if it is, the buttonStateL1 is LOW:
  if (buttonStateL1 == LOW) {
    // turn L. motor on:
    digitalWrite(LM, HIGH);
  }
  else {
    // turn L. motor off:
    digitalWrite(LM, LOW);
  }

  // read the state of L2
  // and store it in the 'buttonStateL2' variable:
  buttonStateL2 = digitalRead(L2);

  // check if the pushbutton is pressed.
  // if it is, the buttonStateL2 is LOW:
  if (buttonStateL2 == LOW) {
    // turn L. motor on:
    analogWrite(LM, 191);
  }
  else {
    // turn L. motor off:
    analogWrite(LM, 0);
  }

  // read the state of R1
  // and store it in the 'buttonStateR1' variable:
  buttonStateR1 = digitalRead(R1);

  // check if the pushbutton is pressed.
  // if it is, the buttonStateL1 is LOW:
  if (buttonStateR1 == LOW) {
    // turn R. motor on:
    digitalWrite(RM, HIGH);
  }
  else {
    // turn R. motor off:
    digitalWrite(RM, LOW);
  }

  // read the state of R2
  // and store it in the 'buttonStateR2' variable:
  buttonStateR2 = digitalRead(R2);

  // check if the pushbutton is pressed.
  // if it is, the buttonStateR2 is LOW:
  if (buttonStateR2 == LOW) {
    // turn R. motor on:
    analogWrite(RM, 191);
  }
  else {
    // turn R. motor off:
    analogWrite(RM, 0);
  }
}
