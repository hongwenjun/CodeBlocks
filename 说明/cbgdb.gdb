python
import sys
sys.path.insert(0, '')
#from libmy.test import register_my_printers
#register_my_printers (None)
from libstdcxx.v6.printers import register_libstdcxx_printers
register_libstdcxx_printers (None)
from libwx.v28.printers import register_libwx_printers
register_libwx_printers (None)
end
set print elements 200
#set auto-load-scripts no
#set debugevents off
#set print inferior-events on
set backtrace filename-display absolute
