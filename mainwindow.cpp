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
        //info o PANda Ramen grunwald
    {
    ui->textinfo->setText("Norwida 32\nTa restauracja oferuje kartę lojalnościową do zbierania pieczątek.\nJedzenie azjatycie \nOtwarte cały tydzień 12.00-21.00  \nPrzyjazne dla wegetarian");

    }
        //menu PANda Ramen
    {

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
}

void MainWindow::on_button_bravo_clicked()
{
        //info o bravo
    {
    ui->textinfo->setText(

                          "Plac Grunwaldzki 18\n"
                          "nr tel. 71 372 11 11 / 728 33 82 82\n"
                          "Czynne codziennie 11.00 - 23.00\n"
                          "Pizza w stylu kalifornijskim\n"
                          "Przyjazne dla wegetarian"
                         );
    }
        //menu Pizza bravo
    {
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
}

void MainWindow::on_button_soczewka_clicked()
{
        //info o Soczewka
   { ui->textinfo->setText(
                "Rynek 20/21, 50-101 Wrocław\n"
                "Godziny otwarcia:\n"
                "poniedziałek 10:30–22:30\n"
                "wtorek	      10:30–23:00\n"
                "środa	      10:30–23:00\n"
                "czwartek     10:30–23:00\n"
                "piątek	      10:30–00:00\n"
                "sobota	      10:30–00:00\n"
                "niedziela    10:30–22:30\n"
                "Telefon: 516 015 165\n"
                "Miejsce przyjazne dla wegan i wegetarian\n"
                "Posiada menu dla dzieci\n"

                );
    }
        //menu Soczewka
    {
    ui->textmenu->setText(
            "CEZAR BURGER / 26 ZŁ\n\n"
            "GRILLOWANY KURCZAK, SOS CEZAR, BEKON, PARMEZAN, GRZANKI, \n"
            "SAŁATA RZYMSKA\n\n"

            "FISZ BURGER / 27 ZŁ\n\n"
            "SOLA W PANIERCE, SOS CHIMICHURII, SAŁATKA Z SURIMI, \n"
            "SELERA NACIOWEGO I OGÓRKA, PLACUSZEK Z CUKINII I MARCHEWKI, \n"
            "SAŁATA DĘBOWA\n\n"

            "BURGERY WEGE/n/n"

            "HALLOUMI BURGER / 25 ZŁ\n\n"
            "GRILLOWANY SER HALLOUMI, KURKI, SOS MIODOWO-MUSZTARDOWY, \n"
            "MARYNOWANA MARCHEWKA, OGÓREK, PESTKI DYNI, SAŁATA LODOWA\n\n"

            "DYNIA BURGER / 25 ZŁ\n\n"
            "BURGER Z DYNI I KASZY JAGLANEJ, HUMUS SZPINAKOWY, SER FETA, \n"
            "MARYNOWANE BURACZKI, MARYNOWANA GRUSZKA, ZIARNA SŁONECZNIKA, RUKOLA\n"
            "DODATKI\n\n"

            "FRYTKI / 9 ZŁ\n\n"
            "KRĄŻKI CEBULOWE, SOS POMIDOROWO-MAJONEZOWY\n\n"

            "COLESLAW / 6 ZŁ\n\n"
            "BIAŁA KAPUSTA, SOS MAJONEZOWY, MARCHEWKA\n\n"

            "FRYTKI Z BATATÓW / 9 ZŁ\n\n"
            "SOS POMIDOROWO-MAJONEZOWY\n"
            "ŻEBERKA I STEKI\n\n"

            "STEK Z ANTRYKOTU/ 250 G / 65 ZŁ\n\n"
            "GRILLOWANE WARZYWA, SOS PIEPRZOWY, PESTO Z SUSZONYCH POMIDORÓW \n"
            "I KARBOWANE CZĄSTKI ZIEMNIAKA\n\n"

            "STEK Z ROSTBEFU / 65 ZŁ\n\n"
            "GRILLOWANE WARZYWA, SOS PIEPRZOWY, PESTO Z SUSZONYCH \n"
            "POMIDORÓW I KARBOWANE CZĄSTKI ZIEMNIAKA\n\n"

            "ŻEBERKA BBQ I WHISKY / 45 ZŁ\n\n"
            "COLESLAW, PIECZONE CZĄSTKI ZIEMNIAKA, SOS POMIDOROWO-MAJONEZOWY\n"
            "STARTERY\n\n"

            "ZUPA MEKSYKAŃSKA / 17 ZŁ\n\n"
            "Z NACHOS, KOLENDRĄ I JOGURTEM\n\n"

            "NACHOS / 19 ZŁ\n\n"
            "Z JALAPENO, SEREM CHEDDAR, DODRM JALAPENO I AIOLI\n\n"

            "NACHOS Z SZARPANĄ WOŁOWINĄ / 24 ZŁ\n\n"
            "Z SEREM CHEDDAR, JALAPENO, SOSEM PIECZARKOWO- \n"
            "POROWYM I CZERWONYM SOSEM AIOLI\n\n"

            "PANIEROWANY SER CAMEMBERT / 19 ZŁ/\n\n"
            "Z SOSEM DIJON\n"
            "BAO\n\n"

            "INDYK BAO /2 SZTUKI/ / 25 ZŁ\n\n"
            "SZARPANY INDYK W MARYNACIE TERIYAKI, SOS AIOLI, ORZESZKI ZIEMNE, \n"
            "CHILLI, DYMKA, KOLENDRA, SAŁATA LODOWA. BUŁKA PSZENNA\n\n"

            "KROWA BAO /2 SZTUKI/ / 26 ZŁ/n/n"
            "SZARPANA WOŁOWINA, SOS PAPRYKOWY, PIECZARKI, SER PLEŚNIOWY, \n"
            "SUSZONE POMIDORY, ORZESZKI ZIEMNE, PSZENNA BUŁECZKA BAO\n\n"

            "SAŁATKI\n\n"

            "SAŁATKA Z KURCZAKIEM / 29 ZŁ\n\n"
            "GRZANKAMI, PARMEZANEM I SOSEM CEZAR\n\n"

            "SAŁATKA Z SZYNKĄ DŁUGODOJRZEWAJĄCĄ BRESAOLĄ / 33 ZŁ\n\n"
            "JAJKIEM, PATISONEM, KURKAMI, POMIDOREM, ZIARNAMI SŁONECZNIKA I \n\n"
            "SOSEM MIODOWO-MUSZTARDOWYM\n\n"

            "DESERY\n\n"

            "DESER DNIA / 17 ZŁ\n\n"

            "MENU DLA DZIECI\n\n"

            "KOKO BURGER Z FRYTKAMI / 24 ZŁ\n\n"
            "KURCZAK, POMIDOR, SAŁATA, SOS POMIDOROWY\n\n"

            "FILECIKI Z KURCZAKA / 24 ZŁ\n\n"
            "Z SAŁATKĄ I FRYTKAMI\n\n"
            );
    }
}

void MainWindow::on_button_dwor_clicked()
{
        //info o Dwór Polski
        {
        ui->textinfo->setText(
                    "Rynek 5 50-106 Wrocław\n"
                    "tel.:0048 71 372-48-96\n"
                    "0048 71 372-48-98\n"
                    "lokal wymaga wcześniejszej rezerwacji miejsc max120 osób\n"
                    "przyjazne dla wega"
                    );
        }
        //menu Dwór Polski
    {
        ui->textmenu->setText(
                    "Zakąski\n"
                    "Starters/ Vorspeisen/ Entrantes\n\n"
                    "Półmisek swojskich wyrobów Dworu Polskiego 40 zł\n"
                    "Plate of homemade treats to share\n"
                    "Eine Platte mit bekannten Produkten von unsere Küche\n"
                    "Plato de productos de nuestra cocina- para compartir\n\n"
                    "Befsztyk tatarski z jajkami przepiórczymi (2,6) 36 zł\n"
                    "Tatar’s beef (raw) with quail eggs\n"
                    "Tatarfleisch (roh) mit Wachteleier\n"
                    "Carne tatara (en crudo) con huevos de codorniz\n\n"

                    "Pieczony camembert z musem morelowym i owocami\n\n"
                    "Roasted camembert with apricot sauce, fruit and nuts (5,7,8) 31 zł\n"
                    "Gebackener Camembert mit Apricosensoβe, Früchte und Nüssen\n"
                    "Camembert al horno con salsa de albaricoque y frutas\n\n"

                    "Sałatka z pieczoną kaczką i kandyzowaną gruszką (2,6) 35 zł\n\n"
                    "Salad with roast duck and candied pear\n"
                    "Salat mit Ente und kandierten Birnen\n"
                    "Ensalada con pato asado y pera confitada \n\n"

                    "Zupy\n"
                    "Soups/ Suppen/ Sopas\n\n"
                    "Barszcz czerwony z uszkami (2,10,14) 21 zł\n"
                    "Borsch with little dumplings\n"
                    "Rote Beete Suppe mit Mini-Teigtaschen\n"
                    "Sopa de betabel con orejillas de masa\n\n"
                    "Kołduny w domowym rosole (2,10,14) 21 zł\n"
                    "Boiled meat-balls in broth\n"
                    "Brühe mit Fleischgefüllten Teigtaschen\n"
                    "Caldo con albondiguitas\n\n"
                    "Żurek podawany w chlebie (2,5,10,14) 27 zł\n"
                    "Żurek – Silesian soup served in bread\n"
                    "Żurek – schlesische Suppe serviert im Brot\n"
                    "Żurek – Sopa de silesia servida en pan\n\n"
                    "Zupa borowikowa z zacierkami (2,10,14) 27 zł\n"
                    "Mushroom soup with special dumplings\n"
                    "Pilzsuppe mit Teigklümpchen\n"
                    "Sopa de setas con masita\n\n"

                    "Dania główne\n"
                    "Main dishes/ Hauptgericht / Plato principal\n\n"
                    "Pierogi z jelenia z borowikami i kapustą kiszoną 38 zł\n"
                    "podane ze skwarkami (2,5,14)\n"
                    "Dumplings with deer, boletus and cabbage\n"
                    "Teigtaschen mit Hirsch, Boletus und Sauerkraut\n"
                    "Mazetitas de ciervo con boletus y col\n\n"
                    "Pierogi z kurkami podane z bukietem świeżych sałat 38 zł\n"
                    "i sosem kurkowym (2,5,14)\n"
                    "Dumplings with chanterelles served with a bouquet of fresh salads\n"
                    "and chanterelle sauce\n"
                    "Teigtaschen mit Pfifferlingen serviert mit einem Bouquet von frischen Salaten\n"
                    "und Pfifferlingsauce\n"
                    "Mazetitas de rebozuelos servidos con de ensaladas frescas y salsa de rebozuelo\n\n"

                    "Filet z pstrąga podany z ryżem jaśminowym, mango i kalafiorem\n\n"
                    "Trout fillet served with jasmine rice, mango and cauliflower 51 zł\n"
                    "Forellenfilet serviert mit Jasminreis, Mango und Blumenkohl\n"
                    "Filete de trucha servido con arroz jazmín, mango y coliflor\n\n"
                    "Tagliatelle z pieczonym dorszem, 46 zł\n"
                    "krewetkami i pomidorami concasse (2,5,9,11,14)\n"
                    "Tagliatelle with baked cod, shrimps and concasse tomatoes\n"
                    "Tagliatelle mit gebackenem Kabeljau, Garnelen und Tomaten/\n"
                    "Tagliatelle con bacalao al horno, gambas y tomates \n\n"

                    "Filet z kurczaka z rukolą i gratin warzywnym, 46 zł\n"
                    "podany z sosem serowym i kalafior romanescu (5)\n"
                    "Chicken fillet with arugula and egetable gratis, served with cheese sauce and\n"
                    "cauliflower romanescu\n"
                    "Hähnchenfilet mit Rucola und Gemüsegratin, serviert mit Käsesauce und\n"
                    "Blumenkohl Romanescu\n"
                    "Filete de pollo con rúcula y gratinado de verduras, servido con salsa de queso y\n"
                    "coliflor romanescu\n\n"
                    "Kaczka po królewsku 61 zł/\n"
                    "z sosem wiśniowym podana z kluskami śląskimi i kapustą modrą\n"
                    "Royal duck with cherries sauce on red wine served (2,14)\n"
                    "with Silesian dumplings and red cabbage\n"
                    "Königliche Ente mit Kirschensoße auf Rotwein\n"
                    "serviert mit schlesischen Klöβen und Rotkohl\n"
                    "Pato Real con salsa de cerezas servido con masitas silesianas y col morada\n\n"

                    "Kotlet schabowy 43 zł\n"
                    "podany z ziemniakami z koperkiem i kapustą zasmażaną (2,14)\n"
                    "Crumbed pork chop served with potatoes and fried cabbage\n"
                    "Schweineschnitzel serviert mit Kartoffeln und gebratenem Kraut\n"
                    "Traditional chuleta de cerdo servida con patatas y col frita\n\n"
                    "Tradycyjna pieczeń wieprzowa 48 zł\n"
                    "z kluskami śląskimi i kapustą zasmażaną (2,14)\n"
                    "Traditional pork roast with potato dumplings and fried cabbage\n"
                    "Traditioneller Schweinebraten mit schlesischen Klößen und gebratenem Kraut\n"
                    "Carne horneada de manera tradicional con masitas de patata y col frita\n\n"
                    "Polędwiczka wieprzowa z ratatui warzywnym i plackiem rosti 56 zł\n"
                    "Pork tenderloin with vegetable raratui and rosti pie (2, 14)\n"
                    "Schweinefilet mit Gemüseratati und Rösti-Torte/\n"
                    "Solomillo de cerdo con ratati de verduras y pastel de rosti\n"
                    "Golonka z warzywami pieczonymi w miodzie i ziemniakiem ziołowym\n\n"
                    "Pork knuckle with baked honey vegetables and herb potato (10) 58 zł\n"
                    "Eisbein mit Gemüse backte im Honig und mit Kräuterkartoffel\n"
                    "Codillo de cerdo con verduras al horno con miel y papa con hierbas\n\n"

                    "Befsztyk z polędwicy wołowej, 83 zł\n"
                    "podany z ziemniakami wiejskimi i warzywami grillowanymi\n"
                    "Beef sirloin steak served with farmer’s potatoes and grilled vegetables\n"
                    "Rinderfillet serviert mit Bauernkartoffeln und gegrilltem Gemüse\n"
                    "Solomillo de cerdo servido con papas a al ranchera y verduras asadas\n\n"

                    "Bażant podany z sosem kurkowym, (5,10,12,14) 72 zł\n"
                    "kluskami śląskimi i kapustą modrą\n"
                    "Pheasant in chanterelle mushrooms sauce,\n"
                    "served with Silesian dumplings and red cabbage\n"
                    "Fasan in Pfifferlingsoße, serviert mit schlesischen Klöβchen und Rotkohl\n"
                    "Faisan servido con setas, masitas silesianas y col morada\n\n"
                    "Szpikowana pieczeń z jelenia w sosie borowikowym, 68 zł/\n"
                    "podana z pierogami grzybowymi i fasolką szparagową (5,10,14)\n"
                    "Roast of stag in mushroom sauce with herbs, mushroom pierogi and beans\n"
                    "Hirschbraten in Steinpilzsoße, Pilzteigtaschen, Bohnen\n"
                    "Estofado de ciervo en salsa de setas, servido con gnocchi y judias verdes\n\n"

                    "Desery\n"
                    "Desserts/ Nachtisch/ Postre\n\n"
                    "Jabłecznik na ciepło z gałką loda waniliowego (2,5,14) 18 zł\n"
                    "Hot apple pie with vanila ice cream\n"
                    "Heiβer Apfelkuchen mit Vanilleeis\n"
                    "Pie de manzanas caliente con helado de vanilla\n\n"
                    "Lody waniliowe z polewą malinową (2,5) 21 zł\n"
                    "Vanilleeis mit Himbeersauce\n"
                    "Vanilla ice cream with raspberry sauce\n"
                    "Helado de vainilla con salsa de frambuesa\n\n"
                    "Fondant czekoladowy z sosem wiśniowym i lodem waniliowym 18 zł\n\n"
                    "Chocolate fondant with cherry sauce and ice cream (2,5,14)\n"
                    "Schokoladenfondant mit Kirchsauce und Vanilleeis\n"
                    "Fondant de chocolate con salsa de cerezas y helado de vanilla\n\n"

                    "Napoje rozgrzewające\n"
                    "Warming drinks/ Wärmende Getränke/ Bebidas calientes\n"
                    "LEMONIADA ZIMOWA ŻÓŁTA/ winter lemonade/ Winter Limonade/ limonada de invierno\n\n"
                    "Sok ananasowy, imbir, miód, sok z cytryny/ pineapple, ginger, honey, lemon 19 zł\n"
                    "Ananas, Ingwer, Honig, Zitrone/ Piña, gingibre, miel, limon\n"
                    "LEMONIADA ZIMOWA CZERWONA/ winter lemonade/ Winter Limonade/ limonada de invierno\n\n"
                    "Sok pomarańczowy, syrop waniliowy, syrop melonowy, grenadina, cytryna/ 19 zł\n"
                    "Orange, vanilia, melon, grenadina, lemon/ Orange, Vanille, Melon, Grenadine, Zitrone/ Naranja,\n"
                    "vanilia, melon, grenadina, limon\n\n"
                    "HERBATA ZIMOWA/ Winter tea/ Winter Tee/ Té de invierno 19 zł\n"
                    "Czarna herbata, owoce, konfitura z płatków róży/ black tea, fruit, rose jam/ schwarzer Tee,\n"
                    "Obst, Rosenmamelade/ Té negro, fruta, marmelada de rosa\n\n"
                    "KAWA ZIMOWA/ Winter coffee/ Winter Kaffee/ Café de invierno 19 zł\n"
                    "Spienione mleko, espresso, bita śmietana, gałka loda waniliowego, syrop figowy\n"
                    "Foam milk, espresso, cream, ice cream, fig sirup/ Milchshaum, Espresso, Schlagsahne,\n"
                    "Vanilleeis, Feigensirup/ Leche, espresso, crema, helade de vanilia, jarabe de higo\n\n"

                    "Napoje gorące\n"
                    "Hot drinks/ Heiße Getränke/ Bebidas calientes\n\n"
                    "Kawa 11 zł\n"
                    "Coffee /Kaffee\n\n"
                    "Espresso 11 zł\n\n"
                    "Cappuccino 13 zł\n\n"
                    "Kawa Latte 13 zł\n\n"
                    "Latte coffee /Latte Kaffee\n\n"
                    "Kawa po irlandzku 19 zł\n\n"
                    "Irish coffee / Irischer Kaffee\n"
                    "Posiadamy kawę bezkofeinową\n"
                    "Decaf coffee/ Koffeinfreier Kaffee/ café descafeinado\n\n"
                    "Herbata 10 zł/\n"
                    "Tea /Tee\n\n"
                    "Czekolada na gorąco ze śmietaną 12 zł\n"
                    "Hot chocolate /Heiβe Schokolade\n\n"

                    "Napoje zimne\n"
                    "Cold drinks/ Kalte Getränke/ Bebidas frias\n\n"
                    "Woda mineralna Cisowianka Perlage 0,70l 10 zł\n\n"
                    "Woda mineralna Górska Natura 0,3l 6 zł\n"
                    "Mineral water/ Mineralwasser\n\n"
                    "Woda mineralna Evian 0,75 l 16 zł\n\n"
                    "Woda mineralna Badoit 0,75 l 16 zł\n\n"
                    "Sok owocowy 200ml 7 zł\n\n"

                    "Fruit juice / Fruchtsaft\n\n"
                    "Wyciskany sok ze świeżych owoców 200ml (pomarańczowy, grejpfrutowy) 17 zł\n"
                    "Fresh pressed fruit juice / Fruchtsaft frisch gepresst\n\n"
                    "Napoje gazowane (Pepsi, Pepsi Light, 7Up, Mirinda, Tonic) 7 zł\n\n"
                    "Ice Tea (lemon, peach, green) 7 zł\n\n"
                    "Red Bull 13 zł\n\n"

                    "Piwo beczkowe\n\n"

                    "Draught beer/ Faβbier/ Cerveza de barril\n\n"
                    "Żywiec 0.50l 12 zł 0.30l 8 zł\n\n"

                    "Piwo butelkowe\n\n"

                    "Bottled beer/ Flaschenbier/ Cerveza en botella\n\n"
                    "Heineken 0.33l 12 zł\n\n"
                    "Desperados 0.40l 12 zł\n\n"
                    "Żywiec 0.50l 13 zł 0.33l 10 zł\n\n"
                    "Żywiec Białe 0.50l 13 zł\n\n"
                    "Żywiec Apa 0.50l 13 zł\n\n"
                    "Żywiec Porter 0.50l 13 zł\n\n"
                    "Żywiec bezalkoholowy 0.50l 12 zł\n\n"

                    "Non-Alcohol Beer/ Bier ohne Alkohol\n\n"
                    "Warka Strong 0.50l 13 zł\n\n"
                    "Warka Radler Alk. 0% 0.50l 15 zł\n\n"
                    "Warka Radler Alk.2 % 0.50l 15 zł\n\n"
                    "Warka 0.50l 13 zł\n\n"

                    "Drinki alkoholowe\n\n"
                    "Alcoholic drinks/ Alkoholgetränke/ Cocteles\n\n"
                    "APEROL SPRITZ 21 zł\n"
                    "(Aperol, Prosecco, woda gazowana, pomarańcze)/\n\n"
                    "SANGRIA 21 zł\n"
                    "(wino czerwone, sok pomarańczowy, woda gazowana, 7Up, owoce)\n\n"
                    "MOJITO 21 zł\n"
                    "(Bacardi, mięta, limonka, cukier trzcinowy, woda sodowa, kruszony lód)\n\n"
                    "CAIPIRINHA 21 zł\n"
                    "(Cachaça, cukier trzcinowy, limonka, kruszony lód)\n\n"
                    "SEX ON THE BEACH 21 zł\n"
                    "(Wyborowa, likier brzoskwiniowy, sok pomarańczowy, sok żurawinowy)\n\n"
                    "WILD SWEET 21 zł\n"
                    "(Becherovka, 7Up, syrop truskawkowy, cytryna)\n\n"
                    "MARGARITA 29 zł\n"
                    "(Tequila 1800 blanco, Cointreau, sok z cytryny, sól)\n\n"
                    "PINA COLADA 22 zł\n"
                    "(Bacardi, Malibu, sok ananasowy, mleko skondensowane, syrop kokosowy)\n\n"
                    "LONG ISLAND ICE TEA 35 zł\n"
                    "(Tequila 1800 blanco, Bacardi, Wyborowa, Bombay Sapphire, Cointreau, sok cytrynowy, Pepsi)\n\n"
                    "MANHATTAN 19 zł\n"
                    "(Jim Beam, Martini Rosso, Angostura)\n\n"
                    "WŚCIEKŁY PIES 14 zł\n"
                    "(Wódka, syrop malinowy, tabasco)\n\n"

                    "Wódki czyste 5cl\n\n"
                    "Chopin 14,00\n\n"
                    "Belvedere 18,00\n\n"
                    "Finlandia 12,00\n\n"
                    "Dwór Sieraków Wódka Superior 12,00\n\n"
                    "Dwór Sieraków Wódka Ziemniak Kosher 12,00\n\n"

                    "Wódki gatunkowe 5cl\n\n"
                    "Dwór Sieraków Wódka Pieprzowa 12,00\n\n"
                    "Dwór Sieraków Wódka z Czarnego Bzu 12,00\n\n"
                    "Dwór Sieraków Jarzębiak 12,00\n\n"
                    "Dwór Sieraków Śliwa z Tarniną 12,00\n\n"
                    "Żubrówka 9,00\n\n"
                    "Żołądkowa Gorzka 9,00\n\n"
                    "Jägermeister 14,00\n\n"
                    "Becherovka 12,00\n\n"
                    "Śliwowica 70% 17,00\n\n"
                    "Miodula Staropolska- beskidzka wódka na miodzie spadziowym 19,00\n\n"

                    "Inne alkohole 5cl\n\n"
                    "Rum Bacardi 12,00\n\n"
                    "Rum Brugal Añejo 15,00\n\n"
                    "Tequila 1800 Reposado 23,00\n\n"
                    "Tequila 1800 Blanco 23,00\n\n"
                    "Gin Bombay Sapphire 20,00\n\n"
                    "Grappa 12,00\n\n"
                    "Bailey’s 12,00\n\n"
                    "Wiśniak na rumie 12,00\n\n"

                    "Miody pitne Mazurskie/ Mead 10cl\n\n"
                    "Półtorak Rodowy- aromat korzenny/ spiced flavour 24,00\n\n"
                    "Dwójniak Warmiński- aromat malin/ raspberry flavour 14,00\n\n"
                    "Aperitif 10cl\n\n"
                    "Campari 16,00\n\n"

                    "Porto 15cl\n\n"
                    "Porto White 19,00\n\n"
                    "Porto Ruby 19,00\n\n"

                    "Vermut 10cl\n\n"
                    "Martini Rosso 12,00\n\n"
                    "Martini Dry 12,00\n\n"
                    "Martini Bianco 12,00\n\n"
                    "Martini Rosato 12,00\n\n"

                    "Brandy 5cl\n\n"
                    "Great Preslav XO 17 25,00\n\n"
                    "Metaxa 19,00\n\n"
                    "Stock 12,00\n\n"

                    "Cognac 4cl\n\n"
                    "Hennessy X.O. 60,00\n\n"
                    "Hennessy Fine de Cognac 45,00\n\n"
                    "Hennesy Camus Josephine 35,00\n\n"
                    "Hennessy VS 30,00\n\n"
                    "Martell VSOP 30,00\n\n"
                    "Camus VSOP 28,00\n\n"

                    "Whisky 5cl\n\n"
                    "Glenfiddich Single Malt 30,00\n\n"
                    "Dimple 25,00\n\n"
                    "Ballantine’s “12” 20,00\n\n"
                    "Ballantine’s 14,00\n\n"
                    "Chivas Regal 20,00\n\n"
                    "Jack Daniel’s 19,00\n\n"
                    "Jim Beam 14,00\n\n"
                    "Jim Beam Black 14,00\n\n"
                    "Grant’s 14,00\n\n"
                    "Grant’s “18” 20,00\n\n"
                    "Jameson 14,00\n\n"
                    "Johnnie Walker Blue 90,00\n\n"
                    "Johnnie Walker Green 38,00\n\n"
                    "Johnie Walker Gold 35,00\n\n"
                    "Johnnie Walker Black 20,00\n\n"
                    "Johnnie Walker Red 14,00\n\n"

                    );
    }
}
