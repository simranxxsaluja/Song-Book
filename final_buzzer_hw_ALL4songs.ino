int pb1 = 1;
int pb2 = 2;
int pb3 = 3;
int pb4 = 4;
int buzz = 7;

void setup() 
{
  pinMode(pb1,INPUT);
  pinMode(pb2,INPUT);
  pinMode(pb3,INPUT);
  pinMode(pb4,INPUT);
  pinMode(buzz, OUTPUT);

}

void loop() 
{
  if (digitalRead(pb1) == LOW)
  {
      //opening sequence by txt
    tone(buzz,932.3); //Bb5
    delay(450);
    noTone(buzz);
    delay(20);
    tone(buzz,932.3); //Bb5
    delay(200);
    noTone(buzz);
    delay(50);
    tone(buzz,932.3); //Bb5
    delay(200);
    noTone(buzz);
    delay(50);
    tone(buzz,932.3); //Bb5
    delay(200);
    tone(buzz,830.6); //Ab5
    delay(200);
    tone(buzz,740); //F#5
    delay(200);
    tone(buzz,698.5); //F5
    delay(200);
    tone(buzz,830.6); //Ab5
    delay(400);
    tone(buzz,740); //F#5
    delay(200);
    tone(buzz,627.3); //Eb5
    delay(230);
    tone(buzz,830.6); //Ab5
    delay(400);
    tone(buzz,740); //F#5
    delay(200);
    tone(buzz,627.3); //Eb5
    delay(230);
    tone(buzz,830.6); //Ab5
    delay(400);
    tone(buzz,740); //F#5
    delay(200);
    tone(buzz,627.3); //Eb5
    delay(450);
    noTone(buzz);
    delay(20);
    tone(buzz,627.3); //Eb5
    delay(230);
    tone(buzz,740); //F#5
    delay(200);
    tone(buzz,627.3); //Eb5
    delay(230);
     tone(buzz,830.6); //Ab5
    delay(400);
    tone(buzz,740); //F#5
    delay(200);
    tone(buzz,627.3); //Eb5
    delay(230);
    tone(buzz,830.6); //Ab5
    delay(400);
    tone(buzz,740); //F#5
    delay(200);
    tone(buzz,627.3); //Eb5
    delay(230);
    tone(buzz,830.6); //Ab5
    delay(400);
    tone(buzz,740); //F#5
    delay(200);
    tone(buzz,627.3); //Eb5
    delay(450);
    noTone(buzz);
    delay(20);
    tone(buzz,627.3); //Eb5
    delay(230);
    tone(buzz,740); //F#5
    delay(200);
    tone(buzz,627.3); //Eb5
    delay(230);
    tone(buzz,932.3); //Bb5
    delay(450);
    tone(buzz,830.6); //Ab5
    delay(200);
    tone(buzz,627.3); //Eb5
    delay(200);
    tone(buzz,932.3); //Bb5
    delay(450);
    tone(buzz,830.6); //Ab5
    delay(200);
    tone(buzz,627.3); //Eb5
    delay(200);
    tone(buzz,932.3); //Bb5
    delay(450);
    tone(buzz,830.6); //Ab5
    delay(200);
    tone(buzz,627.3); //Eb5
    delay(450);
    noTone(buzz);
    delay(20);
    tone(buzz,627.3); //Eb5
    delay(230);
    tone(buzz,740); //F#5
    delay(200);
    tone(buzz,627.3); //Eb5
    delay(230);
    tone(buzz,932.3); //Bb5
    delay(350);
    tone(buzz,830.6); //Ab5
    delay(350);
    tone(buzz,740); //F#5
    delay(350);
    tone(buzz,698.5); //F5
    delay(150);
    noTone(buzz);
    delay(20);
    tone(buzz,698.5); //F5
    delay(200);
    tone(buzz,830.6); //Ab5
    delay(350);
    tone(buzz,740); //F#5
    delay(350);
    tone(buzz,698.5); //F5
    delay(350);
    tone(buzz,627.3); //Eb5
    delay(350);
    
  }
  else if (digitalRead(pb2) == LOW)
  {
    //red lights by straykids
    tone(buzz,246.9); //B3
    delay(175);
    tone(buzz,293.7); //D4
    delay(350);
    tone(buzz,329.6); //E4
    delay(175);
    tone(buzz,392); //G4
    delay(400);
    tone(buzz,329.6); //E4
    delay(350);
    noTone(buzz);
    delay(20);
    tone(buzz,329.6); //E4
    delay(350);
    tone(buzz,246.9); //B3
    delay(175);
    tone(buzz,293.7); //D4
    delay(350);
    tone(buzz,329.6); //E4
    delay(175);
    tone(buzz,392); //G4
    delay(400);
    tone(buzz,329.6); //E4
    delay(350);
    noTone(buzz);
    delay(20);
    tone(buzz,329.6); //E4
    delay(350);
  
    tone(buzz,246.9); //B3
    delay(100);
    tone(buzz,293.7); //D4
    delay(350);
    tone(buzz,329.6); //E4
    delay(100);
    tone(buzz,392); //G4
    delay(400);
    noTone(buzz);
    delay(20);
    tone(buzz,392); //G4
    delay(400);
    noTone(buzz);
    delay(20);
    tone(buzz,392); //G4
    delay(350);
    tone(buzz,440); //A4
    delay(250);
    tone(buzz,392); //G4
    delay(350);
    noTone(buzz);
    delay(20);
    tone(buzz,392); //G4
    delay(400);
    tone(buzz,370); //F#4
    delay(350);
  }

  else if (digitalRead(pb3) == LOW)
  {
    //river flows in you by yiruma
    tone(buzz, 440); // A4
    delay(200);
    tone(buzz, 554); // C#5
    delay(200);
    tone(buzz, 880); // A5
    delay(500);
    tone(buzz, 830.6); // G#5
    delay(200);
    tone(buzz, 880); // A5
    delay(500);
    tone(buzz, 440); // A4
    delay(250);
    tone(buzz, 830.6); // G#5
    delay(250); 
    tone(buzz, 880); // A5
    delay(250);
    tone(buzz, 440); // A4
    delay(350);
    tone(buzz, 659.3); // E5
    delay(350);
    tone(buzz, 880); // A5
    delay(350);
    tone(buzz, 440); // A4
    delay(400);
    tone(buzz, 587.3); // D5
    delay(250);
    tone(buzz, 440); // A4
    delay(400);
    tone(buzz, 554); // C#5
    delay(500);
    tone(buzz, 587.3); // D5
    delay(500);
    tone(buzz, 659.3); // E5
    delay(500);
    tone(buzz, 554); // C#5
    delay(500);
    tone(buzz, 466.2); // B4
    delay(500);
  }

  else if (digitalRead(pb3) == LOW)
  {
    //our summer by txt
    tone(buzz, 590, 500); // High High D
    delay(500);
    tone(buzz, 349.228, 500); // High F
    delay(450);
    tone(buzz,391.995, 500); // High G 
    delay(700);
    tone(buzz,391.995, 500); // High G 
    delay(700);
    tone(buzz, 587.330, 500); // High High D
    delay(500);
    tone(buzz, 440, 500); // High A
    delay(550);
    tone(buzz, 440, 500); // High A
    delay(300);
    tone(buzz, 493.883, 500); // High B
    delay(300);
    tone(buzz, 440, 500); // High A
    delay(300);
    tone(buzz,391.995, 500); // High G 
    delay(450);
    tone(buzz, 590, 500); // High High D
    delay(500);
    tone(buzz, 349.228, 500); // High F
    delay(450);
    tone(buzz,391.995, 500); // High G 
    delay(800);
    tone(buzz,391.995, 500); // High G 
    delay(300);
    tone(buzz, 590, 500); // High High D
    delay(300);
    tone(buzz, 493.883, 500); // High B
    delay(300);
    tone(buzz, 440, 500); // High A
    delay(275);
    noTone(buzz);
    delay(275);
    tone(buzz, 440, 500); // High A
    delay(275);
    tone(buzz, 493.883, 500); // High B
    delay(300);
    tone(buzz, 440, 500); // High A
    delay(500);
    tone(buzz,391.995, 500); // High G 
    delay(450);
 
  }
}
