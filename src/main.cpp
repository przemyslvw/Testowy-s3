#include <Adafruit_NeoPixel.h>

#define PIN        48  // Pin do którego podłączona jest dioda WS2812B
#define NUMPIXELS   1   // Liczba diod LED (zmień w zależności od twojego projektu)

// Adafruit_NeoPixel strip(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  Serial.begin(115200);    // Inicjalizacja portu szeregowego
  while (!Serial) {
    ; // Czekaj, aż port szeregowy zostanie zainicjalizowany
  }
  // strip.begin();           // Inicjalizacja paska LED
  // strip.show();            // Wyświetlenie domyślnych wartości
  Serial.println("Setup complete");
  pixels.begin();
}
void loop() {
  // Efekt oddychania
  for (int brightness = 0; brightness <= 255; brightness++) {
    pixels.setPixelColor(0, pixels.Color(brightness, 0, 0)); // Czerwony
    pixels.show();
    delay(10);
  }
  delay(1000);
  //kounikat wdeeeeeech
  Serial.println("Wdeeeeeeeeeeech");
  for (int brightness = 255; brightness >= 0; brightness--) {
    pixels.setPixelColor(0, pixels.Color(brightness, 0, 0)); // Czerwony
    pixels.show();
    delay(10);
  }
    //kounikat Wydech
  Serial.println("Wydeeeeeeeeeeech");
  delay(1000);
}