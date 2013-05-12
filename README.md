date_util
=========

functionalities for date and date interval


[![build status](https://secure.travis-ci.org/vanng822/date_util.png)](http://travis-ci.org/vanng822/date_util)


## install
### virtualenv
http://www.virtualenv.org/en/latest/
	
### cunit, mac or ubuntu
	sudo port install cunit
	sudo apt-get install libcunit1 libcunit1-dev


### virtualenv python2.7
	virtualenv --python=/usr/bin/python2.7 python2.7
	source python2.7/bin/activate

## run test
### python test
	python setup.py test

### c test
	make test

## Memory leak check with valgrind
	valgrind --leak-check=full make test
	valgrind --leak-check=full python setup.py test

## Resources
### CUnit doc
* http://cunit.sourceforge.net/

### Python c-api
* http://docs.python.org/2/c-api/index.html

### C
* http://www.gnu.org/software/gnu-c-manual/gnu-c-manual.html
* http://www.acm.uiuc.edu/webmonkeys/book/c_guide/
* http://www.cplusplus.com/reference/
* http://www.crasseux.com/books/ctutorial/
* http://gcc.gnu.org/
