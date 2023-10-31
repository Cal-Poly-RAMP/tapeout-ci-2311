FROM efabless/dv:cocotb
WORKDIR /
RUN rm /usr/local/bin/iverilog
RUN apt install iverilog
# RUN git clone https://github.com/steveicarus/iverilog.git && cd iverilog &&     git checkout v10_3 && sh autoconf.sh &&     ./configure && make && make install &&     cd .. && rm -rf iverilog
CMD ["/bin/bash"];