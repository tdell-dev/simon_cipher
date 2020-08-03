from INP_DATA import INP_DATA
from INP_DATA import INP_DATA
from INP_DATA import INP_DATA
from INP_DATA import INP_DATA
from INP_KEY import INP_KEY
from INP_KEY import INP_KEY
from INP_KEY import INP_KEY
from INP_KEY import INP_KEY
from INP_KEY import INP_KEY
from INP_KEY import INP_KEY
from INP_KEY import INP_KEY
from INP_KEY import INP_KEY
from START import START
from DONE import DONE
from OUT_DATA import OUT_DATA
from OUT_DATA import OUT_DATA
from OUT_DATA import OUT_DATA
from OUT_DATA import OUT_DATA


class RegHandle(object):
    def __init__(self):
        pass

    def write(self, addr, value):
        pass

    def read(self, addr):
        pass


class simon_cipher_ureg_ctl(object):

    def __init__(self, base_addr):
        self.base_addr = 0x4c300000
        self.handle = RegHandle()
        self.INP_DATA_0 = INP_DATA(handle=self.handle, addr=1278214144)
        self.INP_DATA_1 = INP_DATA(handle=self.handle, addr=1278214148)
        self.INP_DATA_2 = INP_DATA(handle=self.handle, addr=1278214152)
        self.INP_DATA_3 = INP_DATA(handle=self.handle, addr=1278214156)
        self.INP_KEY_0 = INP_KEY(handle=self.handle, addr=1278214160)
        self.INP_KEY_1 = INP_KEY(handle=self.handle, addr=1278214164)
        self.INP_KEY_2 = INP_KEY(handle=self.handle, addr=1278214168)
        self.INP_KEY_3 = INP_KEY(handle=self.handle, addr=1278214172)
        self.INP_KEY_4 = INP_KEY(handle=self.handle, addr=1278214176)
        self.INP_KEY_5 = INP_KEY(handle=self.handle, addr=1278214180)
        self.INP_KEY_6 = INP_KEY(handle=self.handle, addr=1278214184)
        self.INP_KEY_7 = INP_KEY(handle=self.handle, addr=1278214188)
        self.START = START(handle=self.handle, addr=1278214192)
        self.DONE = DONE(handle=self.handle, addr=1278214196)
        self.OUT_DATA_0 = OUT_DATA(handle=self.handle, addr=1278214200)
        self.OUT_DATA_1 = OUT_DATA(handle=self.handle, addr=1278214204)
        self.OUT_DATA_2 = OUT_DATA(handle=self.handle, addr=1278214208)
        self.OUT_DATA_3 = OUT_DATA(handle=self.handle, addr=1278214212)


    def __str__(self):
        pass
