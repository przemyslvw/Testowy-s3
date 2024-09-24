#include <Arduino.h>

const int ledPin = LED_BUILTIN;  // Użyj odpowiedniego pinu dla diody LED

// Definiowanie kolorów
#define COLOR_RESET   "\033[0m"  // Reset koloru
#define COLOR_RED     "\033[31m"  // Czerwony
#define COLOR_GREEN   "\033[32m"  // Zielony
#define COLOR_BLUE    "\033[34m"  // Niebieski

void setup() {
    Serial.begin(115200);  // Ustaw prędkość komunikacji szeregowej
    pinMode(ledPin, OUTPUT);  // Ustaw pin diody LED jako wyjście
    Serial.println(COLOR_GREEN "I (0) example: log -> USB" COLOR_RESET);
    Serial.println("example: print -> stdout");
    Serial.println("example: print -> stderr");
}

void loop() {
    // Miganie na czerwono
    digitalWrite(ledPin, HIGH);  // Włącz diodę
    Serial.println(COLOR_RED "Dioda LED: Czerwony" COLOR_RESET);
    delay(5000);
    digitalWrite(ledPin, LOW);  // Wyłącz diodę
    delay(500);

    // Dodatkowe logi
    Serial.println(COLOR_GREEN "I (1437189) example: log -> USB" COLOR_RESET);
    Serial.println("example: print -> stdout");
    Serial.println("example: print -> stderr");
    delay(500);
}
