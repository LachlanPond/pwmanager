#include "pwmanager.h"
#include <gtkmm/application.h>

int main(int argc, char* argv[]) {
	auto app = Gtk::Application::create("org.pwmanager.main");
	return app->make_window_and_run<PWManager>(argc,argv);
}