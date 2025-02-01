#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

ESP8266WebServer server(80);

void setup() {
  Serial.begin(9600);

  // Atur NodeMCU sebagai Access Point
  WiFi.softAP("IR64", "12345678");

  IPAddress myIP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(myIP);

  // Konfigurasi endpoint
  server.on("/teamA", handleTeamA);
  server.on("/teamB", handleTeamB);
  server.on("/round", handleRound);
  server.on("/start", handleStart);
  server.on("/pause", handlePause);
  server.on("/reset", handleReset);
  server.on("/setA", handleSetA);
  server.on("/setB", handleSetB);
  server.on("/TA1", handleTA1);
  server.on("/TA2", handleTA2);
  server.on("/TB1", handleTB1);
  server.on("/TB2", handleTB2);
  server.on("/FA1", handleFA1);
  server.on("/FA2", handleFA2);
  server.on("/FA3", handleFA3);
  server.on("/FA4", handleFA4);
  server.on("/FA5", handleFA5);
  server.on("/FA6", handleFA6);
  server.on("/FA7", handleFA7);
  server.on("/FA8", handleFA8);
  server.on("/FA9", handleFA9);
  server.on("/FA10", handleFA10);
  server.on("/FA11", handleFA11);
  server.on("/FA12", handleFA12);

  // Menambahkan handler untuk AP1-AP12
  server.on("/AP1", handleAP1);
  server.on("/AP2", handleAP2);
  server.on("/AP3", handleAP3);
  server.on("/AP4", handleAP4);
  server.on("/AP5", handleAP5);
  server.on("/AP6", handleAP6);
  server.on("/AP7", handleAP7);
  server.on("/AP8", handleAP8);
  server.on("/AP9", handleAP9);
  server.on("/AP10", handleAP10);
  server.on("/AP11", handleAP11);
  server.on("/AP12", handleAP12);
  server.on("/timeout", handleTimeout);
  server.on("/start1", handleStart1);
  server.on("/detik", handledetik);
  server.on("/menit", handlemenit);

  server.begin();
  Serial.println("HTTP server started");
}

void loop() {
  server.handleClient();
}

void handleTeamA() {
  String teamA = server.arg("value");
  Serial.print("teamA: ");
  Serial.println(teamA);
  server.send(200, "text/plain", "OK");
}

void handleTeamB() {
  String teamB = server.arg("value");
  Serial.print("teamB: ");
  Serial.println(teamB);
  server.send(200, "text/plain", "OK");
}

void handleRound() {
  String round = server.arg("value");
  Serial.print("round: ");
  Serial.println(round);
  server.send(200, "text/plain", "OK");
}

void handleStart() {
  Serial.println("start:1"); // Mengirimkan perintah start ke Arduino
  server.send(200, "text/plain", "Timer started");
}

void handlePause() {
  Serial.println("pause:1"); // Mengirimkan perintah pause ke Arduino
  server.send(200, "text/plain", "Timer paused");
}

void handleReset() {
  Serial.println("reset:1"); // Mengirimkan perintah reset ke Arduino
  server.send(200, "text/plain", "Timer reset");
}

void handleSetA() {
  String setA = server.arg("value");
  Serial.print("setA: ");
  Serial.println(setA);
  server.send(200, "text/plain", "OK");
}

void handleSetB() {
  String setB = server.arg("value");
  Serial.print("setB: ");
  Serial.println(setB);
  server.send(200, "text/plain", "OK");
}

void handleTA1() {
  String ta1 = server.arg("value");
  Serial.print("TA1: ");
  Serial.println(ta1);
  server.send(200, "text/plain", "OK");
}

void handleTA2() {
  String ta2 = server.arg("value");
  Serial.print("TA2: ");
  Serial.println(ta2);
  server.send(200, "text/plain", "OK");
}

void handleTB1() {
  String tb1 = server.arg("value");
  Serial.print("TB1: ");
  Serial.println(tb1);
  server.send(200, "text/plain", "OK");
}

void handleTB2() {
  String tb2 = server.arg("value");
  Serial.print("TB2: ");
  Serial.println(tb2);
  server.send(200, "text/plain", "OK");
}

void handleFA1() {
  String fa1 = server.arg("value");
  Serial.print("FA1=");
  Serial.println(fa1);
  server.send(200, "text/plain", "OK");
}

void handleFA2() {
  String fa2 = server.arg("value");
  Serial.print("FA2=");
  Serial.println(fa2);
  server.send(200, "text/plain", "OK");
}

void handleFA3() {
  String fa3 = server.arg("value");
  Serial.print("FA3=");
  Serial.println(fa3);
  server.send(200, "text/plain", "OK");
}

void handleFA4() {
  String fa4 = server.arg("value");
  Serial.print("FA4=");
  Serial.println(fa4);
  server.send(200, "text/plain", "OK");
}

void handleFA5() {
  String fa5 = server.arg("value");
  Serial.print("FA5=");
  Serial.println(fa5);
  server.send(200, "text/plain", "OK");
}

void handleFA6() {
  String fa6 = server.arg("value");
  Serial.print("FA6=");
  Serial.println(fa6);
  server.send(200, "text/plain", "OK");
}

void handleFA7() {
  String fa7 = server.arg("value");
  Serial.print("FA7=");
  Serial.println(fa7);
  server.send(200, "text/plain", "OK");
}

void handleFA8() {
  String fa8 = server.arg("value");
  Serial.print("FA8=");
  Serial.println(fa8);
  server.send(200, "text/plain", "OK");
}

void handleFA9() {
  String fa9 = server.arg("value");
  Serial.print("FA9=");
  Serial.println(fa9);
  server.send(200, "text/plain", "OK");
}

void handleFA10() {
  String fa10 = server.arg("value");
  Serial.print("FA10=");
  Serial.println(fa10);
  server.send(200, "text/plain", "OK");
}

void handleFA11() {
  String fa11 = server.arg("value");
  Serial.print("FA11=");
  Serial.println(fa11);
  server.send(200, "text/plain", "OK");
}

void handleFA12() {
  String fa12 = server.arg("value");
  Serial.print("FA12=");
  Serial.println(fa12);
  server.send(200, "text/plain", "OK");
}

// Menambahkan handler untuk AP1-AP12
void handleAP1() {
  String ap1 = server.arg("value");
  Serial.print("AP1=: ");
  Serial.println(ap1);
  server.send(200, "text/plain", "OK");
}

void handleAP2() {
  String ap2 = server.arg("value");
  Serial.print("AP2=: ");
  Serial.println(ap2);
  server.send(200, "text/plain", "OK");
}

void handleAP3() {
  String ap3 = server.arg("value");
  Serial.print("AP3=: ");
  Serial.println(ap3);
  server.send(200, "text/plain", "OK");
}

void handleAP4() {
  String ap4 = server.arg("value");
  Serial.print("AP4=: ");
  Serial.println(ap4);
  server.send(200, "text/plain", "OK");
}

void handleAP5() {
  String ap5 = server.arg("value");
  Serial.print("AP5=: ");
  Serial.println(ap5);
  server.send(200, "text/plain", "OK");
}

void handleAP6() {
  String ap6 = server.arg("value");
  Serial.print("AP6=: ");
  Serial.println(ap6);
  server.send(200, "text/plain", "OK");
}

void handleAP7() {
  String ap7 = server.arg("value");
  Serial.print("AP7=: ");
  Serial.println(ap7);
  server.send(200, "text/plain", "OK");
}

void handleAP8() {
  String ap8 = server.arg("value");
  Serial.print("AP8=: ");
  Serial.println(ap8);
  server.send(200, "text/plain", "OK");
}

void handleAP9() {
  String ap9 = server.arg("value");
  Serial.print("AP9=: ");
  Serial.println(ap9);
  server.send(200, "text/plain", "OK");
}

void handleAP10() {
  String ap10 = server.arg("value");
  Serial.print("AP10=: ");
  Serial.println(ap10);
  server.send(200, "text/plain", "OK");
}

void handleAP11() {
  String ap11 = server.arg("value");
  Serial.print("AP11=: ");
  Serial.println(ap11);
  server.send(200, "text/plain", "OK");
}

void handleAP12() {
  String ap12 = server.arg("value");
  Serial.print("AP12=: ");
  Serial.println(ap12);
  server.send(200, "text/plain", "OK");
}
void handleTimeout() {
  String timeout = server.arg("value");
  Serial.print("Timeout set to: ");
  Serial.println(timeout); // Menampilkan nilai timeout yang diterima

  // Mengirimkan nilai timeout ke Arduino
  Serial.println("timeout:" + timeout);
  // Mengirimkan respons HTTP
  server.send(200, "text/plain", "Timeout updated and timer started");
}

void handleStart1() {
  Serial.println("mulai:1"); // Mengirimkan perintah start ke Arduino
  server.send(200, "text/plain", "Timer started");
}

void handlemenit() {
  String menit = server.arg("value");  // Ambil nilai dari URL parameter "value"
  Serial.print("menit: ");
  Serial.println(menit);  // Menampilkan nilai menit yang diterima
  server.send(200, "text/plain", "Menit updated");
}

void handledetik() {
  String detik = server.arg("value");  // Ambil nilai dari URL parameter "value"
  Serial.print("detik: ");
  Serial.println(detik);  // Menampilkan nilai detik yang diterima
  server.send(200, "text/plain", "Detik updated");
}

