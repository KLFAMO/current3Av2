/*
 * interface.h
 *
 *  Created on: Apr 10, 2022
 *      Author: UMK
 */

#ifndef INC_INTERFACE_H_
#define INC_INTERFACE_H_

#define CMD_SEP ';'

typedef struct{
    void* p;
    char* type;
} pointer;

typedef struct{
    int is;
} ison;

typedef struct{
    int tabsize;
    int tabcount;
    int tabpos;
    double* ptab[2];
}mestab;

typedef struct {
    double val;
    double min;
    double max;
    char* cmdset;
    ison tabon;
    mestab mes;
} value;

typedef struct {
	value raw;
    value volt;
    value avr;
    value coron;
    value corfactor;
}sadcchannel;

typedef struct{
    sadcchannel ch1;
    sadcchannel ch2;
} sadc;

typedef struct {
	value raw;
    value volt;
}sdacchannel;

typedef struct{
	sdacchannel ch1;
} sdac;



typedef struct {
    double version;
    value ver;
    sadc adc;
    sdac dac;
    value I;
    value rI;
    value D;
    value cur;
    value dcur;
    value dir;
    value dst; // direction switch treshold
    value mode;
    value ermax;
    value aermax;
    value goff;
    value lemA;
    value setA;
    value vg; // gate voltage
    value calib;
    value imax;
    value gt0;
    value gt1;
    value gt5;
    value gt10;
    value lemsh;
    value save;
    value load;
    value veread;
} parameters;

pointer getPointer(pointer,char * );
void initInterface(void);
void setParam(value*, double);
// void Flash_Write_Params(uint32_t address, parameters *data);
// void Flash_Read_Params(uint32_t address, parameters *data);


#endif /* INC_INTERFACE_H_ */
