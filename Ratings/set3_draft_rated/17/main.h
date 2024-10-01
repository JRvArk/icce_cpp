#ifndef MAIN_H // HB: please use a longer indentifier: use some random number or a UUID; this also goes for other exercises.
#define MAIN_H

#include "main.ih"

bool hasDoubleArgument(int argc, char **argv);

int sum(int argc, char **argv, int anyIntegerValue);              //1
double sum(int argc, char **argv, double anyDoubleValue);         //2

#endif
