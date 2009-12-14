; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CPenParam
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "demo.h"
LastPage=0

ClassCount=12
Class1=CDemoApp
Class2=CDemoDoc
Class3=CDemoView
Class4=CMainFrame

ResourceCount=9
Resource1=IDD_ABOUTBOX
Class5=CAboutDlg
Resource2=IDD_LOADFILE
Class6=SelectDLG
Resource3=IDD_SELECTDLG
Class7=CControlWnd
Resource4=IDR_MAINFRAME
Class8=CInputScanName
Resource5=IDD_InputScanName
Class9=CPenParam
Resource6=IDD_PENPARA
Class10=CScanObj
Resource7=IDD_SCANOBJ
Class11=CLoadEzdFile
Resource8=IDD_ControlWnd
Class12=CChooseField
Resource9=IDD_CHOOSEFIELD

[CLS:CDemoApp]
Type=0
HeaderFile=demo.h
ImplementationFile=demo.cpp
Filter=N
BaseClass=CWinApp
VirtualFilter=AC
LastObject=CDemoApp

[CLS:CDemoDoc]
Type=0
HeaderFile=demoDoc.h
ImplementationFile=demoDoc.cpp
Filter=N

[CLS:CDemoView]
Type=0
HeaderFile=demoView.h
ImplementationFile=demoView.cpp
Filter=C
BaseClass=CView
VirtualFilter=VWC
LastObject=CDemoView


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
BaseClass=CFrameWnd
VirtualFilter=fWC
LastObject=IDM_SHOW_MESH




[CLS:CAboutDlg]
Type=0
HeaderFile=demo.cpp
ImplementationFile=demo.cpp
Filter=D
LastObject=CAboutDlg

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_LOAD
Command2=ID_SAVETRINDEX
Command3=IDM_SHOW_POINTS
Command4=IDM_SHOW_MESH
Command5=ID_LIGHT
Command6=IDM_TEXTURE_MAPPING
Command7=ID_SHOWAXIS
Command8=ID_SHOWINDEX
Command9=ID_SHOWBACK
Command10=ID_XYROTATE
Command11=ID_ZROTATE
Command12=ID_XYSHIFT
Command13=ID_ANIMATE
Command14=ID_ENABLESELECT
Command15=ID_BACKWARD
Command16=ID_SAVERESULT
Command17=ID_VIEW_TOOLBAR
Command18=ID_VIEW_STATUS_BAR
Command19=ID_APP_ABOUT
CommandCount=19

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[TB:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_LOAD
Command2=IDM_SHOW_POINTS
Command3=IDM_SHOW_MESH
Command4=ID_LIGHT
Command5=IDM_TEXTURE_MAPPING
Command6=ID_XYROTATE
Command7=ID_ZROTATE
Command8=ID_XYSHIFT
Command9=ID_RESETCAM
Command10=ID_SHOWAXIS
Command11=ID_SHOWINDEX
Command12=ID_SHOWBACK
Command13=ID_ANIMATE
Command14=ID_ENABLESELECT
Command15=ID_BACKWARD
Command16=ID_SAVERESULT
Command17=ID_APP_ABOUT
CommandCount=17

[DLG:IDD_SELECTDLG]
Type=1
Class=SelectDLG
ControlCount=14
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342177292
Control4=IDC_3DPOS,edit,1350631552
Control5=IDC_LOAD3D,button,1342242816
Control6=IDC_STATIC,static,1342308352
Control7=IDC_2DPOS,edit,1350631552
Control8=IDC_LOAD2D,button,1342242816
Control9=IDC_STATIC,static,1342308352
Control10=IDC_TEXPOS,edit,1350631552
Control11=IDC_LOADTEX,button,1342242816
Control12=IDC_STATIC,static,1342308364
Control13=IDC_TRIPOS,edit,1350631552
Control14=IDC_LOADTRI,button,1342242816

[CLS:SelectDLG]
Type=0
HeaderFile=SelectDLG.h
ImplementationFile=SelectDLG.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_3DPOS
VirtualFilter=dWC

[DLG:IDD_ControlWnd]
Type=1
Class=CControlWnd
ControlCount=35
Control1=IDC_exitProgram,button,1342242816
Control2=IDC_AMP,button,1342242816
Control3=IDC_STATIC,button,1342177287
Control4=IDC_SHR,button,1342242816
Control5=IDC_BACK,button,1342242816
Control6=IDC_STATIC,button,1342177287
Control7=IDC_LightOFF,button,1342308361
Control8=IDC_LightON,button,1342177289
Control9=IDC_STATIC,button,1342177287
Control10=IDC_STATIC,static,1342308352
Control11=IDC_RotateX,msctls_trackbar32,1342242840
Control12=IDC_STATIC,static,1342308352
Control13=IDC_RotateY,msctls_trackbar32,1342242840
Control14=IDC_STATIC,static,1342308352
Control15=IDC_RotateZ,msctls_trackbar32,1342242840
Control16=IDC_SHOWANGLE,static,1342308352
Control17=IDC_SaveData,button,1342242816
Control18=IDC_SHowGAngle,static,1342308352
Control19=IDC_READGPIB,button,1342242816
Control20=IDC_STATIC,static,1342308352
Control21=IDC_DELTHA,edit,1350631552
Control22=IDC_UPDATA,button,1342242816
Control23=IDC_READFROMDB,button,1342242816
Control24=IDC_STATIC,button,1342177287
Control25=IDC_STATIC,button,1342177287
Control26=IDC_STATIC,button,1342177287
Control27=IDC_STATIC,button,1342177287
Control28=IDC_STATIC,static,1342308352
Control29=IDC_SCAN,edit,1350631552
Control30=IDC_STATIC,static,1342308352
Control31=IDC_DELETENUM,edit,1350631552
Control32=IDC_LOADEZDFILE,button,1342242816
Control33=IDC_PENPARAM,button,1342242816
Control34=IDC_SCANBASICOBJ,button,1342242816
Control35=IDC_RESET,button,1342242816

[CLS:CControlWnd]
Type=0
HeaderFile=ControlWnd.h
ImplementationFile=ControlWnd.cpp
BaseClass=CFormView
Filter=D
LastObject=CControlWnd
VirtualFilter=VWC

[DLG:IDD_InputScanName]
Type=1
Class=CInputScanName
ControlCount=6
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_INPUTSCANNAME,edit,1350631552
Control5=IDC_STATICSCAN,static,1342308352
Control6=IDC_SCANNUMQUERY,edit,1350631552

[CLS:CInputScanName]
Type=0
HeaderFile=InputScanName.h
ImplementationFile=InputScanName.cpp
BaseClass=CDialog
Filter=D
LastObject=CInputScanName
VirtualFilter=dWC

[DLG:IDD_PENPARA]
Type=1
Class=CPenParam
ControlCount=12
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_STATIC,static,1342308352
Control6=IDC_STATIC,static,1342308352
Control7=IDC_STATIC,static,1342308352
Control8=IDC_STATIC,static,1342308352
Control9=IDC_STATIC,static,1342308352
Control10=IDC_STATIC,static,1342308352
Control11=IDC_STATIC,static,1342308352
Control12=IDC_STATIC,static,1342308352

[CLS:CPenParam]
Type=0
HeaderFile=PenParam.h
ImplementationFile=PenParam.cpp
BaseClass=CDialog
Filter=D
LastObject=CPenParam

[DLG:IDD_SCANOBJ]
Type=1
Class=CScanObj
ControlCount=8
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_SCANSTART,button,1342242816
Control4=IDC_COUNTDISTANCE,button,1342242816
Control5=IDC_EDIT1,edit,1350631552
Control6=IDC_STATIC,static,1342308352
Control7=IDC_STATIC,static,1342308352
Control8=IDC_EDIT2,edit,1350631552

[CLS:CScanObj]
Type=0
HeaderFile=ScanObj.h
ImplementationFile=ScanObj.cpp
BaseClass=CDialog
Filter=D
LastObject=CScanObj

[DLG:IDD_LOADFILE]
Type=1
Class=CLoadEzdFile
ControlCount=7
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EZDFILENAME,edit,1350631552
Control5=IDC_FILESCAN,button,1342242816
Control6=IDC_STATIC_WND,static,1342177287
Control7=IDC_STATIC,static,1342308352

[CLS:CLoadEzdFile]
Type=0
HeaderFile=LoadEzdFile.h
ImplementationFile=LoadEzdFile.cpp
BaseClass=CDialog
Filter=D
LastObject=CLoadEzdFile
VirtualFilter=dWC

[DLG:IDD_CHOOSEFIELD]
Type=1
Class=CChooseField
ControlCount=4
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_FIELD,listbox,1352728835

[CLS:CChooseField]
Type=0
HeaderFile=ChooseField.h
ImplementationFile=ChooseField.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_FIELD
VirtualFilter=dWC

