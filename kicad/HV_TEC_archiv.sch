EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 7 32
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Text Notes 1000 7500 0    100  ~ 0
Thermistor: B57861S0103F040/B57861S0103F045\nReference: MAX6241ACSA+\nI stage: AD8628ARZ\nPower Amp: OPA569 - ???\nPID, Buffers: OPA189ID (SO8, 36V)/OPA388ID (SO8, 5V)
$Sheet
S 1500 1500 1500 1500
U 62B01EDE
F0 "Inputs and settings" 100
F1 "../HV_TEC/sensors.sch" 100
$EndSheet
$Sheet
S 4500 1500 1500 1500
U 62B01F89
F0 "PID" 100
F1 "../HV_TEC/pid_stage.sch" 100
$EndSheet
$Sheet
S 7500 1500 1500 1500
U 62B0203A
F0 "Output power stage" 100
F1 "../HV_TEC/power_stage.sch" 100
$EndSheet
$Sheet
S 4500 3950 1500 1500
U 62B020D5
F0 "Voltage grid source" 100
F1 "../HV_TEC/power_source.sch" 100
$EndSheet
$Sheet
S 9500 4500 500  500 
U 62B021B2
F0 "TEC archive" 100
F1 "../HV_TEC/tec_history.sch" 100
$EndSheet
$Sheet
S 8000 4500 500  500 
U 62B74395
F0 "PID archive" 100
F1 "../HV_TEC/pid_history.sch" 100
$EndSheet
$Sheet
S 8000 3500 500  500 
U 62BFD7B8
F0 "Current3Av2 archive" 100
F1 "../HV_TEC/current3a_history.sch" 100
$EndSheet
$Sheet
S 8000 5500 500  500 
U 639DE0EF
F0 "POLBER_history" 50
F1 "../HV_TEC/POLBER_history.sch" 50
$EndSheet
Text Notes 1500 4000 0    50   ~ 0
DAC8555IPW,\nDAC8565IxPW
$EndSCHEMATC
