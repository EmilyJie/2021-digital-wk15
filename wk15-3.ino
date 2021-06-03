#define NOTE_C3 131
#define NOTE_D3 147
#define NOTE_E3 165
#define NOTE_F3 175
#define NOTE_G3 196
#define NOTE_A3 220
#define NOTE_B3 247
#define NOTE_C4 262

int button1 = 0;
int button2 = 0;
int button3 = 0;
int button4 = 0;
int button5 = 0;
int button6 = 0;
int button7 = 0;
int button8 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  button1 = digitalRead(2);
    button2 = digitalRead(3);
    button3 = digitalRead(4);
    button4 = digitalRead(5);
    button5 = digitalRead(6);
    button6 = digitalRead(7);
    button7 = digitalRead(8);
    button8 = digitalRead(9);
  
   if(button1 == LOW){
      tone(10,NOTE_C3,100);
      delay(100);
      noTone(10);
    }else if(button2 == LOW){
      tone(10,NOTE_D3,100);
      delay(100);
      noTone(10);
    }else if(button3 == LOW){
      tone(10,NOTE_E3,100);
      delay(100);
      noTone(10);
    }else if(button4 == LOW){
      tone(10,NOTE_F3,100);
      delay(100);
      noTone(10);
    }else if(button5 == LOW){
      tone(10,NOTE_G3,100);
      delay(100);
      noTone(10);
    }else if(button6 == LOW){
      tone(10,NOTE_A3,100);
      delay(100);
      noTone(10);
    }else if(button7 == LOW){
      tone(10,NOTE_B3,100);
    delay(100);
      noTone(10);
    }else if(button8 == LOW){
      tone(10,NOTE_C4,100);
      delay(100);
      noTone(10);
    }

}
