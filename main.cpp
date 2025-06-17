#include <fstream>
#include <vector>
#include <sstream>
#include <random>
#include "headerFiles/ChapterOne.h"
#include "HeaderFiles/window_one.h"
#include "HeaderFiles/window_zero.h"

using namespace std;
int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    window_zero w;
    w.setStyleSheet("background-image: url(:/Users/Student/CLionProjects/untitled/icons/blood_wallpaper.png);");
    w.show();
    return QApplication::exec();
}
