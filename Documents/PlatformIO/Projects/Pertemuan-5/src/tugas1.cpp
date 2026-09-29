#include <WiFi.h>
const char* ssid = "Lmao";
const char* pass = "lmaooooo";
void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, pass);
  Serial.println("Connecting");
  while (WiFi.status() != WL_CONNECTED) {
  delay(100);
  Serial.print(".");
}
}
void loop() {
  Serial.println("WiFi Connected!");
  Serial.println(WiFi.localIP());
}