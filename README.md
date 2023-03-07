![GitHub last commit](https://img.shields.io/github/last-commit/signalius/AAE_Adapter_Arduino?color=red&style=plastic)
[![made-with-Markdown](https://img.shields.io/badge/Made%20with-Markdown-1f425f.svg)](http://commonmark.org)

# MD1213 adapter to arduino

Note: the board contains several errors and should not be used. Wait for a newer version of the board. 


## Hardware

![](/images/pcb.png)

### Description

The board is an Arduino standard overlay and is also compatible with Digilent Zynq boards that have an Arudino connector. For some applications a high switching speed is needed so the FPGA is much more suitable than a regular Arduino. 

### Main components

* MD1213 is a high speed, dual MOSFET driver. It is designed to drive high voltage P and N-channel MOSFET transistors 
* DN2625 is a low threshold depletion-mode (normally-on) transistor

### Tests TX and RX

![](/images/Test1.png)

![](/images/Test2.png)

