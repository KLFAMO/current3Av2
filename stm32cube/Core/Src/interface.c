/*
 * interface.c
 *
 *  Created on: Apr 10, 2022
 *      Author: UMK, Piotr Morzynski
 */

#include "interface.h"
#include <stdlib.h>
#include <string.h>
#include <math.h>

int rmwhite(char *str);
double atofmy(char *str);
int cmd_string_interpret(char *sin, char *sout);
int cmd_interpret(char *sin, char *ssend);

int ftostr(char *str, double val);

parameters par;

pointer getPointer(pointer p, char *s)
{
  pointer pout = {0, ""};
  if (strcmp(p.type, "parameters") == 0)
  {
    parameters *ptmp = (parameters *)p.p;
    if (strcasecmp(s, "VER") == 0)
      pout = (pointer){.p = (void *)&(ptmp->ver), .type = "value"};
    if (strcasecmp(s, "ADC") == 0)
      pout = (pointer){.p = (void *)&(ptmp->adc), .type = "adc"};
    if (strcasecmp(s, "DAC") == 0)
      pout = (pointer){.p = (void *)&(ptmp->dac), .type = "dac"};
    if (strcasecmp(s, "I") == 0)
	  pout = (pointer){.p = (void *)&(ptmp->I), .type = "value"};
    if (strcasecmp(s, "RI") == 0)
    	  pout = (pointer){.p = (void *)&(ptmp->rI), .type = "value"};
    if (strcasecmp(s, "D") == 0)
	  pout = (pointer){.p = (void *)&(ptmp->D), .type = "value"};
    if (strcasecmp(s, "DIR") == 0)
	    pout = (pointer){.p = (void *)&(ptmp->dir), .type = "value"};
    if (strcasecmp(s, "DST") == 0)
      pout = (pointer){.p = (void *)&(ptmp->dst), .type = "value"};
    if (strcasecmp(s, "MODE") == 0)
	    pout = (pointer){.p = (void *)&(ptmp->mode), .type = "value"};
    if (strcasecmp(s, "ERMAX") == 0)
	    pout = (pointer){.p = (void *)&(ptmp->ermax), .type = "value"};
    if (strcasecmp(s, "AERMAX") == 0)
      pout = (pointer){.p = (void *)&(ptmp->aermax), .type = "value"};
    if (strcasecmp(s, "GOFF") == 0)
	    pout = (pointer){.p = (void *)&(ptmp->goff), .type = "value"};
    if (strcasecmp(s, "CUR") == 0)
	    pout = (pointer){.p = (void *)&(ptmp->cur), .type = "value"};
    if (strcasecmp(s, "DCUR") == 0)
	    pout = (pointer){.p = (void *)&(ptmp->dcur), .type = "value"};
    if (strcasecmp(s, "SETA") == 0)
    	  pout = (pointer){.p = (void *)&(ptmp->setA), .type = "value"};
    if (strcasecmp(s, "LEMA") == 0)
    	  pout = (pointer){.p = (void *)&(ptmp->lemA), .type = "value"};
    if (strcasecmp(s, "VG") == 0)
    	  pout = (pointer){.p = (void *)&(ptmp->vg), .type = "value"};
    if (strcasecmp(s, "CALIB") == 0)
    	  pout = (pointer){.p = (void *)&(ptmp->calib), .type = "value"};
    if (strcasecmp(s, "LEMSH") == 0)
    	  pout = (pointer){.p = (void *)&(ptmp->lemsh), .type = "value"};
    if (strcasecmp(s, "IMAX") == 0)
    	  pout = (pointer){.p = (void *)&(ptmp->imax), .type = "value"};
    if (strcasecmp(s, "GT0") == 0)
    	  pout = (pointer){.p = (void *)&(ptmp->gt0), .type = "value"};
    if (strcasecmp(s, "GT1") == 0)
    	  pout = (pointer){.p = (void *)&(ptmp->gt1), .type = "value"};
    if (strcasecmp(s, "GT5") == 0)
    	  pout = (pointer){.p = (void *)&(ptmp->gt5), .type = "value"};
    if (strcasecmp(s, "GT10") == 0)
    	  pout = (pointer){.p = (void *)&(ptmp->gt10), .type = "value"};
    if (strcasecmp(s, "SAVE") == 0)
    	  pout = (pointer){.p = (void *)&(ptmp->save), .type = "value"};
    if (strcasecmp(s, "LOAD") == 0)
        pout = (pointer){.p = (void *)&(ptmp->load), .type = "value"};
    if (strcasecmp(s, "VERREAD") == 0)
        pout = (pointer){.p = (void *)&(ptmp->veread), .type = "value"};
  }

  if (strcmp(p.type, "adc") == 0)
  {
    sadc *ptmp = (sadc *)p.p;
    if (strcasecmp(s, "CH1") == 0)
      pout = (pointer){.p = (void *)&(ptmp->ch1), .type = "adcchannel"};
    if (strcasecmp(s, "CH2") == 0)
      pout = (pointer){.p = (void *)&(ptmp->ch2), .type = "adcchannel"};
  }
  if (strcmp(p.type, "adcchannel") == 0)
  {
    sadcchannel *ptmp = (sadcchannel *)p.p;
    if (strcasecmp(s, "RAW") == 0)
          pout = (pointer){.p = (void *)&(ptmp->raw), .type = "value"};
    if (strcasecmp(s, "VOLT") == 0)
      pout = (pointer){.p = (void *)&(ptmp->volt), .type = "value"};
    if (strcasecmp(s, "AVR") == 0)
      pout = (pointer){.p = (void *)&(ptmp->avr), .type = "value"};
    if (strcasecmp(s, "CORON") == 0)
      pout = (pointer){.p = (void *)&(ptmp->coron), .type = "value"};
    if (strcasecmp(s, "CORFACTOR") == 0)
      pout = (pointer){.p = (void *)&(ptmp->corfactor), .type = "value"};
  }

  if (strcmp(p.type, "dac") == 0)
    {
      sdac *ptmp = (sdac *)p.p;
      if (strcasecmp(s, "CH1") == 0)
        pout = (pointer){.p = (void *)&(ptmp->ch1), .type = "dacchannel"};
    }

  if (strcmp(p.type, "dacchannel") == 0)
    {
      sdacchannel *ptmp = (sdacchannel *)p.p;
      if (strcasecmp(s, "RAW") == 0)
            pout = (pointer){.p = (void *)&(ptmp->raw), .type = "value"};
      if (strcasecmp(s, "VOLT") == 0)
        pout = (pointer){.p = (void *)&(ptmp->volt), .type = "value"};
    }

  if (strcmp(p.type, "value") == 0)
  {
    value *ptmp = (value *)p.p;
    if (strcasecmp(s, "VAL") == 0)
      pout = (pointer){.p = (void *)&(ptmp->val), .type = "double"};
    if (strcasecmp(s, "MIN") == 0)
      pout = (pointer){.p = (void *)&(ptmp->min), .type = "double"};
    if (strcasecmp(s, "MAX") == 0)
      pout = (pointer){.p = (void *)&(ptmp->max), .type = "double"};
    if (strcasecmp(s, "TABON") == 0)
      pout = (pointer){.p = (void *)&(ptmp->tabon), .type = "ison"};
    if (strcasecmp(s, "MES") == 0)
      pout = (pointer){.p = (void *)&(ptmp->mes), .type = "mestab"};
  }

  if (strcmp(p.type, "mestab") == 0)
  {
    mestab *ptmp = (mestab *)p.p;
    if (strcasecmp(s, "SIZE") == 0)
      pout = (pointer){.p = (void *)&(ptmp->tabsize), .type = "int"};
    if (strcasecmp(s, "COUNT") == 0)
      pout = (pointer){.p = (void *)&(ptmp->tabcount), .type = "int"};
    if (strcasecmp(s, "POS") == 0)
      pout = (pointer){.p = (void *)&(ptmp->tabpos), .type = "int"};
  }
  if (strcmp(p.type, "ison") == 0)
  {
    ison *ptmp = (ison *)p.p;
    if (strcmp(s, "IS") == 0)
      pout = (pointer){.p = (void *)&(ptmp->is), .type = "int"};
  }
  return pout;
}

void setParam(value *p, double val)
{
  if (val > p->max)
    val = p->max;
  if (val < p->min)
    val = p->min;
  p->val = val;

  if (p->tabon.is == 1 && p->mes.ptab[0] != 0 && p->mes.ptab[0] != 0)
  {
    ((p->mes.ptab)[p->mes.tabcount % 2])[p->mes.tabpos] = val;
    p->mes.tabpos++;
    if (p->mes.tabpos > p->mes.tabsize - 1)
    {
      p->mes.tabpos = 0;
      p->mes.tabcount++;
    }
  }
}

void initInterface(void)
{
  par.version = 3; // version of parameters structure, increment if structure changes
  par.ver = (value){.val = 1, .min = 0, .max = 100};
  par.I = (value){.val = -0.008, .min = -0.5, .max = 0};
  par.rI = (value){.val = -0.04, .min = -0.5, .max = 0};
  par.dir = (value){.val = 1, .min = -1, .max = 1};
  par.dst = (value){.val = 0.01, .min = 0, .max = 0.1};
  par.cur = (value){.val = 0, .min = 0, .max = 100};
  par.dcur = (value){.val = 20, .min = 0.001, .max = 20};
  par.mode = (value){.val = 0, .min = 0, .max = 3};
  par.ermax = (value){.val = 2, .min = 0, .max = 5};
  par.aermax = (value){.val = 1000, .min = 0, .max = 10000};
  par.goff = (value){.val = 0, .min = 0, .max = 4};
  par.adc.ch1.avr = (value){.val = 50, .min = 1, .max = 100};
  par.adc.ch1.volt = (value){.val = 0, .min = 0, .max = 41000};
  par.adc.ch1.coron = (value){.val = 0, .min = 0, .max = 1};
  par.adc.ch1.corfactor = (value){.val = 1, .min = 0, .max = 100};
  par.dac.ch1.volt = (value){.val = 0, .min = 0, .max = 5};
  par.setA = (value){.val = 0, .min = -100, .max = 100};
  par.lemA = (value){.val = 0, .min = -100, .max = 100};
  par.imax = (value){.val = 20, .min = 0, .max = 26};
  par.calib = (value){.val = 0, .min = 0, .max = 4};
  par.lemsh = (value){.val = 0, .min = -1, .max = 1};
  par.vg = (value){.val = 0, .min = 0, .max = 8};
  par.gt0 = (value){.val = 0, .min = 0, .max = 10};
  par.gt1 = (value){.val = 0, .min = 0, .max = 10};
  par.gt5 = (value){.val = 0, .min = 0, .max = 10};
  par.gt10 = (value){.val = 0, .min = 0, .max = 10};
  par.save = (value){.val = 0, .min = 0, .max = 1};
  par.load = (value){.val = 0, .min = 0, .max = 1};
  par.veread = (value){.val = 0, .min = 0, .max = 1};
}

/*------------------------*/
/*-----------------------------------------------------------*/



/*********************************************************/
/* separate commands  */
int cmd_string_interpret(char *sin, char *sout)
{
  char scmd[100];
  char ssend[2300];
  int i = 0, iscmd = 0, sinlen = 0;
  strcpy(ssend, "");
  sinlen = strlen(sin);
  sin[sinlen] = ';';
  for (i = 0; i <= sinlen; i++)
  {
    if (sin[i] == ';')
    {
      scmd[iscmd] = 0;
      iscmd = 0;

      cmd_interpret(scmd, ssend);
    }
    else
    {
      scmd[iscmd] = sin[i];
      iscmd++;
    }
  }
  strcpy(sout, ssend);
  return 0;
}

/*********************************************************/
/* interpret single command  */
int cmd_interpret(char *sin, char *ssend)
{
  int slen, isarg = 0, isin = 0;
  char scom[100] = {0};
  char sarg[100] = {0};
  char stmp[100] = {0};

  rmwhite(sin);
/*   strcat(ssend,"\n");
    strcat(ssend,sin);
    strcat(ssend,"\n");
*/
  slen = strlen(sin);

  while (isin < slen && sin[isin] != ' ')
  {
    scom[isin] = sin[isin];
    isin++;
  }
  scom[isin] = 0; /*tu mamy komende*/
  isin++;
  while (isin < slen && sin[isin] != ' ')
  {
    sarg[isarg] = sin[isin];
    isin++;
    isarg++;
  }
  sarg[isarg] = 0; /*Tu mamy argument*/

/*     strcat(ssend,"\ncom: ");
    strcat(ssend,scom);
    strcat(ssend,"  arg: ");
    strcat(ssend,sarg);			*/

  /*if command "REG" sent then just execute it*/
  /*if (strcmp(scom, "REG") == 0)
  {
    dds_write_bin_simp(sarg);
    return 0;
  }
*/
  /*get pointer to arg===============*/
  int iscom = -1;
  int istmp = 0;
  pointer parg = {.p = (void *)&par, .type = "parameters"};
  pointer pargback = parg;

  while (scom[iscom] != 0 || iscom==-1)
  {
    iscom++;
    istmp = 0;
    while (scom[iscom] != ':' && scom[iscom] != 0)
    {
      stmp[istmp] = scom[iscom];
      istmp++;
      iscom++;
    }
    stmp[istmp] = 0;

    pargback = parg;
    parg = getPointer(parg, stmp);
   // strcat(ssend,"\n:");
   // strcat(ssend,stmp);
  }
  /*================================*/

  if (sarg[0] == '?')
  {
//	  strcat(ssend, "*?*\n");
    if (strcmp(parg.type, "double") == 0){
    	//strcat(ssend, "*double*\n");
    	ftostr(stmp, *((double *)(parg.p)));
    }
    if (strcmp(parg.type, "value") == 0){
    	//strcat(ssend, "*value*\n");
    	ftostr(stmp, ((value *)(parg.p))->val);
    }
    if (strcmp(parg.type, "int") == 0)
      ftostr(stmp, (double)(*((int *)(parg.p))));
    if (strcmp(parg.type, "mestab") == 0)
    {
      mestab *m;
      m = (mestab *)(parg.p);
      if (m->ptab[0] != 0 && m->ptab[1] != 0)
      {
        int i = 0;
        for (i = 0; i < m->tabsize; i++)
        {
          ftostr(stmp, m->ptab[((m->tabcount + 1) % 2)][i]);
          strcat(ssend, stmp);
          strcat(ssend, ";");
        }
      }
    }
    else
    {
    	//strcat(ssend, "*else*\n");
      strcat(ssend, stmp);
    }
    strcat(ssend, "\n");
  }
  else
  {
    if (strcmp(parg.type, "double") == 0)
      *((double *)(parg.p)) = atofmy(sarg);
    if (strcmp(parg.type, "value") == 0)
      setParam((value *)parg.p, atofmy(sarg));
    if (strcmp(parg.type, "int") == 0)
      *((int *)(parg.p)) = (int)atofmy(sarg);
    if (strcmp(parg.type, "ison") == 0)
    {
      mestab *m;
      m = &(((value *)(pargback.p))->mes);
      if (atofmy(sarg) > 0)
      {
        ((ison *)(parg.p))->is = 1;
        if (m->tabsize == 0)
          m->tabsize = 10;
        m->ptab[0] = (double *)calloc(m->tabsize, sizeof(double));
        m->ptab[1] = (double *)calloc(m->tabsize, sizeof(double));
        m->tabpos = 0;
        m->tabcount = 0;
      }
      else
      {
        ((ison *)(parg.p))->is = 0;
        if (m->ptab[0])
          free(m->ptab[0]);
        if (m->ptab[1])
          free(m->ptab[1]);
        m->ptab[0] = 0;
        m->ptab[1] = 0;
      }
    }
  }

  return 0;
}

int rmwhite(char *str)
{
  int lstr = 0;
  int istr = 0;
  int isout = 0;
  int spacestate = 0;

  lstr = strlen(str);
  if (lstr > 100)
    lstr = 100;
  //omijamy spacje z poczatku
  while (str[istr] == ' ' && istr < lstr)
    istr++;
  //teraz reszta spacji
  while (istr < lstr)
  {
    if (str[istr] == ' ' || str[istr] == '\n')
    {
      if (spacestate == 0)
      {
        spacestate = 1;
        str[isout] = str[istr];
        isout++;
        istr++;
      }
      else
        istr++;
    }
    else
    {
      spacestate = 0;
      str[isout] = str[istr];
      isout++;
      istr++;
    }
  }
  str[isout] = 0;
  return 0;
}

double atofmy(char *str)
{
  double out;
  int isdot = 0, i, len, dotpos = 0, inttemp;
  len = strlen(str);
  if (str[len - 1] == '\n')
    len = len - 1;
  for (i = 0; i < len; i++)
  {
    if (str[i] == '.')
    {
      if (isdot == 1)
        return 0;
      isdot = 1;
      dotpos = i;
    }
    if (isdot == 1)
    {
      str[i] = str[i + 1];
    }
  }
  inttemp = atoi(str);
  out = (double)inttemp;
  if (isdot)
    out = out * pow(10, -1 * (len - dotpos - 1));
  return out;
}

int ftostr(char *str, double val)
{
  int istr = 0, i, j, isdot = 0;
  double factor;
  int order;
  /*Jesli wartosc jest 0 to wpisz "0" i wyjdz z funkcji*/
  if (val == 0)
  {
    strcpy(str, "0");
    return 0;
  }
  /*sprawdzamy znak*/
  if (val < 0)
  {
    str[istr] = '-';
    istr++;
    val = -1 * val;
  }
  factor = 100000000;
  while (factor > 0.00000001 && factor > val)
    factor = factor / 10;
  order = (int)log10(factor);
  if (order < 0)
  {
    order = -1 * order;
    str[istr] = '0';
    istr++;
    str[istr] = '.';
    istr++;
    for (i = 1; i < order; i++)
    {
      str[istr] = '0';
      istr++;
    }
  }
  for (j = 0; j < 10; j++)
  {
    for (i = 9; i >= 0; i--)
    {
      if ((val - i * factor) >= 0)
      {
        str[istr] = '0' + i;
        istr++;
        break;
      }
    }
    val = val - i * factor;
    factor = factor / 10;
    if (factor < 0.5 && factor > 0.05)
    {
      str[istr] = '.';
      istr++;
      isdot = 1;
    }
    if (val == 0 && isdot)
    {
      if (str[istr - 1] == '.')
        istr--;
      str[istr] = 0;
      break;
    }
  }
  str[istr] = 0;
  return 0;
}
