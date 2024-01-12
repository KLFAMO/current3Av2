EESchema Schematic File Version 5
EELAYER 43 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 6
Title "Compensation coils driver"
Date "2022-03-22"
Rev "2.0"
Comp "UMK (NCU) Toruń"
Comment1 "KL FAMO"
Comment2 "design by: mgr inż. Adam Ledziński"
Comment3 ""
Comment4 "PL: Zasilacz cewek kompensacyjnych (3x3A)"
Comment5 ""
Comment6 ""
Comment7 ""
Comment8 ""
Comment9 ""
$EndDescr
Wire Wire Line
	800  7350 800  7450
Wire Wire Line
	2500 1000 3000 1000
Wire Wire Line
	2500 1100 3000 1100
Wire Wire Line
	2500 1200 3000 1200
Wire Wire Line
	2500 1400 3000 1400
Wire Wire Line
	2500 1500 3000 1500
Wire Wire Line
	2500 1600 3000 1600
Wire Wire Line
	2500 1800 3000 1800
Wire Wire Line
	2500 1900 3000 1900
Wire Wire Line
	2500 2000 3000 2000
Wire Wire Line
	2500 2300 3000 2300
Wire Wire Line
	2500 2400 3000 2400
Wire Wire Line
	2500 2500 3000 2500
Wire Wire Line
	5000 1200 5500 1200
Wire Wire Line
	5000 1500 5500 1500
Wire Wire Line
	5000 1700 5500 1700
Wire Wire Line
	5000 2000 5500 2000
Wire Wire Line
	5000 3200 5500 3200
Wire Wire Line
	5000 3500 5500 3500
Wire Wire Line
	5000 3750 5500 3750
Wire Wire Line
	5000 4000 5500 4000
Wire Wire Line
	5000 5200 5500 5200
Wire Wire Line
	5000 5500 5500 5500
Wire Wire Line
	5000 5700 5500 5700
Wire Wire Line
	5000 6000 5500 6000
Text Notes 1350 2000 0    50   ~ 0
16 bit DAC\nVref = 3,0 V 0,5 %\n1/N ≈ 46 µV\n3 A ↔ 0xFFFF
Text Notes 7600 3800 0    75   ~ 0
T1-T12:\nIAUC100N04S6L025ATMA1\nBSC014N04LSATMA1\nBSC019N04LSATMA1\nBSC014N04LSIATMA1\nBSC014N04LSTATMA1\nBSC010N04LSATMA1\nBSC027N04LSGATMA1\nIQE013N04LM6CGATMA1\nIQE013N04LM6ATMA1\nNTMTS001N06CLTXG\nCSD18509Q5BT\nCSD18502Q5BT\nMCAC95N06Y-TP\nMCAC95N065Y-TP\nCSD18512Q5B\nTSM025NH04LCR RLG\nTSM019NH04LCR RLG\nBSC010N04LS6ATMA1\nISC012N04LM6ATMA1\n
Text Label 2600 1000 0    50   ~ 0
DAC1
Text Label 2600 1100 0    50   ~ 0
CUR1
Text Label 2600 1200 0    50   ~ 0
DIR1
Text Label 2600 1400 0    50   ~ 0
DAC2
Text Label 2600 1500 0    50   ~ 0
CUR2
Text Label 2600 1600 0    50   ~ 0
DIR2
Text Label 2600 1800 0    50   ~ 0
DAC3
Text Label 2600 1900 0    50   ~ 0
CUR3
Text Label 2600 2000 0    50   ~ 0
DIR3
Text Label 2600 2300 0    50   ~ 0
ES1
Text Label 2600 2400 0    50   ~ 0
ES2
Text Label 2600 2500 0    50   ~ 0
ES3
Text Label 5100 1200 0    50   ~ 0
DIR1
Text Label 5100 1500 0    50   ~ 0
DAC1
Text Label 5100 1700 0    50   ~ 0
CUR1
Text Label 5100 2000 0    50   ~ 0
ES1
Text Label 5100 3200 0    50   ~ 0
DIR2
Text Label 5100 3500 0    50   ~ 0
DAC2
Text Label 5100 3750 0    50   ~ 0
CUR2
Text Label 5100 4000 0    50   ~ 0
ES2
Text Label 5100 5200 0    50   ~ 0
DIR3
Text Label 5100 5500 0    50   ~ 0
DAC3
Text Label 5100 5700 0    50   ~ 0
CUR3
Text Label 5100 6000 0    50   ~ 0
ES3
$Comp
L power:GNDPWR #PWR01
U 1 1 5F4D5A20
P 800 7450
F 0 "#PWR01" H 800 7250 50  0001 C CNN
F 1 "GNDPWR" H 806 7295 50  0000 C CNN
F 2 "" H 800 7400 50  0001 C CNN
F 3 "" H 800 7400 50  0001 C CNN
	1    800  7450
	1    0    0    -1  
$EndComp
$Comp
L Mechanical:Fiducial FID?
U 1 1 6485A7D9
P 1000 5800
AR Path="/6480D745/62B74395/61A52C79/6485A7D9" Ref="FID?"  Part="1" 
AR Path="/6485A7D9" Ref="FID1"  Part="1" 
F 0 "FID1" H 1085 5847 50  0000 L CNN
F 1 "Fiducial" H 1085 5754 50  0000 L CNN
F 2 "Fiducials:Fiducial_0.5mm_Dia_1mm_Outer" H 1000 5800 50  0001 C CNN
F 3 "~" H 1000 5800 50  0001 C CNN
	1    1000 5800
	1    0    0    -1  
$EndComp
$Comp
L Mechanical:Fiducial FID?
U 1 1 6485A7DF
P 1000 6000
AR Path="/6480D745/62B74395/61A52C79/6485A7DF" Ref="FID?"  Part="1" 
AR Path="/6485A7DF" Ref="FID2"  Part="1" 
F 0 "FID2" H 1085 6047 50  0000 L CNN
F 1 "Fiducial" H 1085 5954 50  0000 L CNN
F 2 "Fiducials:Fiducial_0.5mm_Dia_1mm_Outer" H 1000 6000 50  0001 C CNN
F 3 "~" H 1000 6000 50  0001 C CNN
	1    1000 6000
	1    0    0    -1  
$EndComp
$Comp
L Mechanical:Fiducial FID?
U 1 1 6485A7E5
P 1000 6200
AR Path="/6480D745/62B74395/61A52C79/6485A7E5" Ref="FID?"  Part="1" 
AR Path="/6485A7E5" Ref="FID3"  Part="1" 
F 0 "FID3" H 1085 6247 50  0000 L CNN
F 1 "Fiducial" H 1085 6154 50  0000 L CNN
F 2 "Fiducials:Fiducial_0.5mm_Dia_1mm_Outer" H 1000 6200 50  0001 C CNN
F 3 "~" H 1000 6200 50  0001 C CNN
	1    1000 6200
	1    0    0    -1  
$EndComp
$Comp
L Mechanical:MountingHole H?
U 1 1 6485A7C1
P 1000 5000
AR Path="/6480D745/62B74395/61A52C79/6485A7C1" Ref="H?"  Part="1" 
AR Path="/6485A7C1" Ref="H1"  Part="1" 
F 0 "H1" H 1100 5047 50  0000 L CNN
F 1 "MountingHole" H 1100 4954 50  0000 L CNN
F 2 "Mounting_Holes:MountingHole_3.2mm_M3_Pad_Via" H 1000 5000 50  0001 C CNN
F 3 "~" H 1000 5000 50  0001 C CNN
	1    1000 5000
	1    0    0    -1  
$EndComp
$Comp
L Mechanical:MountingHole H?
U 1 1 6485A7C7
P 1000 5200
AR Path="/6480D745/62B74395/61A52C79/6485A7C7" Ref="H?"  Part="1" 
AR Path="/6485A7C7" Ref="H2"  Part="1" 
F 0 "H2" H 1100 5247 50  0000 L CNN
F 1 "MountingHole" H 1100 5154 50  0000 L CNN
F 2 "Mounting_Holes:MountingHole_3.2mm_M3_Pad_Via" H 1000 5200 50  0001 C CNN
F 3 "~" H 1000 5200 50  0001 C CNN
	1    1000 5200
	1    0    0    -1  
$EndComp
$Comp
L Mechanical:Heatsink_Pad PD7
U 1 1 641320AE
P 800 7250
F 0 "PD7" H 882 7305 60  0001 L CNN
F 1 "LAM 5K 150 12V" H 1000 7250 60  0000 L CNN
F 2 "ff_lib:Heatsink_50x50x150mm_with_fan_C" V 800 7350 60  0001 L CNN
F 3 "https://www.fischerelektronik.de/web_fischer/en_GB/VA/LAM3K10012/datasheet.xhtml?branch=heatsinks" H 800 7250 60  0001 C CNN
F 4 "dodać: THFU4 – 3szt., wkręt do metalu – 3 szt (Φmax 3mm)" H 2100 7150 50  0000 C CNN "Comm"
	1    800  7250
	1    0    0    -1  
$EndComp
$Sheet
S 5500 1000 1000 1500
U 641320B1
F0 "Power amplifier 1" 50
F1 "power1.sch" 50
F2 "DAC1" I L 5500 1500 50 
F3 "CUR1" O L 5500 1700 50 
F4 "DIR1" I L 5500 1200 50 
F5 "ES1" B L 5500 2000 50 
$EndSheet
$Sheet
S 5500 3000 1000 1500
U 641320C6
F0 "Power amplifier 2" 50
F1 "power2.sch" 50
F2 "DAC2" I L 5500 3500 50 
F3 "CUR2" O L 5500 3750 50 
F4 "DIR2" I L 5500 3200 50 
F5 "ES2" B L 5500 4000 50 
$EndSheet
$Sheet
S 5500 5000 1000 1500
U 5F2F834A
F0 "Power amplifier 3" 50
F1 "power3.sch" 50
F2 "DAC3" I L 5500 5500 50 
F3 "CUR3" O L 5500 5700 50 
F4 "DIR3" I L 5500 5200 50 
F5 "ES3" B L 5500 6000 50 
$EndSheet
$Sheet
S 1000 900  1500 2500
U 64132056
F0 "controller+DAC" 50
F1 "control.sch" 50
F2 "DAC1" O R 2500 1000 50 
F3 "DAC2" O R 2500 1400 50 
F4 "DAC3" O R 2500 1800 50 
F5 "DIR1" O R 2500 1200 50 
F6 "DIR2" O R 2500 1600 50 
F7 "DIR3" O R 2500 2000 50 
F8 "CUR1" I R 2500 1100 50 
F9 "CUR2" I R 2500 1500 50 
F10 "CUR3" I R 2500 1900 50 
F11 "ES1" B R 2500 2300 50 
F12 "ES2" B R 2500 2400 50 
F13 "ES3" B R 2500 2500 50 
$EndSheet
$EndSCHEMATC
