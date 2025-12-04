int ledler[] = {
  2,
  3,
  4,
  5,
  6,
  7
}; //Değişkenleri belirttiğimiz bir dizi tanımlıyoruz.
void setup() {
  for (int i = 0; i < 6; i++) { //For döngüsünün 6 kez tekrarlanmasını istiyoruz.
    pinMode(ledler[i], OUTPUT); //i değişkenlerini "çıkış" olarak tanımlıyoruz.
  }
}
void loop() {
  for (int i = 0; i < 6; i++) {
    digitalWrite(ledler[i], HIGH);
    delay(20);
    digitalWrite(ledler[i], LOW);
  } //İlk ledden beşinci lede kadar ledler sırasıyla yanıyor. Yani döngüde ilk led yanar, söner ve ikinci led yanar. İkinci led söndüğünde ise üçüncü led yanar ve döngü bu şekilde devam eder.
  for (int j = 5; i > -1; i--) {
    digitalWrite(ledler[j], HIGH);
    delay(20);
    digitalWrite(ledler[j], LOW);
  } //Bu kez ters döngü yapıyoruz. Yani dizinin 5.elemanı olan 7 pinine bağlı led yanar, söner ve bu kez bir önceki led yanar. İşlem bu şekilde devam eder.
} //Bu iki döngü sırası birbirinin tersidir. Bu şekilde ledler sırasıyla ileri ve geri yanıp sönerler. 