int sensorPin = A0;  // Pin sensor suhu LM35 terhubung ke pin A0

void Mulai() {
  Serial.begin(9600);  // Inisialisasi serial komunikasi
}

void Program() {
  int sensorValue = analogRead(sensorPin);  // Baca nilai dari pin sensor
  float voltage = sensorValue * (5.0 / 1023.0);  // Konversi nilai analog ke volt
  float temperature = (voltage - 0.5) * 100;  // Konversi volt ke derajat Celcius
  Serial.print("Suhu: ");  // Cetak label "Suhu"
  Serial.print(temperature);  // Cetak suhu
  Serial.println(" derajat Celcius");  // Cetak satuan suhu
  delay(1000);  // Tunggu 1 detik sebelum membaca suhu selanjutnya
}
