import cocotb

class START:

    def __init__(self, handle, addr):
        self.handle = handle
        self.width = 1
        self.addr = addr
        self.type = full
        self.value = 0

    @property
    def width(self):
        return self.width

    @property
    def address(self):
        return self.addr

    @property
    def type(self):
        return self.type


    # If there are no segments in the register, consider it all one value
    @property
    def value(self):
        return self.value

    @cocotb.coroutine
    def write(self, value):
        yield self.handle.write( self.addr, value )

    @cocotb.coroutine
    def refresh(self, value):
        self.value = yield self.handle.read( self.addr )

