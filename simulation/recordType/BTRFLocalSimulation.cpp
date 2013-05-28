#include "BTRFLocalSimulation.h"

BTRFLocalSimulation::BTRFLocalSimulation()
{
    mainMenu();
}

void BTRFLocalSimulation::createFile()
{
    _fileSimulation = new BTRFSimulation(createMetadata());
}

void BTRFLocalSimulation::insertRecord()
{
    DLLNode<IRecordDataType*> *current =
        getMetadata()->getRecordStruct()->getHeadPtr();

    DLL<IRecordDataType *> *dataList = new DLL<IRecordDataType*>();

    std::cout << "Registro #" << getMetadata()->getNumberOfRecords() << "\n";

//    RecordDataType<char> *record =
//        dynamic_cast<RecordDataType<char>*>(current->getData());
//    const char *option = record->getDataPtr();

    std::string name, data;
    unsigned short size;
    while (current != nullptr) {
        name = current->getData()->getName();
        size = current->getData()->getSize();

        std::cout << name << ": ";
        std::cin >> data;

        RecordDataType<std::string> *recordList =
            new RecordDataType<std::string>(name, data, size);

        dataList->insertAtBack(recordList);

        current++;
    }

    _fileSimulation->insert(dataList);
}

void BTRFLocalSimulation::deleteRecord()
{
}

void BTRFLocalSimulation::searchRecord()
{
}

BTRecordFileMetadata *BTRFLocalSimulation::createMetadata() const
{
    unsigned short length;
    std::string name, fileName, owner = "LOCAL";
    char field;
    RecordDataType<char> *header;
    DLL<IRecordDataType*> *recordStruct = new DLL<IRecordDataType*>();

    // NOMBRE DE ARCHIVO
    std::cout << "Escriba el nombre del archivo: ";
    std::cin >> fileName;

    // CAMPOS DE REGISTRO

    do {
        std::cout << "Escriba los campos presentes en el registro "
                  << "(0 para salir):\n"
                  << "1. String\n"
                  << "2. Char\n"
                  << "3. Short\n"
                  << "4. Int\n"
                  << "5. Double\n"
                  << "6. Bool\n"
                  << "> ";
        std::cin >> field;

        if (field == '0') {
            break;
        } else if (field > '0' && field < '7') {
            header = new RecordDataType<char>(name, field, length);
            recordStruct->insertAtBack(header);

            std::cout << "\nNombre del campo: ";
            std::cin >> name;

            std::cout << "\nDefina su tamaño (en B): ";
            std::cin >> length;
        } else {
            std::cout << "No existe el tipo especificado\n";
        }
    } while (field != '0');

    std::cout << "\n\n";

    return new BTRecordFileMetadata(fileName, owner, recordStruct);
}

void BTRFLocalSimulation::mainMenu()
{
    std::cout << "¡Bienvenido!\n\n";

    char option;
    do {
        std::cout << "Seleccione lo que desea hacer (0 para salir):\n  "
                  << " 1. Ver contenido del directorio actual\n  "
                  << " 2. Borrar directorio\n  "
                  << " 3. Ir a directorio\n  "
                  << " 4. Crear archivo\n  "
                  << " 5. Ver contenido de archivo\n  "
                  << " 6. Borrar archivo\n  "
                  << " 7. Modificar archivo\n"
                  << "> ";

        std::cin >> option;

        std::cout << "\n";

        switch (option) {
        case '0':
            std::cout << "Bye!";
            break;
        case '4': // crear archivo
            createFile();
            break;
        case '7': // modificar archivo

        default:
            std::cout << "Escogió una opción incorrecta";
            break;
        }

        std::cout << "\n\n";
        // FIXME PONER UN CLEANER AL OPTION PARA CUANDO SE PONGA CERO EN OTROS
        // MENÚ, NO AFECTAR EL DE AQUÍ Y PONERLO TAMBIÉN EN CERO
    } while (option != '0');

    std::cout << "\n\n";
}

IMetadata *BTRFLocalSimulation::getMetadata() const
{
    return _fileSimulation->getMetadata();
}