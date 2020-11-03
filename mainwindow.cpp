#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_button_Panda_clicked()
{
    ui->textinfo->setText("Norwida 32\nTa restauracja oferuje kartę lojalnościową do zbierania pieczątek.\nJedzenie azjatycie \nOtwarte cały tydzień 12.00-21.00  \nPrzyjazne dla wegetarian");
    ui->textmenu->setText("(POLECANE)\n\n"
                          "-PANda na wypasie (duży)\n\n"
                          "bulion wieprzowo-wołowy, chashu, szarpana wieprzowina, kapusta pekińska, kiełki fasoli mung\n"
                          "Do wyboru: szczypiorek, kukurydza, daikon (japońska rzepa), tykwa, kimchi i więcej.\n\n"
                          "35,50 zł\n\n"

                          "-PANda na wypasie\n\n"
                          "bulion wieprzowo-wołowy, chashu, szarpana wieprzowina, kapusta pekińska, kiełki fasoli mung\n"
                          "Do wyboru: Mały lub Duży.\n\n"
                          "25,50 zł\n\n"

                          "-PANda na diecie﻿\n\n"
                          "lekki bulion drobiowy, kurczak po japońsku, marynowane jajko, kapusta pekińska, kiełki fasoli mung\n"
                          "Do wyboru: Mały lub Duży.\n\n"

                          "(ZESTAWY)/n/n"

                          "-Kiri (14 szt.)﻿"
                          "(futomaki: vege tofu, gunkanmaki: ogórek z gomma wakame)\n"
                          "Do wyboru: bez powiększenia, dobierz szczepana 12 szt., holly crab 12 szt., sos sojowy i wasabi i imbir.\n"
                          "37,50 zł"

                          "-Kame (14 szt.)\n\n"
                          "(futomaki: łosoś pieczony, uramaki: krewetka z tempury,Nigiri: krewetka, tamago, węgorz)\n"
                          "Do wyboru: bez powiększenia, dobierz szczepana 12 szt., holly crab 12 szt., sos sojowy i wasabi i imbir.\n\n"
                          "49,50 zł\n\n"

                          "-Nami (14 szt.)\n\n"
                          "(futomaki: philadelphia, hosomaki: łosoś, nigiri: łosoś)\n"
                          "Do wyboru: bez powiększenia, dobierz szczepana 12 szt., holly crab 12 szt., sos sojowy i wasabi i imbir.\n"
                          "45,50 zł\n\n"

                          "-Tori (17 szt.)\n\n"
                          "(futomaki: krewetka, hosomaki: tuńczyk, uramaki: california z łososiem)\n"
                          "Do wyboru: bez powiększenia, dobierz szczepana 12 szt., holly crab 12 szt., sos sojowy i wasabi i imbir.\n"
                          "50,50 zł\n\n"

                          "-Ookami (29 szt.)\n\n"
                          "(futomaki: łosoś pieczony, philadelphia, hosomaki: takuan, labraks, uramaki: california z krewetką\n"
                          "Do wyboru: bez powiększenia, dobierz szczepana 12 szt., holly crab 12 szt., sos sojowy i wasabi i imbir.\n"
                          "74,00 zł\n\n"

                          "-Iruka (26 szt.)\n\n"
                          "(futomaki:łosoś pieczony, hosomaki: vege w tempurze, uramaki: california, krewetka z tempury, nigiri: krewetka, tamago)\n"
                          "Do wyboru: bez powiększenia, dobierz szczepana 12 szt., holly crab 12 szt., sos sojowy i wasabi i imbir.\n"
                          "84,00 zł\n\n"

                          "-Tokage (28 szt.)\n\n"
                          "(futomaki: tatar z łososia w tempurze, krab, uramaki: california gravlax, krewetka masago, nigiri: labraks, łosoś tataki, tuńczyk)\n"
                          "Do wyboru: bez powiększenia, dobierz szczepana 12 szt., holly crab 12 szt., sos sojowy i wasabi i imbir.\n"
                          "89,50 zł\n\n"

                          "-Baburu (40 szt.)\n\n"
                          "(futomaki: tatar łosoś, węgorz, krewetka z tempury, hosomaki: vege, uramaki: california, łosoś, \n"
                          "krewetka masago, nigiri: labraks, łosoś, tuńczyk)\n"
                          "Do wyboru: bez powiększenia, dobierz szczepana 12 szt., holly crab 12 szt., sos sojowy i wasabi i imbir.\n"
                          "145,50 zł\n\n"

                          "-Kemono (46 szt.)\n\n"
                          "(futomaki: tatar łosoś w tempurze, tuńczyk, krab, hosomaki: vege w tempurze, makrela, \n"
                          "uramaki: łosoś pieczony, krewetka z tempury)\n"
                          "Do wyboru: bez powiększenia, dobierz szczepana 12 szt., holly crab 12 szt., sos sojowy i wasabi i imbir.\n"
                          "150,50 zł\n\n"

                          "(FUTOMAKI)\n\n"

                          "-Futomaki Vege klasyk (6 szt.)﻿\n\n"
                          "z serkiem i warzywami\n"
                          "Do wyboru: sos sojowy i wasabi i imbir.\n"
                          "17,50 zł\n\n"

                          "-Futomaki Vege kinoko (6 szt.)﻿\n\n"
                          "z serkiem, shitake, mozzarellą i warzywami\n"
                          "Do wyboru: sos sojowy i wasabi i imbir.\n"
                          "17,50 zł\n\n"

                          "-Futomaki Kalmar tempura (6 szt.)\n\n"
                          "z majonezem, ogórkiem i szczypiorkiem\n"
                          "Do wyboru: sos sojowy i wasabi i imbir.\n"
                          "20,50 zł\n\n"

                          "-Futomaki Ebi (6 szt.)﻿\n\n"
                          "z majonezem, papryką i szczypiorkiem\n"
                          "Do wyboru: sos sojowy i wasabi i imbir.\n"
                          "20,50 zł\n\n"

                          "-Futomaki Krewetka tempura (6 szt.)﻿\n\n"
                          "z majonezem, ogórkiem i porem\n"
                          "Do wyboru: sos sojowy i wasabi i imbir.\n"
                          "23,50 zł\n\n"

                          "-Futomaki Węgorz (6 szt.)\n\n"
                          "z majonezem, papryką, szczypiorkiem i ogórkiem\n"
                          "Do wyboru: sos sojowy i wasabi i imbir.\n"
                          "26,50 zł\n\n"

                          "(URAMAKI)\n\n"

                          "-Uramaki Łosoś surowy klasyk (5 szt.)\n\n"
                          "z sezamem, serkiem i ogórkiem\n"
                          "Do wyboru: sos sojowy i wasabi i imbir.\n"
                          "16,50 zł\n\n"

                          "-Uramaki Łosoś surowy spicy (5 szt.)\n\n"
                          "z togarashi, majonezem i takuanem\n"
                          "Do wyboru: sos sojowy i wasabi i imbir.\n"
                          "16,50 zł\n\n"

                          "-Uramaki Tuńczyk klasyk (5 szt.)﻿\n\n"
                          "z majonezem, ogórkiem i sezamem\n"
                          "Do wyboru: sos sojowy i wasabi i imbir.\n"
                          "19,50 zł\n\n"

                          "-Uramaki Tuńczyk spicy (5 szt.)﻿\n\n"
                          "z majonezem, togarashi i takuanem\n"
                          "Do wyboru: sos sojowy i wasabi i imbir.\n"
                          "19,50 zł\n\n"

                          "-Uramaki Łosoś pieczony słodki (5 szt.)\n\n"
                          "z serkiem, ogórkiem i sezamem\n"
                          "Do wyboru: sos sojowy i wasabi i imbir.\n"
                          "19,00 zł\n\n"

                          "-Uramaki Łosoś pieczony ostry (5 szt.)\n\n"
                          "z majonezem, srirachią i takuanem\n"
                          "Do wyboru: sos sojowy i wasabi i imbir.\n"
                          "19,00 zł\n\n"

                          "-Uramaki California (5 szt.)﻿\n\n"
                          "z sezamem, ogórkiem, majonezem, awokado i surimi\n"
                          "Do wyboru: sos sojowy i wasabi i imbir.\n"
                          "13,50 zł\n\n"

                          "-Uramaki California z łososiem (5 szt.)﻿\n\n"
                          "z sezamem, ogórkiem, majonezem, awokado i surimi\n"
                          "Do wyboru: sos sojowy i wasabi i imbir.\n"
                          "15,50 zł\n\n"

                          "-Uramaki California z krewetką (5 szt.)﻿\n\n"
                          "z sezamem, ogórkiem, majonezem, awokado i surimi\n"
                          "Do wyboru: sos sojowy i wasabi i imbir.\n"
                          "15,50 zł\n\n"

                          "-Uramaki California z tuńczykiem (5 szt.)﻿\n\n"
                          "z sezamem, ogórkiem, majonezem, awokado i surimi\n"
                          "Do wyboru: sos sojowy i wasabi i imbir.\n"
                          "19,50 zł\n\n"

                          "-Uramaki Vege (5 szt.)﻿\n\n"
                          "Do wyboru: sos sojowy i wasabi i imbir.\n"
                          "11,50 zł\n\n"

                          "-Uramaki California z węgorzem (5 szt.)﻿\n\n"
                          "z sezamem, ogórkiem, majonezem, awokado i surimi\n"
                          "19,50 zł\n\n"

                          "(HOSOMAKI)\n\n"

                          "-Hosomaki Łosoś (6 szt.)﻿\n\n"
                          "Do wyboru: sos sojowy i wasabi i imbir.\n"
                          "16,50 zł\n\n"

                          "-Hosomaki Łosoś w panko (6 szt.)﻿\n\n"
                          "Do wyboru: sos sojowy i wasabi i imbir.\n"
                          "18,50 zł\n\n"

                          "-Hosomaki Tuńczyk z porem (6 szt.)﻿\n\n"
                          "Do wyboru: sos sojowy i wasabi i imbir.\n"
                          "19,50 zł\n\n"

                          "-Hosomaki Tuńczyk spicy (6 szt.)﻿\n\n"
                          "Do wyboru: sos sojowy i wasabi i imbir.\n"
                          "20,50 zł\n\n"

                          "-Hosomaki Ogórek (6 szt.)\n\n"
                          "Do wyboru: sos sojowy i wasabi i imbir.\n"
                          "11,50 zł\n\n"

                          "-Hosomaki Takuan (6 szt.)﻿\n\n"
                          "Do wyboru: sos sojowy i wasabi i imbir.\n"
                          "11,50 zł\n\n"

                          "-Hosomaki Tykwa (6 szt.)﻿\n\n"
                          "Do wyboru: sos sojowy i wasabi i imbir.\n"
                          "11,50 zł\n\n"

                          "-Hosomaki Tamago (6 szt.)﻿\n\n"
                          "Do wyboru: sos sojowy i wasabi i imbir.\n"
                          "12,50 zł\n\n"

                          "-Hosomaki Węgorz (6 szt.)\n\n"
                          "Do wyboru: sos sojowy i wasabi i imbir.\n"
                          "19,50 zł\n\n"

                          "(NIGIRI)\n\n"

                          "-Nigiri Łosoś (2 szt.)﻿\n\n"
                          "Do wyboru: sos sojowy i wasabi i imbir.\n"
                          "17,50 zł\n\n"

                          "-Nigiri Ebi (2 szt.)﻿\n\n"
                          "Do wyboru: sos sojowy i wasabi i imbir.\n"
                          "18,50 zł\n\n"

                          "-Nigiri Tuńczyk (2 szt.)﻿\n\n"
                          "Do wyboru: sos sojowy i wasabi i imbir.\n"
                          "21,50 zł\n\n"

                          "-Nigiri Tuńczyk tataki (2 szt.)﻿\n\n"
                          "Do wyboru: sos sojowy i wasabi i imbir.\n"
                          "21,50 zł\n\n"

                          "-Nigiri Tuńczyk spicy (2 szt.)﻿\n\n"
                          "Do wyboru: sos sojowy i wasabi i imbir.\n"
                          "21,50 zł\n\n"

                          "-Nigiri Tamago (2 szt.)﻿\n\n"
                          "Do wyboru: sos sojowy i wasabi i imbir.\n"
                          "11,50 zł\n\n"

                          "-Nigiri Węgorz (2 szt.)﻿\n\n"
                          "Do wyboru: sos sojowy i wasabi i imbir.\n"
                          "21,50 zł\n\n"

                          "(Tempura - przekąski z sosami podawane na ciepło)\n\n"

                          "-Tempura krewetki (6 szt.)﻿\n\n"
                          "Do wyboru: sos sojowy i wasabi i imbir.\n"
                          "35,50 zł\n\n"

                          "-Tempura kalmary (6 szt.)﻿\n\n"
                          "Do wyboru: sos sojowy i wasabi i imbir.\n"
                          "29,50 zł\n\n"

                          "-Tempura warzywna (8 szt.)﻿\n\n"
                          "Do wyboru: sos sojowy i wasabi i imbir.\n"
                          "20,50 zł\n\n"

                          "-Tempura mix (6 szt.)\n\n"
                          "Do wyboru: sos sojowy i wasabi i imbir.\n"
                          "32,50 zł\n\n"

                          "(RAMEN)\n\n"

                          "-PANda na wypasie\n\n"
                          "bulion wieprzowo-wołowy, chashu, szarpana wieprzowina, kapusta pekińska, kiełki fasoli mung\n"
                          "Do wyboru: Mały lub Duży.\n"
                          "25,50 zł\n\n"

                          "-Ramen curry﻿\n\n"
                          "bulion curry na bazie drobiu, kurczak po japońsku, kapusta pekińska, kiełki fasoli mun\n"
                          "Do wyboru: Mały lub Duży.\n"
                          "25,50 zł\n\n"

                          "-PANda na diecie﻿\n\n"
                          "lekki bulion drobiowy, kurczak po japońsku, marynowane jajko, kapusta pekińska, kiełki fasoli mung\n"
                          "Do wyboru: Mały lub Duży.\n"
                          "23,50 zł\n\n"

                          "-PANda vege﻿\n\n"
                          "lekki bulion wegetariański na bazie miso, marynowane i smażone tofu, kapusta pekińska, kiełki fasoli mung\n"
                          "Do wyboru: Mały lub Duży.\n"
                          "21,50 zł\n\n"

                          "(TATAR)\n\n"

                          "-Tatar Łosoś﻿\n\n"
                          "Do wyboru: Futomaki lub Miseczka.\n"
                          "29,50 zł\n\n"

                          "-Tatar Tuńczyk﻿\n\n"
                          "Do wyboru: Futomaki lub Miseczka.\n"
                          "32,50 zł\n\n"

                          "(SAŁATKI)\n\n"

                          "-Sałatka Kimchi\n\n"
                          "z pikantna sałatka na bazie kapusty pekińskiej\n"
                          "10,50 zł\n\n"

                          "-Sałatka Wakame﻿\n\n"
                          "z japońską sałatką, glonów wakame, ogórka i tofu\n"
                          "9,50 zł\n\n"

                          "-Sałatka Edame\n\n"
                          "z zielonych strąków soi i solą morską\n"
                          "13,50 zł\n\n"

                          "-Sałatka Gomma wakame﻿\n\n"
                          "z japońskiej sałaty oraz marynowanych glonów\n"
                          "10,50 zł\n\n"

                          "(DESERY)\n\n"

                          "-Owoce w tempurze﻿\n\n"
                          "mix owoców smażonych w cieście\n"
                          "11,50 zł\n\n"
                          );

}

void MainWindow::on_button_bravo_clicked()
{
    ui->textinfo->setText(

                          "Plac Grunwaldzki 18\n"
                          "nr tel. 71 372 11 11 / 728 33 82 82\n"
                          "Czynne codziennie 11.00 - 23.00\n"
                          "Pizza w stylu kalifornijskim\n"
                          "Przyjazne dla wegetarian"
                         );
    ui->textmenu->setText("MENU\n\n"

                          "1. Margherita\n\n"
                         "sos , ser\n"
                         "8,80 zł 12,90 zł 26,50 zł\n\n"

                          "2. Chlebek czosnkowy \n\n"
                         " czosnek , ser\n"
                         " 8,90 zł 12,90 zł \n\n"

                         " 3. Funghi \n\n"
                          "sos pomidorowy , ser , pieczarki\n"
                          "10,30 zł 14,90 zł 31,00 zł\n\n"

                         " 4. Pomodoro\n\n"
                          "sos , ser , pomidor\n"
                         " 10,30 zł 14,90 zł 31,00 zł\n\n"

                          "5. Neapolitana\n\n"
                          "sos , ser , czosnek , pomidor\n"
                          "10,80 zł 15,70 zł 31,50 zł\n\n"

                          "6. Salami\n\n"
                          "sos , ser , salami\n"
                          "10,80 zł 15,70 zł 31,50 zł\n\n"

                         " 7. Capri\n\n"
                          "sos , ser , szynka\n"
                          "10,80 zł 15,70 zł 31,50 zł\n\n"

                          "8. Hawaian\n\n"
                          "sos , ser , szynka , ananas\n"
                          "11,80 zł 17,00 zł 33,00 zł\n\n"

                         " 9. Roma\n\n"
                         " sos , ser , szynka , pieczarki\n"
                          "11,80 zł 17,00 zł 33,00 zł\n\n"

                          "10. Pepperoni\n\n"
                          "sos , ser , salami\n"
                          "11,80 zł 17,00 zł 33,00 zł\n\n"

                          "11. Ciuriosita\n\n"
                          "sos , ser , szynka , papryka , szpinak\n"
                          "12,90 zł 18,70 zł 36,80 zł\n\n"

                          "12. Classic\n\n"
                          "sos , ser , pieczarki , salami , papryka pepperoni\n"
                          "12,90 zł 18,70 zł 36,80 zł\n\n"

                          "13. Verona\n\n"
                          "sos , ser , polędwica , ananas, papryka pepperoni\n"
                          "12,90 zł 18,70 zł 36,80 zł\n\n"

                          "14. Cosa Nostra\n\n"
                          "sos , ser , pieczarki , salami , kukurydza , oliwki\n"
                          "14,20 zł 20,60 zł 41,00 zł\n\n"

                          "15. Vegetarian\n\n"
                          "sos , ser , pieczarki , papryka , brokuły , kukurydza , świeża bazylia\n"
                          "14,20 zł 20,60 zł 41,00 zł\n\n"

                          "16. Calzone (pizza zawijana)\n\n"
                          "ser , sos , pieczarki , tuńczyk , szpinak , papryka\n"
                          "14,20 zł 20,60 zł\n\n"

                          "17. Marco Polo\n\n"
                          "sos , ser , tuńczyk , oliwki, papryka pepperoni , cebula\n"
                          "14,20 zł 20,60 zł 41,00 zł\n\n"

                          "18. Farmerska\n\n"
                          "sos , ser , filet z kurczaka , kukurydza , cebula , oliwki\n"
                          "14,20 zł 20,60 zł 41,00 zł\n\n"

                          "19. Sycylijska\n\n"
                          "sos , ser , bekon, szynka , pieczarki , cebula\n"
                          "15,30 zł 22,20 zł 43,90 zł\n\n"

                          "20. Meksykańska\n\n"
                          "sos , ser , kiełbasa chorizo, cebula , papryka pepperoni\n"
                          "15,30 zł 22,20 zł 39,90 zł\n\n"

                          "21. Uczta serowa\n\n"
                          "sos , ser , ser mozzarella , ser pleśniowy , ser feta\n"
                          "15,30 zł 22,20 zł 37,50 zł\n\n"

                          "22. Bravo\n\n"
                          "sos , ser , pieczarki , bekon, salami , jajko\n"
                          "15,30 zł 22,20 zł 41,00 zł\n\n"

                          "23. Milano\n\n"
                          "sos , ser , kurczak , bekon, brokuły , pieczarki , czosnek\n"
                          "15,30 zł 22,20 zł 43,90 zł\n\n"

                          "24. Quattro stagioni (4 różne ćwiartki)\n\n"
                          "sos , ser , pieczarki , cebula , szynka , pomidorki cherry, salami , oliwki,\n"
                          "ser mozzarella , rukola\n"
                           "23,00 zł 39,90 zł\n\n"

                          "25. Prosciutto\n\n"
                          "sos , ser , ser mozzarella , szynka dojrzewająca, rukola, ser typu parmezan\n"
                          "16,90 zł 23,50 zł 45,00 zł\n\n"

                          "26. Margherita\n\n"
                          "sos , ser\n"
                           " 26,50 zł\n\n"

                          "27. Fantazja - 2 dodatki (do wyboru. Bez chorizo, parmezanu i szynki dojrzewającej)\n\n"
                          "sos , ser\n"
                          "  33,00 zł\n\n"

                          "(MAKARONY z PATELNI)\n\n"

                          "28. Tagliatelle pollo\n\n"
                          "makaron tasiemki w sosie śmietanowo-musztardowym z kurczakiem, groszkiem i pietruszką /\n"
                          "twisted pasta in cream-mustard sauce with chicken, peas and parsley\n"
                          "15,90zł\n\n"

                          "29. Tagliatelle spinaci\n\n"
                          "makaron tasiemki w sosie śmietanowym z serem pleśniowym i szpinakiem /\n"
                          "twisted pasta in cream sauce with mould cheese and spinach\n"
                          "14,90zł\n\n"

                          "30. Tagliatelle funghi\n\n"
                          "makaron tasiemki z grzybami w sosie śmietanowym / twisted pasta with mushrooms in cream sauce\n"
                          "14,90zł\n\n"

                          "31. Tagliatelle salmone\n\n"
                          "makaron tasiemki z wędzonym łososiem, brokułami i koperkiem w sosie śmietanowo-serowym /\n"
                          "twisted pasta with smoked salmon, brocolli, dill in cream cheese sauce\n"
                          "17,90zł\n\n"

                          "32. Spaghetti al pomodoro\n\n"
                          "pomidory, czosnek, zioła / tomato, garlic, herbs\n"
                          "11,50zł\n\n"

                          "33. Spaghetti alla bolognese\n\n"
                          "sos bolognese, czosnek, zioła, mozzarella / bolognese sauce, garlic, herbs, mozzarella\n"
                          "12,90zł\n\n"

                          "34. Spaghetti al salame\n\n"
                          "salami, cebula, pieczarki, pieprz, oliwa, parmezan / salami, onion, mushrooms, pepper, oil,\n"
                          "parmesan cheese\n"
                          "15,50zł\n\n"

                          "35. Spaghetti alla carbonara\n\n"
                          "boczek, parmezan, zielona pietruszka, śmietana, jajko / bacon, parmezan cheese, parsley,\n"
                          "sour cream, egg\n"
                          "15,50zł\n\n"

                          "36. Makaron Penne z brokułem, w sosie serowym\n\n"
                          "15,50zł\n\n"

                          "37. Makaron Penne z kurczakiem i brokułem, w sosie serowym\n\n"
                          "sos serowy - gorgonzola, bryndza, lazur\n"
                          "17,50zł\n\n"

                          "(MAKARONY z PIECA)\n\n"

                          "36. Al forno Venezia\n\n"
                          "makaron świderki, filet z kurczaka, pieczarki, brokuły, beszamel, mozzarella /\n"
                          " twisted pasta, chicken fillet, mushrooms, broccoli, white sauce, mozzarella\n"
                          "17,50zł\n\n"

                          "37. Al forno ai Funghi\n\n"
                          "makaron świderki, borowiki, pieczarki,cebula, beszamel, mozzarella /\n"
                          "twisted pasta, boletuses, mushrooms, onion, white sauce, mozzarella\n"
                          "17,50zł\n\n"

                          "38. Al forno Italiano\n\n"
                          "makaron świderki, szynka, cebula, czosnek, papryka pepperoni, mozzarella /\n"
                          "twisted pasta, ham, onion, garlic, pepperoni pepper, mozzarella\n"
                          "17,50zł\n\n"

                          "39. Lasagne\n\n"
                          "wieprzowina, szpinak, beszamel, cukinia, mozzarella /\n"
                          "pork, spinach, white sauce, zucchini, mozzarella\n"
                          "17,50zł\n\n"

                          "(NALEŚNIKI z PIECA)\n\n"

                          "40. Naleśniki prowansalskie (2 szt)\n\n"
                          "szpinak, czosnek, zioła, ser feta, mozzarella /\n"
                          "spinach, garlic, herbs, feta cheese, mozzarella\n"
                          "15,80zł\n\n"

                          "41. Naleśniki meksykańskie (2 szt)\n\n"
                          "wieprzowina, mieszanka sombrero, czosnek, mozzarella /\n"
                          "pork, sombrero mix, garlic, mozzarella\n"
                          "15,80zł\n\n"

                          "42. Naleśniki wegetariańskie\n\n"
                          "mieszanka warzyw sombrero, szpinak, beszamel, papryka, mozzarella /\n"
                          "vegetable sombrero mix, spinach, white sauce, pepper, mozzarella\n"
                          "15,80zł\n\n"

                          "(Przekonski)\n\n"

                          "43. Szpinak zapiekany z mozzarellą\n\n"
                          "szpinak, słonecznik, czosnek + grzanka /\n"
                          "spinach, sunflower, garlic + toast\n"
                          "14,80zł\n\n"

                          "44. Brokuły z borowikami ( zapiekane w piecu )\n\n"
                          "brokuły, borowiki, sos borowikowy + grzanka /\n"
                          "broccoli, boletuses, boletus sauce + toast\n"
                          "15,80zł\n\n"

                          "45. Grzanki włoskie\n\n"
                          "8,50zł\n\n"

                          "46. Grzanki włoskie z salami i szpinakiem\n\n"
                          "salami, szpinak / pepperoni sausage, spinach\n"
                          "9,90zł\n\n"

                          "47. Grzanki włoskie z szynką i pieczarkami\n\n"
                          "szynka, pieczarki / ham, mushrooms\n"
                          "9,90zł\n\n"

                          "(SOSY)\n\n"

                          "Sos pomidorowy\n\n"
                          "1,70zł\n\n"

                          "Sos czosnkowy\n\n"
                          "1,70zł\n\n"

                          "(NAPOJE)\n\n"

                          "Pepsi\n\n"
                          "5zł\n\n"

                         " 7up\n\n"
                         " 5zł\n\n"

                         " Mirinda\n\n"
                         " 5zł\n\n"

                          "Woda mineralna\n\n"
                          "3,80zł\n\n"

                          );
}
