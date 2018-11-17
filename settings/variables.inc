[Variables]
;===================================
; Disk name
;===================================

Disk1=C
Disk2=D

;===================================
; Update frequency
;===================================

DiskUsageInterval=60

;===================================
; Meter size
;===================================

Spacing=5

; Font size
Font=Arial
FontSize=18
FontSizeLarge=24
StringOffset=28 ; FontSize + Spacing*2
StringOffsetLarge=34 ; FontSizeLarge + Spacing*2

; Drawing area size
Width=400
; Height=1235
Height=2160
x0=#Spacing#
dx=390 ; Width - Spacing*2
x1=395 ; Width - Spacing

; Graph size
GraphHeight=50
GraphOffset=55 ; GraphHeight + Spacing
FlipGraphOffset=38
UnderLineOffset=#HistogramHeight#r
LineHeight=1
UnderLineHeight=1
SeparatorHeight=1
BarOffset=56 ; StringOffset*2
BarHeight=100 ; GraphHeight*2
BatteryBarHeight=10

;===================================
; Color name
;===================================

; alpha
Full=80
Semi=100
Normal=200
Opaque=255

; RGB
White=255,255,255
Gray=191,191,191
Black=0,0,0
Red=255,127,127
Magenta=255,127,191
Purple=255,127,255
DarkPurple=191,127,255
Blue=127,127,255
SkyBlue=127,191,255
Cyan=127,255,255
LightGreen=127,255,191
Green=127,255,127
YellowGreen=191,255,127
Yellow=255,255,127
Orange=255,191,127

;===================================
; Meter color
;===================================

BackgroundColor=#Black#,170
GraphBackgroundColor=#Black#,#Semi#
UnderLineColor=#White#,#Normal#
SeparatorColor=#Gray#,#Normal#

FontColor=#White#,#Opaque#

CpuColor=#Red#
CpuBarColor=#CpuColor#,#Full#
CpuFillColor=#CpuColor#,#Semi#
CpuLineColor=#CpuColor#,#Normal#
CpuFontColor=#CpuColor#,#Opaque#

CpuTempColor=#Orange#
CpuTempBarColor=#CpuTempColor#,#Full#
CpuTempFillColor=#CpuTempColor#,#Semi#
CpuTempLineColor=#CpuTempColor#,#Normal#
CpuTempFontColor=#CpuTempColor#,#Opaque#

RamColor=#Yellow#
RamBarColor=#RamColor#,#Full#
RamFillColor=#RamColor#,#Semi#
RamLineColor=#RamColor#,#Normal#
RamFontColor=#RamColor#,#Opaque#

Disk1Color=#YellowGreen#
Disk1BarColor=#Disk1Color#,#Full#
Disk1FillColor=#Disk1Color#,#Semi#
Disk1LineColor=#Disk1Color#,#Normal#
Disk1FontColor=#Disk1Color#,#Opaque#

Disk2Color=#Green#
Disk2BarColor=#Disk2Color#,#Full#
Disk2FillColor=#Disk2Color#,#Semi#
Disk2LineColor=#Disk2Color#,#Normal#
Disk2FontColor=#Disk2Color#,#Opaque#

Disk3Color=#LightGreen#
Disk3BarColor=#Disk3Color#,#Full#
Disk3FillColor=#Disk3Color#,#Semi#
Disk3LineColor=#Disk3Color#,#Normal#
Disk3FontColor=#Disk3Color#,#Opaque#

NetworkColor=#Blue#
NetWorkBarColor=#NetWorkColor#,#Full#
NetWorkFillColor=#NetWorkColor#,#Semi#
NetWorkLineColor=#NetWorkColor#,#Normal#
NetworkFontColor=#NetworkColor#,#Opaque#

BatteryColor=#DarkPurple#
BatteryBarColor=#BatteryColor#,#Normal#
BatteryFillColor=#BatteryColor#,#Semi#
BatteryLineColor=#BatteryColor#,#Normal#
BatteryFontColor=#BatteryColor#,#Opaque#
