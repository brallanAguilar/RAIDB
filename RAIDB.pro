TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG += qt
QT +=  core
QT += network
Qt += xml
QMAKE_CXXFLAGS += -std=c++0x

SOURCES += \
    example/fileManipulation/ex2.cpp \
    example/fileManipulation/ex1.cpp \
    fileHandling/RecordData.cpp \
    dataStructure/n_aryrecordfilenode.cpp \
    example/fileManipulation/ex3.cpp \
    example/fileManipulation/ex4.cpp \
    example/md5.cpp \
    fileHandling/binaryStruct/BTRecord.cpp \
    fileHandling/binaryStruct/BTRecordFile.cpp \
    fileHandling/binaryStruct/BTRecordFileMetadata.cpp \
    XMLParser.cpp \
    dataStructure/n_aryrecordfilenode.cpp \
    example/fileManipulation/ex5.cpp \
    example/fileManipulation/ex6.cpp \
    example/fileManipulation/ex7.cpp \
    example/fileManipulation/ex8/ClientData.cpp \
    example/fileManipulation/ex8/ex6CreateRandomFile.cpp \
    example/fileManipulation/ex8/ex8WrittingRandomFile.cpp \
    example/fileManipulation/ex8/ex8ReadingRandomFile.cpp \
    example/serverClient/ex1/server.cpp \
    example/serverClient/ex1/client.cpp \
    example/serverClient/ex1/main.cpp \
    main2.cpp \
    example/serverClient/ex1/mainServer.cpp

OTHER_FILES += \
    doc/RAIDB_UML.xmi \
    doc/RAIDB_UML.pdf \
    doc/fileHandling.ods \
    doc/ProtocoloV1.0.pdf \
    doc/recordExample.txt

HEADERS += \
    raid/IRaid.h \
    dataStructure/DLLNode.h \
    dataStructure/DLL.h \
    fileHandling/IRecordDataType.h \
    fileHandling/RecordData.h \
    fileHandling/RecordDataType.h \
    fileHandling/IRecord.h \
    XMLParser.h \
    dataStructure/IN_aryNode.h \
    dataStructure/IN_aryTree.h \
    dataStructure/n_aryrecordfilenode.h \
    fileHandling/IRecordFile.h \
    fileHandling/IMetadata.h \
    fileHandling/binaryStruct/BTRecord.h \
    fileHandling/binaryStruct/BTRecordFile.h \
    fileHandling/binaryStruct/BTRecordFileMetadata.h \
    dataStructure/n_aryrecordfilenode.h \
    example/fileManipulation/ex8/ClientData.h \
    example/serverClient/ex1/client.h \
    example/serverClient/ex1/server.h
