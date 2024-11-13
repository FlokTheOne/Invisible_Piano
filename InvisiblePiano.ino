#define PING_PIN 11
#define BUZZER_PIN 8

const int DO = 262;
const int RE = 294;
const int MI = 330;
const int FA = 349;
const int SOL = 392;
const int LA = 440;
const int SI = 493;

void setup() {
  Serial.begin(9600);
  pinMode(PING_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  pinMode(PING_PIN, OUTPUT);
  digitalWrite(PING_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(PING_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(PING_PIN, LOW);
  pinMode(PING_PIN, INPUT);
  
  long duration = pulseIn(PING_PIN, HIGH);
  long distance = duration / 58.2;
  
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance >= 5 && distance <= 10) {
    playNote(DO);
  } else if (distance > 10 && distance <= 15) {
    playNote(RE);
  } else if (distance > 15 && distance <= 20) {
    playNote(MI);
  } else if (distance > 20 && distance <= 25) {
    playNote(FA);
  } else if (distance > 25 && distance <= 30) {
    playNote(SOL);
  } else if (distance > 30 && distance <= 35) {
    playNote(LA);
  } else if (distance > 35 && distance <= 40) {
    playNote(SI);
  } else {
    noTone(BUZZER_PIN);
  }

  delay(500);
}

void playNote(int frequency) {
  tone(BUZZER_PIN, frequency);
}
