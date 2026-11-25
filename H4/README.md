# Harjoitus 4 – Kompositio

## Kuvaus

Tässä harjoituksessa harjoitellaan C++-ohjelmoinnin kompositiota eli koostetta.

Ohjelmassa mallinnetaan auton rakennetta kolmen luokan avulla:

- `Engine` – moottoriluokka.
- `Wheel` – rengasluokka.
- `Car` – koosteluokka, joka sisältää moottorin ja neljä rengasta.

## Projektin tiedostot

```text
h4/
├── main.cpp
├── Engine.h
├── Engine.cpp
├── Wheel.h
├── Wheel.cpp
├── Car.h
├── Car.cpp
└── README.md
```

## Engine-luokka

Engine-luokka sisältää seuraavat ominaisuudet:

- `horsepower` – moottorin hevosvoimat.
- `displacement` – moottorin tilavuus litroina.

Luokassa on konstruktorit sekä getter- ja setter-metodit ominaisuuksien käsittelyyn.

## Wheel-luokka

Wheel-luokka sisältää seuraavat ominaisuudet:

- `size` – renkaan koko.
- `type` – renkaan tyyppi.

Luokassa on konstruktorit sekä getter- ja setter-metodit.

## Car-luokka

Car-luokka koostuu:

- Yhdestä Engine-oliosta.
- Neljästä Wheel-oliosta.
- Auton merkistä (`brand`).
- Auton mallista (`model`).

Car-luokan metodit:

- `setEngine()` – asettaa moottorin tehoksi 150 hevosvoimaa ja tilavuudeksi 2.0 litraa.
- `setWheels()` – asettaa kaikkien renkaiden kooksi 17 ja tyypiksi kesärengas.
- `getModel()` ja `setModel()` – käsittelevät auton mallia.
- `getBrand()` ja `setBrand()` – käsittelevät auton merkkiä.
- `printDetails()` – tulostaa auton tiedot.

## Ohjelman toiminta

Pääohjelmassa luodaan Toyota Corolla -auto.

Autolle asetetaan moottorin ja renkaiden tiedot, minkä jälkeen kaikki tiedot tulostetaan konsoliin.

## Mitä harjoituksessa opittiin?

- Komposition käyttäminen C++:ssa.
- Luokkien välinen koostesuhde.
- Getter- ja setter-metodit.
- Konstruktorit.
- Olioiden sisällyttäminen toiseen luokkaan.
- Olioiden automaattinen elinkaari.