# Ultrasonic Sensor with Servo and Buzzer Control

## Overview
Proyek ini menggunakan sensor ultrasonik, servo motor, dan buzzer untuk mendeteksi jarak objek dan menggerakkan servo serta mengaktifkan buzzer berdasarkan jarak tersebut. Saat objek terdeteksi dalam jarak tertentu, servo akan bergerak dan buzzer akan menyala.

## Components
- **Arduino**: Mikrokomputer yang digunakan untuk mengontrol semua komponen.
- **Servo Motor**: Menggerakkan mekanisme berdasarkan jarak yang terdeteksi.
- **Ultrasonic Sensor (HC-SR04)**: Mengukur jarak objek dengan memancarkan gelombang ultrasonik dan mengukur waktu yang dibutuhkan untuk menerima pantulan.
- **Buzzer**: Mengeluarkan bunyi sebagai indikasi adanya objek dalam jarak tertentu.

## Pin Configuration
- **Servo Motor**: Pin 13
- **Ultrasonic Sensor**:
  - Trig Pin: Pin 11
  - Echo Pin: Pin 12
- **Buzzer**: Pin 10

## Code Description

### Initialization
- Menyiapkan pin untuk output (servo, trig pin, buzzer) dan input (echo pin).
- Menginisialisasi komunikasi Serial untuk monitoring.

### Loop Function
- Mengirim sinyal ultrasonik melalui trig pin dan menerima pantulannya melalui echo pin.
- Menghitung jarak berdasarkan waktu perjalanan gelombang ultrasonik.
- Menampilkan jarak yang terukur pada Serial Monitor.
- Menggerakkan servo ke posisi tertentu dan mengaktifkan buzzer jika jarak objek berada dalam batas tertentu.

## How It Works

1. Saat proyek dinyalakan, servo akan bergerak ke posisi awal (180 derajat).
2. Sensor ultrasonik mengirimkan gelombang ultrasonik dan mengukur waktu yang dibutuhkan untuk menerima pantulannya untuk menghitung jarak objek.
3. Jika jarak objek kurang dari atau sama dengan 2 cm, servo akan bergerak ke posisi 90 derajat dan buzzer akan menyala.
4. Jika jarak objek lebih dari 2 cm, servo akan kembali ke posisi 180 derajat dan buzzer akan mati.
5. Informasi jarak akan ditampilkan di Serial Monitor secara berkala.
