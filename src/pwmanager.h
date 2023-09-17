#ifndef GTKMM_PWMANAGER_H
#define GTKMM_PWMANAGER_H

#include <gtkmm/window.h>
#include <gtkmm/builder.h>

class PWManager;

class PWManager : public Gtk::ApplicationWindow {
public:
	PWManager(BaseObjectType* cobject, const Glib::RefPtr<Gtk::Builder>& refBuilder);

	static PWManager* create();

	void open_file_view(const Glib::RefPtr<Gio::File>& file);
protected:
	Glib::RefPtr<Gtk::Builder> m_refBuilder;
};

#endif // GTKMM_PWMANAGER_H