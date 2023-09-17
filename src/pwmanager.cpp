#include "pwmanager.h"
#include <stdexcept>

PWManager::PWManager(BaseObjectType* cobject,
	const Glib::RefPtr<Gtk::Builder>& refBuilder)
	: Gtk::ApplicationWindow(cobject),
	m_refBuilder(refBuilder)
{
}

// static
PWManager* PWManager::create()
{
  // Load the Builder file and instantiate its widgets.
  auto refBuilder = Gtk::Builder::create_from_resource("/org/gtkmm/pwmanager/pwmanager.ui");

  auto window = Gtk::Builder::get_widget_derived<PWManager>(refBuilder, "pwmanager_window");
  if (!window)
    throw std::runtime_error("No \"pwmanager_window\" object in pwmanager.ui");

  return window;
}

void PWManager::open_file_view(const Glib::RefPtr<Gio::File>& /* file */)
{
}