;===================================
; Meters
;===================================
; Background
;===================================

[Background]
Meter=IMAGE
W=#Width#
H=#Height#
SolidColor=#BackgroundColor#

[SeparatorHead]
Meter=IMAGE
SolidColor=#SeparatorColor#
X=#x0#
Y=5r
W=#dx#
H=#SeparatorHeight#

[MeterTime]
Meter=String
MeasureName=MeasureTime
StringAlign=Left
X=#x0#
Y=0r
FontColor=#FontColor#
FontFace=#Font#
FontSize=#FontSizeLarge#
Text=%1
AntiAlias=1

[SeparatorTime]
Meter=IMAGE
SolidColor=#SeparatorColor#
X=#x0#
Y=#StringOffsetLarge#r
W=#dx#
H=#SeparatorHeight#

;===================================
; CPU ;
;===================================

[CpuLabel]
Meter=String
StringAlign=Left
FontFace=#Font#
FontSize=#FontSize#
FontColor=#CpuFontColor#
X=0r
Y=0r
Text=CPU:
AntiAlias=1

[CpuValue]
Meter=String
MeasureName=MeasureCpu
StringAlign=Right
FontFace=#Font#
FontSize=#FontSize#
FontColor=#FontColor#
X=#x1#
Y=0r
Text=%1%
Antialias=1

[CpuLabelUnderline]
Meter=IMAGE
SolidColor=#CpuLineColor#
X=#x0#
Y=#StringOffset#r
W=#dx#
H=#UnderLineHeight#

[CpuGraphBackground]
Meter=IMAGE
x=#x0#
y=0r
W=#dx#
H=#GraphHeight#
SolidColor=#GraphBackgroundColor#

[CpuGraphFill]
Meter=Histogram
MeasureName=MeasureCpu
PrimaryColor=#CpuFillColor#
X=#x0#
;Y=#GraphHeight#r
Y=0r
W=#dx#
H=#GraphHeight#

[CpuGrpahLine]
Meter=Line
MeasureName=MeasureCpu
LineColor=#CpuLineColor#
X=#x0#
Y=0r
W=#dx#
H=#GraphHeight#

[SeparatorCpu]
Meter=IMAGE
SolidColor=#SeparatorColor#
X=#x0#
Y=#GraphOffset#r
W=#dx#
H=#SeparatorHeight#

;===================================
; Process
;===================================

[Item1]
Meter=STRING
StringAlign=Left
X=#x0#
Y=0r
FontFace=#Font#
FontSize=#FontSize#
FontColor=#FontColor#
AntiAlias=1
MeasureName=MeasureProcess1Name

[Number1]
Meter=STRING
StringAlign=Right
X=#x1#
Y=0r
FontFace=#Font#
FontSize=#FontSize#
FontColor=#FontColor#
AntiAlias=1
MeasureName=MeasureProcess1
Text=%1%
NumOfDecimals=1
;Percentual=1

[Item2]
Meter=STRING
StringAlign=Left
X=#x0#
Y=#StringOffset#r
FontFace=#Font#
FontSize=#FontSize#
FontColor=#FontColor#
AntiAlias=1
MeasureName=MeasureProcess2Name

[Number2]
Meter=STRING
StringAlign=Right
X=#x1#
Y=0r
FontFace=#Font#
FontSize=#FontSize#
FontColor=#FontColor#
AntiAlias=1
MeasureName=MeasureProcess2
Text=%1%
NumOfDecimals=1
;Percentual=1

[Item3]
Meter=STRING
StringAlign=Left
X=#x0#
Y=#StringOffset#r
FontFace=#Font#
FontSize=#FontSize#
FontColor=#FontColor#
AntiAlias=1
MeasureName=MeasureProcess3Name

[Number3]
Meter=STRING
StringAlign=Right
X=#x1#
Y=0r
FontFace=#Font#
FontSize=#FontSize#
FontColor=#FontColor#
AntiAlias=1
MeasureName=MeasureProcess3
Text=%1%
NumOfDecimals=1
;Percentual=1

[SeparatorProcess]
Meter=IMAGE
SolidColor=#SeparatorColor#
X=#x0#
Y=#StringOffset#r
W=#dx#
H=#SeparatorHeight#

;===================================
; CPU temperature
;===================================

[CpuTempLabel]
Meter=String
StringAlign=Left
FontFace=#Font#
FontSize=#FontSize#
FontColor=#CpuTempFontColor#
X=0r
Y=0r
Text=Temp.:
AntiAlias=1

[CpuTempValue]
Meter=String
MeasureName=MeasureCpuTemp
StringAlign=Right
FontFace=#Font#
FontSize=#FontSize#
FontColor=#FontColor#
X=#x1#
Y=0r
Postfix=' ÅãC'
Antialias=1

[CpuTempLabelUnderline]
Meter=IMAGE
SolidColor=#CpuTempLineColor#
X=#x0#
Y=#StringOffset#r
W=#dx#
H=#UnderLineHeight#

[CpuTempGraphBackground]
Meter=IMAGE
x=#x0#
y=0r
W=#dx#
H=#GraphHeight#
SolidColor=#GraphBackgroundColor#

[CpuTempGraphFill]
Meter=Histogram
MeasureName=MeasureCpuTemp
PrimaryColor=#CpuTempFillColor#
X=#x0#
Y=0r
W=#dx#
H=#GraphHeight#

[CpuTempGrpahLine]
Meter=Line
MeasureName=MeasureCpuTemp
LineColor=#CpuTempLineColor#
X=#x0#
Y=0r
W=#dx#
H=#GraphHeight#

[SeparatorCpuTemp]
Meter=IMAGE
SolidColor=#SeparatorColor#
X=#x0#
Y=#GraphOffset#r
W=#dx#
H=#SeparatorHeight#

;===================================
; RAM
;===================================

[RamLabel]
Meter=String
StringAlign=Left
FontFace=#Font#
FontSize=#FontSize#
FontColor=#RamFontColor#
X=#x0#
Y=0r
Text=RAM:
AntiAlias=1

[RamValue]
Meter=String
MeasureName=MeasureRam
StringAlign=Right
FontFace=#Font#
FontSize=#FontSize#
FontColor=#FontColor#
X=#x1#
Y=0r
Postfix=%
Antialias=1
Percentual=1

[RamLabelUnderline]
Meter=IMAGE
SolidColor=#RamLineColor#
X=#x0#
Y=#StringOffset#r
W=#dx#
H=#UnderLineHeight#

[RamGraphBackground]
Meter=IMAGE
x=#x0#
y=0r
W=#dx#
H=#GraphHeight#
SolidColor=#GraphBackgroundColor#

[RamGraphFill]
Meter=Histogram
MeasureName=MeasureRam
PrimaryColor=#RamFillColor#
X=#x0#
Y=0r
W=#dx#
H=#GraphHeight#

[RamGrpahLine]
Meter=Line
MeasureName=MeasureRam
LineColor=#RamLineColor#
X=#x0#
Y=0r
W=#dx#
H=#GraphHeight#

[SeparatorRam]
Meter=IMAGE
SolidColor=#SeparatorColor#
X=#x0#
Y=#GraphOffset#r
W=#dx#
H=#SeparatorHeight#

;===================================
; Disk usage and access
;===================================
; Disk 1 (C drive)
;===================================

[Disk1Label]
Meter=String
StringAlign=Left
FontFace=#Font#
FontSize=#FontSize#
FontColor=#Disk1FontColor#
X=0r
Y=0r
Text=#disk1#:
AntiAlias=1

[Disk1Free]
Meter=String
MeasureName=MeasureDisk1Free
MeasureName2=MeasureDisk1Total
MeasureName3=MeasureDisk1FreeRatio
StringAlign=Right
FontFace=#Font#
FontSize=#FontSize#
FontColor=#FontColor#
X=#x1#
Y=0r
Text=%1 GB/%2 GB (%3% free)
Antialias=1
UpdateDivider=#DiskUsageInterval#

[Disk1Bar]
Meter=Bar
MeasureName=MeasureDisk1UsedByte
BarOrientation=HORIZONTAL
BarColor=#Disk1BarColor#
SolidColor=#GraphBackgroundColor#
X=#x0#
Y=#BarOffset#r
W=#dx#
H=#BarHeight#
UpdateDivider=#DiskUsageInterval#

[Disk1ReadLabel]
Meter=String
StringAlign=Left
X=#x0#
Y=-#StringOffset#r
Font=#Font#
FontSize=#FontSize#
FontColor=#Disk1FontColor#
Text=Read:
AntiAlias=1

[Disk1ReadValue]
Meter=String
MeasureName=MeasureDisk1Read
StringAlign=Right
X=#x1#
Y=0r
Font=#Font#
FontSize=#FontSize#
FontColor=#FontColor#
NumOfDecimals=0
Text=%1B
AutoScale=1
AntiAlias=1

[Disk1ReadLabelUnderline]
Meter=IMAGE
SolidColor=#Disk1LineColor#
X=#x0#
Y=#StringOffset#r
W=#dx#
H=#UnderLineHeight#

[Disk1ReadGraphFill]
Meter=Histogram
MeasureName=MeasureDisk1Read
PrimaryColor=#Disk1FillColor#
X=#x0#
Y=0r
W=#dx#
H=#GraphHeight#
AutoScale=1

[Disk1ReadGrpahLine]
Meter=Line
MeasureName=MeasureDisk1Read
LineColor=#Disk1LineColor#
X=#x0#
Y=0r
W=#dx#
H=#GraphHeight#
AutoScale=1

[Disk1WriteGraphFill]
Meter=Histogram
MeasureName=MeasureDisk1Write
PrimaryColor=#Disk1FillColor#
Flip=1
X=#x0#
Y=#GraphHeight#r
W=#dx#
H=#GraphHeight#
AutoScale=1

[Disk1WriteGrpahLine]
Meter=Line
MeasureName=MeasureDisk1Write
LineColor=#Disk1LineColor#
Flip=1
X=#x0#
Y=0r
W=#dx#
H=#GraphHeight#
AutoScale=1

[Disk1WriteLabelUnderline]
Meter=IMAGE
SolidColor=#Disk1LineColor#
X=#x0#
Y=#GraphHeight#r
W=#dx#
H=#UnderLineHeight#

[Disk1WriteLabel]
Meter=String
StringAlign=Left
X=#x0#
Y=0r
Font=#Font#
FontSize=#FontSize#
FontColor=#Disk1FontColor#
Text=Write:
AntiAlias=1

[Disk1WriteValue]
Meter=String
MeasureName=MeasureDisk1Write
StringAlign=Right
X=#x1#
Y=0r
Font=#Font#
FontSize=#FontSize#
FontColor=#FontColor#
NumOfDecimals=0
Text=%1B
AutoScale=1
AntiAlias=1

[SeparatorDisk1]
Meter=IMAGE
SolidColor=#SeparatorColor#
X=#x0#
Y=#StringOffset#r
W=#dx#
H=#SeparatorHeight#

;===================================
; Disk 2 (D drive)
;===================================

[Disk2Label]
Meter=String
StringAlign=Left
FontFace=#Font#
FontSize=#FontSize#
FontColor=#Disk2FontColor#
X=0r
Y=0r
Text=#disk2#:
AntiAlias=1

[Disk2Free]
Meter=String
MeasureName=MeasureDisk2Free
MeasureName2=MeasureDisk2Total
MeasureName3=MeasureDisk2FreeRatio
StringAlign=Right
FontFace=#Font#
FontSize=#FontSize#
FontColor=#FontColor#
X=#x1#
Y=0r
Text=%1 GB/%2 GB (%3% free)
Antialias=1
UpdateDivider=#DiskUsageInterval#

[Disk2Bar]
Meter=Bar
MeasureName=MeasureDisk2UsedByte
BarOrientation=HORIZONTAL
BarColor=#Disk2BarColor#
SolidColor=#GraphBackgroundColor#
X=#x0#
Y=#BarOffset#r
W=#dx#
H=#BarHeight#
UpdateDivider=#DiskUsageInterval#

[Disk2ReadLabel]
Meter=String
StringAlign=Left
X=#x0#
Y=-#StringOffset#r
Font=#Font#
FontSize=#FontSize#
FontColor=#Disk2FontColor#
Text=Read:
AntiAlias=1

[Disk2ReadValue]
Meter=String
MeasureName=MeasureDisk2Read
StringAlign=Right
X=#x1#
Y=0r
Font=#Font#
FontSize=#FontSize#
FontColor=#FontColor#
NumOfDecimals=0
Text=%1B
AntiAlias=1
AutoScale=1

[Disk2ReadLabelUnderline]
Meter=IMAGE
SolidColor=#Disk2LineColor#
X=#x0#
Y=#StringOffset#r
W=#dx#
H=#UnderLineHeight#

[Disk2ReadGraphFill]
Meter=Histogram
MeasureName=MeasureDisk2Read
PrimaryColor=#Disk2FillColor#
X=#x0#
Y=0r
W=#dx#
H=#GraphHeight#
AutoScale=1

[Disk2ReadGrpahLine]
Meter=Line
MeasureName=MeasureDisk2Read
LineColor=#Disk2LineColor#
X=#x0#
Y=0r
W=#dx#
H=#GraphHeight#
AutoScale=1

[Disk2WriteGraphFill]
Meter=Histogram
MeasureName=MeasureDisk2Write
PrimaryColor=#Disk2FillColor#
Flip=1
X=#x0#
Y=#GraphHeight#r
W=#dx#
H=#GraphHeight#
AutoScale=1

[Disk2WriteGrpahLine]
Meter=Line
MeasureName=MeasureDisk2Write
LineColor=#Disk2LineColor#
Flip=1
X=#x0#
Y=0r
W=#dx#
H=#GraphHeight#
AutoScale=1

[Disk2WriteLabelUnderline]
Meter=IMAGE
SolidColor=#Disk2LineColor#
X=#x0#
Y=#GraphHeight#r
W=#dx#
H=#UnderLineHeight#

[Disk2WriteLabel]
Meter=String
StringAlign=Left
X=#x0#
Y=0r
Font=#Font#
FontSize=#FontSize#
FontColor=#Disk2FontColor#
Text=Write:
AntiAlias=1

[Disk2WriteValue]
Meter=String
MeasureName=MeasureDisk2Write
StringAlign=Right
X=#x1#
Y=0r
Font=#Font#
FontSize=#FontSize#
FontColor=#FontColor#
NumOfDecimals=0
Text=%1B
AntiAlias=1
AutoScale=1

[SeparatorDisk2]
Meter=IMAGE
SolidColor=#SeparatorColor#
X=#x0#
Y=#StringOffset#r
W=#dx#
H=#SeparatorHeight#

;===================================
; Network upload/download
;===================================

[NetworkLabel]
Meter=String
StringAlign=Left
X=#x0#
Y=0r
Font=#Font#
FontSize=#FontSize#
FontColor=#NetworkFontColor#
Text=Network
AntiAlias=1

[NetworkUpLabel]
Meter=String
StringAlign=Left
X=#x0#
Y=#StringOffset#r
Font=#Font#
FontSize=#FontSize#
FontColor=#NetworkFontColor#
Text=Uplaod:
AntiAlias=1

[NetworkUpValue]
Meter=String
MeasureName=MeasureNetworkUp
StringAlign=Right
X=#x1#
Y=0r
Font=#Font#
FontSize=#FontSize#
FontColor=#FontColor#
NumOfDecimals=0
Text="%1B"
AutoScale=1
Antialias=1

[NetworkUpLabelUnderline]
Meter=IMAGE
SolidColor=#NetworkLineColor#
X=#x0#
Y=#StringOffset#r
W=#dx#
H=#UnderLineHeight#

[NetworkUpGraphBackground]
Meter=IMAGE
x=#x0#
y=0r
W=#dx#
H=#GraphHeight#
SolidColor=#GraphBackgroundColor#

[NetworkUpGraphFill]
Meter=Histogram
MeasureName=MeasureNetworkUp
PrimaryColor=#NetworkFillColor#
X=#x0#
Y=0r
W=#dx#
H=#GraphHeight#
AutoScale=1

[NetworkUpGrpahLine]
Meter=Line
MeasureName=MeasureNetworkUp
LineColor=#NetworkLineColor#
X=#x0#
Y=0r
W=#dx#
H=#GraphHeight#
AutoScale=1

[NetworkDownGraphBackground]
Meter=IMAGE
x=#x0#
Y=#GraphHeight#r
W=#dx#
H=#GraphHeight#
SolidColor=#GraphBackgroundColor#

[NetworkDownGraphFill]
Meter=Histogram
MeasureName=MeasureNetworkDown
PrimaryColor=#NetworkFillColor#
Flip=1
X=#x0#
y=0r
W=#dx#
H=#GraphHeight#
AutoScale=1

[NetworkDownGrpahLine]
Meter=Line
MeasureName=MeasureNetworkDown
LineColor=#NetworkLineColor#
Flip=1
X=#x0#
Y=0r
W=#dx#
H=#GraphHeight#
AutoScale=1

[NetworkDownLabelUnderline]
Meter=IMAGE
SolidColor=#NetworkLineColor#
X=#x0#
Y=#GraphHeight#r
W=#dx#
H=#UnderLineHeight#

[NetworkDownLabel]
Meter=String
StringAlign=Left
X=#x0#
Y=0r
Font=#Font#
FontSize=#FontSize#
FontColor=#NetworkFontColor#
Text=Download:
AntiAlias=1

[NetworkDownValue]
Meter=String
MeasureName=MeasureNetworkDown
StringAlign=Right
X=#x1#
Y=0r
Font=#Font#
FontSize=#FontSize#
FontColor=#FontColor#
NumOfDecimals=0
AutoScale=1
Text=%1B
AntiAlias=1

[SeparatorNetwork]
Meter=IMAGE
SolidColor=#SeparatorColor#
X=#x0#
Y=#StringOffset#r
W=#dx#
H=#SeparatorHeight#

;===================================
; Battery
;===================================

[Battery Label]
Meter=String
StringAlign=Left
FontFace=#Font#
FontSize=#FontSize#
FontColor=#BatteryFontColor#
X=#x0#
Y=5r
Text=Power:
AntiAlias=1

[BatteryStatus]
Meter=String
MeasureName=MeasureBatteryAcline
MeasureName2=MeasureBatteryStatus
StringAlign=Right
FontFace=#Font#
FontSize=#FontSize#
FontColor=#FontColor#
X=#x1#
Y=0r
Text=%1,%2
AntiAlias=1

[BatteryLife]
Meter=String
MeasureName=MeasureBatteryPercent
StringAlign=Right
FontFace=#Font#
FontSize=#FontSize#
FontColor=#FontColor#
X=#x1#
Y=#StringOffset#r
Text=(%1%)
AntiAlias=1

[Battery Bar]
Meter=Bar
MeasureName=MeasureBatteryPercent
BarOrientation=HORIZONTAL
BarColor=#BatteryBarColor#
SolidColor=#GraphBackgroundColor#
X=#x0#
Y=30r
W=#dx#
H=#BatteryBarHeight#

[Separator10]
Meter=IMAGE
SolidColor=#SeparatorColor#
X=#x0#
Y=15r
W=#dx#
H=#SeparatorHeight#
