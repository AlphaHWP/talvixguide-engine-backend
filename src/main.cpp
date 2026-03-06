#include <iostream>
#include <QApplication>
#include <QWidget>

int main(int argc, char* argv[]){
	std::cout << "Hello explorer! Welcome to the Talvixguide." << '\n';

	QApplication app(argc, argv);

	QWidget window;
	window.resize(500, 500);
	window.setWindowTitle("Talvixguide Frontend");
	window.show();

	return app.exec();
}
