//
// Created by zain on 5/3/18.
//

#ifndef PROJECT_MAINWINDOW_H
#define PROJECT_MAINWINDOW_H

#include "../lib_util/IObserver.h"



namespace Ui {
    class MainWindow : public util::IObserver{
    public:
        MainWindow() = default;
        virtual ~MainWindow() = default;

        void update(util::Subject *subject) override;
    };
}


#endif //PROJECT_MAINWINDOW_H
