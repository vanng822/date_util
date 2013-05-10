#ifndef DATE_UTIL_H
#define DATE_UTIL_H


typedef struct {
	int day;
	int month;
	int year;
} date;

struct _date_interval {
	date *start_date;
	date *end_date;
};

typedef struct _date_interval date_interval;

struct _interval_list {
	date_interval *val;
	struct _interval_list *next;
};

typedef struct _interval_list interval_list;


#endif
