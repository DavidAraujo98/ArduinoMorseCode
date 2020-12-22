
int led = D2;
int dot_t = 250;
int tab_t = 1000;

void light (int);

void setup() {
  pinMode(led, OUTPUT); // Initialize the LED_BUILTIN pin as an output
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  String ph = "Hello World";
  ph.toLowerCase();
  ph = ph + " ";

  for ( int i = 0; i < ph.length(); i++ ) {
    Serial.println(ph.charAt(i));
    switch (ph.charAt(i)) {
      case ' ':
        delay(tab_t);
        break;
      case 'a' :
        light(dot_t); // dot
        light(tab_t);  // bar
        break;
      case 'b' :
        light(tab_t);
        light(dot_t);
        light(dot_t);
        light(dot_t);
        break;
      case 'c' :
        light(tab_t);
        light(dot_t);
        light(tab_t);
        light(dot_t);
        break;
      case 'd' :
        light(tab_t);
        light(dot_t);
        light(dot_t);
        break;
      case 'e' :
        light(dot_t);
        break;
      case 'f' :
        light(dot_t);
        light(dot_t);
        light(tab_t);
        light(dot_t);
        break;
      case 'g' :
        light(tab_t);
        light(tab_t);
        light(dot_t);
        break;
      case 'h' :
        light(dot_t);
        light(dot_t);
        light(dot_t);
        light(dot_t);
        break;
      case 'i' :
        light(dot_t);
        light(dot_t);
        break;
      case 'j' :
        light(dot_t);
        light(tab_t);
        light(tab_t);
        light(tab_t);
        break;
      case 'k' :
        light(tab_t);
        light(dot_t);
        light(tab_t);
        break;
      case 'l' :
        light(dot_t);
        light(tab_t);
        light(dot_t);
        light(dot_t);
        break;
      case 'm' :
        light(tab_t);
        light(tab_t);
        break;
      case 'n' :
        light(tab_t);
        light(dot_t);
        break;
      case 'o' :
        light(tab_t);
        light(tab_t);
        light(tab_t);
        break;
      case 'p' :
        light(dot_t);
        light(tab_t);
        light(tab_t);
        light(dot_t);
        break;
      case 'q' :
        light(tab_t);
        light(tab_t);
        light(dot_t);
        light(tab_t);
        break;
      case 'r' :
        light(dot_t);
        light(tab_t);
        light(dot_t);
        break;
      case 's' :
        light(dot_t);
        light(dot_t);
        light(dot_t);
        break;
      case 't' :
        light(tab_t);
        break;
      case 'u' :
        light(dot_t);
        light(dot_t);
        light(tab_t);
        break;
      case 'v' :
        light(dot_t);
        light(dot_t);
        light(dot_t);
        light(tab_t);
        break;
      case 'w' :
        light(dot_t);
        light(tab_t);
        light(tab_t);
        break;
      case 'x' :
        light(tab_t);
        light(dot_t);
        light(dot_t);
        light(tab_t);
        break;
      case 'y' :
        light(tab_t);
        light(dot_t);
        light(tab_t);
        light(tab_t);
        break;
      case 'z' :
        light(tab_t);
        light(tab_t);
        light(dot_t);
        light(dot_t);
        break;
      case '1' :
        light(dot_t);
        light(tab_t);
        light(tab_t);
        light(tab_t);
        light(tab_t);
        break;
      case '2' :
        light(dot_t);
        light(dot_t);
        light(tab_t);
        light(tab_t);
        light(tab_t);
        break;
      case '3' :
        light(dot_t);
        light(dot_t);
        light(dot_t);
        light(tab_t);
        light(tab_t);
        break;
      case '4' :
        light(dot_t);
        light(dot_t);
        light(dot_t);
        light(dot_t);
        light(tab_t);
        break;
      case '5' :
        light(dot_t);
        light(dot_t);
        light(dot_t);
        light(dot_t);
        light(dot_t);
        break;
      case '6' :
        light(tab_t);
        light(dot_t);
        light(dot_t);
        light(dot_t);
        light(dot_t);
        break;
      case '7' :
        light(tab_t);
        light(tab_t);
        light(dot_t);
        light(dot_t);
        light(dot_t);
        break;
      case '8' :
        light(tab_t);
        light(tab_t);
        light(tab_t);
        light(dot_t);
        light(dot_t);
        break;
      case '9' :
        light(tab_t);
        light(tab_t);
        light(tab_t);
        light(tab_t);
        light(dot_t);
        break;
      case '0' :
        light(tab_t);
        light(tab_t);
        light(tab_t);
        light(tab_t);
        light(tab_t);
        break;
    }
	  delay(tab_t); // space bettwen letters that when combine with a white space creates a one second intervale meaning 1 second interval between words
  }
}

void light(int x) {
  digitalWrite(led, HIGH);
  delay(x);
  digitalWrite(led, LOW);
  delay(dot_t); // inter elements of same character interval
}
