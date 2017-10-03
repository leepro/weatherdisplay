#ifndef INCLUDE_PARSEJSON_H_
#define INCLUDE_PARSEJSON_H_

#include "common.h"

int parseWeather(char *data, CurWeather *curWeather);
int parseForecast(char *data, Forecast *forecast, int forecastSize);


#endif /* INCLUDE_PARSEJSON_H_ */
