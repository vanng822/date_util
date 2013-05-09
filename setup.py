
import os
from setuptools import setup, find_packages
from distutils.core import Extension

date_util = Extension('date_util', sources = ['src/cdate_util.c'])

here = os.path.abspath(os.path.dirname(__file__))

setup(name='date_util',
      version='0.1',
      author='',
      author_email='',
      url='',
      packages=find_packages(),
      test_suite="tests",    
      ext_modules = [date_util],
)