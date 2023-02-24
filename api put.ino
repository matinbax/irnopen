#include <WiFi.h>;
#include <HTTPClient.h>;
#include <ArduinoJson.h>;
const char* ssid = "Matin_Bax";
const char* password = "matin123";
char jsonOutput[128];

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  Serial.print("Connecting to WiFi");

  while (WiFi.status()  != WL_CONNECTED)  {
    Serial.print(".");
    delay(500);
  }

Serial.println("\nConnected to the WiFi network");
Serial.print("IP address: ");
Serial.println(WiFi.localIP());
}

void loop() {
if ((WiFi.status()  == WL_CONNECTED))
{
long rnd = random(1, 10);
HTTPClient client;

client.begin("http://194.87.23.99:12332/api/Books/2");
client.addHeader("Content-Type", "application/json");

const size_t CAPACITY = JSON_OBJECT_SIZE(3);
StaticJsonDocument<CAPACITY> doc;

JsonObject obj = doc.to<JsonObject>();

//obj["id"] = 2;
obj["title"] = "ardeshir";
obj["description"] = "electronic";
obj["amount"] = "aaaa";

serializeJson(doc, jsonOutput);
Serial.println(jsonOutput);

int httpcode = client.PUT(String(jsonOutput));

if (httpcode > 0){
 String payload = client.getString();
 Serial.println(payload);
 client.end();
}
//}
else 
{
  Serial.println("Connection lost");
}
}
delay(10000);
}
