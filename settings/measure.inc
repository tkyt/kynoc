;===================================
; Measures
;===================================
; Date and time
;===================================

[MeasureTime]
Measure=Time
Format=%Y-%m-%d (%a) %H:%M:%S

;===================================
; CPU
;===================================

[MeasureCpu]
Measure=CPU
Processor=0
MinValue=0
MaxValue=100

[MeasureCores]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=SYSTEM\CurrentControlSet\Control\Session Manager\Environment
RegValue=NUMBER_OF_PROCESSORS
UpdateDivider=-1

;===================================
; CPU temperature
;===================================

[MeasureCpuTemp]
Measure=Plugin
Plugin=Coretemp
CoreTempType=Maxtemperature
MinValue=0
MaxValue=100

;===================================
; RAM
;===================================

[MeasureRam]
Measure=PhysicalMemory

;===================================
; Disk usage and access
;===================================
; Disk 1 (C drive)
;===================================

[MeasureDisk1FreeByte]
Measure=FreeDiskSpace
Drive=#disk1#:
UpdateDivider=#DiskUsageInterval#

[MeasureDisk1Free]
Measure=Calc
Formula=MeasureDisk1FreeByte/1024**3
UpdateDivider=#DiskUsageInterval#

[MeasureDisk1UsedByte]
Measure=FreeDiskSpace
Drive=#disk1#:
UpdateDivider=#DiskUsageInterval#
InvertMeasure=1

[MeasureDisk1Used]
Measure=Calc
Formula=MeasureDisk1UsedByte/1024**3
UpdateDivider=#DiskUsageInterval#

[MeasureDisk1Total]
Measure=Calc
Formula=MeasureDisk1Free + MeasureDisk1Used
UpdateDivider=#DiskUsageInterval#

[MeasureDisk1FreeRatio]
Measure=Calc
Formula=MeasureDisk1Free/MeasureDisk1Total*100
UpdateDivider=#DiskUsageInterval#

[MeasureDisk1ReadRaw]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=% Disk Read Time
PerfMonInstance=#Disk1#:

[MeasureDisk1Read]
Measure=calc
Formula=(MeasureDisk1ReadRaw)*1e-5
MinValue=0
MaxValue=100

[MeasureDisk1WriteRaw]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=% Disk Write Time
PerfMonInstance=#Disk1#:

[MeasureDisk1Write]
Measure=calc
Formula=(MeasureDisk1WriteRaw)*1e-5
MinValue=0
MaxValue=100

;===================================
; Disk 2 (D drive)
;===================================

[MeasureDisk2FreeByte]
Measure=FreeDiskSpace
Drive=#Disk2#:
UpdateDivider=#DiskUsageInterval#
IfEqualValue="0:"
ifEqualaction=[!ToggleMeter "Disk2Label"] [!ToggleMeter "Disk2Free"] [!ToggleMeter "Disk2Bar"] [!ToggleMeter "Disk2ReadLabel"] [!ToggleMeter "Disk2ReadValue"] [!ToggleMeter "Disk2ReadLabelUnderline"] [!ToggleMeter "Disk2ReadGraphFill"] [!ToggleMeter "Disk2ReadGrpahLine"] [!ToggleMeter "Disk2WriteGraphFill"] [!ToggleMeter "Disk2WriteGrpahLine"] [!ToggleMeter "Disk2WriteLabelUnderline"] [!ToggleMeter "Disk2WriteLabel"] [!ToggleMeter "Disk2WriteValue"] [!ToggleMeter "SeparatorDisk2"] [!MoveMeter #x0# 560r "NetworkLabel"] [!Redraw]

[MeasureDisk2Free]
Measure=Calc
Formula=MeasureDisk2FreeByte/1024**3
UpdateDivider=#DiskUsageInterval#

[MeasureDisk2UsedByte]
Measure=FreeDiskSpace
Drive=#Disk2#:
UpdateDivider=#DiskUsageInterval#
InvertMeasure=1

[MeasureDisk2Used]
Measure=Calc
Formula=MeasureDisk2UsedByte/1024**3
UpdateDivider=#DiskUsageInterval#

[MeasureDisk2Total]
Measure=Calc
Formula=MeasureDisk2Free + MeasureDisk2Used
UpdateDivider=#DiskUsageInterval#

[MeasureDisk2FreeRatio]
Measure=Calc
Formula=MeasureDisk2Free/MeasureDisk2Total*100
UpdateDivider=#DiskUsageInterval#

;[MeasureUsed2]
;Measure=FreeDiskSpace
;Drive=#disk2#:
;IfEqualValue="0:"
;IfEqualAction=[!ToggleMeter "Disk 2 Free"] [!ToggleMeter "Disk 2 Label"] [!ToggleMeter "Disk 2 Bar"][!MoveMeter 5 376 "Battery Bar"] [!SetOption Background H 413] [!Redraw]
;UpdateDivider=#DiskUsageInterval#

;[MeasureUsed2bar]
;Measure=FreeDiskSpace
;Drive=#disk2#:
;UpdateDivider=#DiskUsageInterval#
;InvertMeasure=1

[MeasureDisk2ReadRaw]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=% Disk Read Time
PerfMonInstance=#Disk2#:

[MeasureDisk2Read]
Measure=calc
Formula=(MeasureDisk2ReadRaw)*1e-5
MinValue=0
MaxValue=100

[MeasureDisk2WriteRaw]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=% Disk Write Time
PerfMonInstance=#Disk2#:

[MeasureDisk2Write]
Measure=calc
Formula=(MeasureDisk2WriteRaw)*1e-5
MinValue=0
MaxValue=100

;===================================
; Network upload
;===================================

[MeasureNetworkUp]
Measure=NetOut
Interface=Best
MinValue=0
MaxValue=10*1048576
DynamicVariables=1

;===================================
; Network download
;===================================

[MeasureNetworkDown]
Measure=NetIn
Interface=Best
MinValue=0
MaxValue=10*1048576
DynamicVariables=1

;===================================
; Battery
;===================================

[MeasureBatteryAcline]
Measure=Plugin
Plugin=PowerPlugin
PowerState=ACLine
Substitute="0":"Battery","1":"Plugged in"

[MeasureBatteryStatus]
Measure=Plugin
Plugin=PowerPlugin
PowerState=STATUS
Substitute="0":"No Battery","1":"Charging","2":"Critical","3":"Low","4":"Not charging"

;[MeasureBatteryLifetime]
;Measure=Plugin
;Plugin=Plugins\PowerPlugin.dll
;PowerState=Lifetime
;Format=%H:%M:%S

[MeasureBatteryPercent]
Measure=Plugin
Plugin=PowerPlugin
PowerState=Percent

;===================================
; Process
;===================================

[MeasureProcess1Raw]
Measure=Plugin
Plugin=AdvancedCPU
TopProcess=1
CPUExclude=Idle
DynamicVariables=1
IfEqualValue=0
IfEqualAction=!HideMeterGroup Process1
IfAboveValue=0
IfAboveAction=!ShowMeterGroup Process1

[MeasureProcess1]
Measure=Calc
Formula=MeasureProcess1Raw*1e-5/MeasureCores

[MeasureProcess1Name]
Measure=Plugin
Plugin=AdvancedCPU
TopProcess=2
CPUExclude=Idle

[MeasureProcess2Raw]
Measure=Plugin
Plugin=AdvancedCPU
TopProcess=1
CPUExclude=Idle;[MeasureProcess1Name]
DynamicVariables=1
IfEqualValue=0
IfEqualAction=!HideMeterGroup Process2
IfAboveValue=0
IfAboveAction=!ShowMeterGroup Process2

[MeasureProcess2]
Measure=Calc
Formula=MeasureProcess2Raw*1e-5/MeasureCores

[MeasureProcess2Name]
Measure=Plugin
Plugin=AdvancedCPU
TopProcess=2
CPUExclude=Idle;[MeasureProcess1Name]
DynamicVariables=1

[MeasureProcess3Raw]
Measure=Plugin
Plugin=AdvancedCPU
TopProcess=1
CPUExclude=Idle;[MeasureProcess1Name];[MeasureProcess2Name]
DynamicVariables=1
IfEqualValue=0
IfEqualAction=!HideMeterGroup Process3
IfAboveValue=0
IfAboveAction=!ShowMeterGroup Process3

[MeasureProcess3]
Measure=Calc
Formula=MeasureProcess3Raw*1e-5/MeasureCores

[MeasureProcess3Name]
Measure=Plugin
Plugin=AdvancedCPU
TopProcess=2
CPUExclude=Idle;[MeasureProcess1Name];[MeasureProcess2Name]
DynamicVariables=1
