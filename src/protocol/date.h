#ifndef EL__PROTOCOL_DATE_H
#define EL__PROTOCOL_DATE_H

#include "util/time.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Parses YY and YYYY style years. Returns year value ready for tm.tm_year and
 * move @date pointer after the year if successful else returns -1. */
int parse_year(const char **date, char *end);

/* Return 0 for January, 11 for december, -1 for failure. Updates buf pointer on
 * success. */
int parse_month(const char **buf, char *end);

/* Return day number. Updates string pointer on success. */
int parse_day(const char **date, char *end);

/* Expects HH:MM[:SS] or HH:MM[P|A]M, with HH <= 23, MM <= 59, SS <= 59.
 * Updates tm, updates time on success and returns 0 on failure, otherwise 1. */
int parse_time(const char **time, struct tm *tm, char *end);

/* Parses the following date formats:
 *
 * Sun, 06 Nov 1994 08:49:37 GMT  ; RFC 822, updated by RFC 1123
 * Sunday, 06-Nov-94 08:49:37 GMT ; RFC 850, obsoleted by RFC 1036
 * Sun Nov  6 08:49:37 1994       ; ANSI C's asctime() format
 */
time_t parse_date(char **date_pos, char *end,
		  int update_pos, int skip_week_day);

#ifdef __cplusplus
}
#endif

#endif
