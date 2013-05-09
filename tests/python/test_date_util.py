import unittest
from datetime import date
import date_util

test_data = [
             {"start_date": date(2012,10,13), "end_date": date(2012,10,25)},
             {"start_date": date(2012,11,12), "end_date": date(2012,11,25)},
             {"start_date": date(2012,12,10), "end_date": date(2012,12,25)}
            ]

class DateUtilTest(unittest.TestCase):
    def test_merge_date(self):
        #print date(2012,12,23)
        date_util.merge_interval(test_data, {"start_date": date(2012,12,23), "end_date": date(2012,12,25)})
        
#        self.assertListEqual([
#             {"start_date": date(2012,10,13), "end_date": date(2012,10,25)},
#             {"start_date": date(2012,11,12), "end_date": date(2012,11,25)},
#             {"start_date": date(2012,12,10), "end_date": date(2012,12,25)}
#            ],
#            DateUtil.merge_interval(test_data, {"start_date": date(2012,12,23), "end_date": date(2012,12,25)}))
#        
        