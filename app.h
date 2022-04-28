//
// Created by arek on 26.04.2022.
//

#ifndef CPP_CPU_TRUCKER_APP_H
#define CPP_CPU_TRUCKER_APP_H

#include "SafeQueue.hpp"
#include "Reader.h"
#include "Analyzer.h"
#include "Printer.h"

class app {
public:
    app();

    void start();

    ~app();

private:
    SafeQueue<std::vector<cpu_single_mess>> mess_reader_analyzer_queue;
    SafeQueue<std::vector<cpu_usage>> mess_analyzer_printer_queue;

    Reader *reader;
    Analyzer *analyzer;
    Printer *printer;

    bool finish_work;
};


#endif //CPP_CPU_TRUCKER_APP_H
