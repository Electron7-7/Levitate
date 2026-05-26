#include "peel/Gtk/Gtk.h" // IWYU pragma: keep
#include "peel/Gio/ApplicationFlags.h"

using namespace peel;

static void s_BuildUI(Gio::Application* ioApp)
{
    auto _window{Gtk::ApplicationWindow::create(ioApp->cast<Gtk::Application>())};
    auto _child{Gtk::Label::create("Hello World!")};
    _window->set_child(std::move(_child));
    _window->present();
}

int main(int argc, char** argv)
{
    auto _app{Gtk::Application::create("org.debug.Levitate", Gio::Application::Flags::DEFAULT_FLAGS)};
    _app->connect_activate(s_BuildUI);
    return _app->run(argc, argv);
}
