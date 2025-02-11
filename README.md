Tarih ve Saatten Epoch Zamanı Hesaplama

Bu program, kullanıcının girdiği iki farklı tarih ve saat bilgisini alarak bunları epoch zamanına çevirir ve iki zaman arasındaki farkı saniye cinsinden hesaplar. Epoch zamanı, 1 Ocak 1970’ten itibaren geçen saniyeleri temsil eden bir sayıdır ve birçok sistemde zaman hesaplamalarında kullanılır.

Programın temel yapısında struct ve union kullanılmıştır. struct TarihSaat, yıl, ay, gün, saat, dakika ve saniye bilgilerini saklar. union Zaman ise hem bu tarih-saat bilgisini hem de epoch zamanını tek bir bellek alanında tutar. Epoch zamanına dönüştürme işlemi mktime() fonksiyonu ile yapılır.

Kullanıcıdan alınan iki tarih, önce epoch zamanına çevrilir, ardından difftime() fonksiyonu kullanılarak aralarındaki fark hesaplanır. Bu fark, ekrana saniye cinsinden yazdırılır. Programın amacı, zaman hesaplamalarını otomatik hale getirerek kullanıcının iki tarih arasındaki süreyi hızlıca öğrenmesini sağlamaktır.

Epoch dönüşümü sırasında, C dilinde yıl değerinin tm_year alanında 1900 yılından itibaren saklandığını unutmamak gerekir. Bu yüzden yıl değerinden 1900 çıkartılır. Eğer bu işlem yapılmazsa, program yanlış tarih hesaplamaları yapabilir.

Sonuç olarak, bu program kullanıcıya pratik bir şekilde iki tarih arasındaki farkı hesaplama imkanı sunar. Kullanıcıdan aldığı tarih ve saat bilgilerini güvenilir bir şekilde epoch zamanına çevirerek hesaplamalarını gerçekleştirir.
