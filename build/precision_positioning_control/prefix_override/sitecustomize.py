import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/uj/Downloads/precision_positioning_ws/install/precision_positioning_control'
