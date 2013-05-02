TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG += qt
QT +=  core
QT += network
QMAKE_CXXFLAGS += -std=c++11

SOURCES += \
    main.cpp \
    example/fileManipulation/ex2.cpp \
    example/serverClient/ex1/server.cpp \
    example/serverClient/ex1/client.cpp \
    example/fileManipulation/ex1.cpp \
    fileHandling/BTRecord.cpp \
    fileHandling/RecordData.cpp \
    fileHandling/ARecord.cpp

OTHER_FILES += \
    doc/RAIDB_UML.xmi

HEADERS += \
    example/serverClient/ex1/server.h \
    example/serverClient/ex1/client.h \
    raid/IRaid.h \
    dataStructure/DLLNode.h \
    dataStructure/DLL.h \
    fileHandling/BTRecord.h \
    fileHandling/ARecord.h \
    fileHandling/IRecordDataType.h \
    fileHandling/RecordData.h \
    fileHandling/RecordDataType.h \
    fileHandling/IRecord.h

