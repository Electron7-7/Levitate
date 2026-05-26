#pragma once

/* Auto-generated, do not modify */
/* Package gtk4 */

#include <peel/GObject/Type.h>
#include <peel/RefPtr.h>
#include <peel/FloatPtr.h>
#include <peel/UniquePtr.h>
#include <peel/ArrayRef.h>
#include <peel/String.h>
#include <peel/signal.h>
#include <peel/callback.h>
#include <peel/property.h>
#include <peel/lang.h>
#include <cstdint>
#include <utility>
#include <gtk/gtk.h>
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class NotebookPage;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::NotebookPage> ()
{
  return gtk_notebook_page_get_type ();
}


namespace Gtk
{
class NotebookPage : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  NotebookPage () = delete;
  NotebookPage (const NotebookPage &) = delete;
  NotebookPage (NotebookPage &&) = delete;
  NotebookPage &
  operator = (const NotebookPage &) = delete;
  NotebookPage &
  operator = (NotebookPage &&) = delete;
  ~NotebookPage () = delete;
public:

  peel_returns_nonnull
  Widget *
  get_child () noexcept
  {
    ::GtkNotebookPage *_peel_this = reinterpret_cast<::GtkNotebookPage *> (this);
    ::GtkWidget *_peel_return = gtk_notebook_page_get_child (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  static peel::Property<Widget>
  prop_child ()
  {
    return peel::Property<Widget> { "child" };
  }

  static peel::Property<bool>
  prop_detachable ()
  {
    return peel::Property<bool> { "detachable" };
  }

  static peel::Property<Widget>
  prop_menu ()
  {
    return peel::Property<Widget> { "menu" };
  }

  static peel::Property<const char *>
  prop_menu_label ()
  {
    return peel::Property<const char *> { "menu-label" };
  }

  static peel::Property<int>
  prop_position ()
  {
    return peel::Property<int> { "position" };
  }

  static peel::Property<bool>
  prop_reorderable ()
  {
    return peel::Property<bool> { "reorderable" };
  }

  static peel::Property<Widget>
  prop_tab ()
  {
    return peel::Property<Widget> { "tab" };
  }

  static peel::Property<bool>
  prop_tab_expand ()
  {
    return peel::Property<bool> { "tab-expand" };
  }

  static peel::Property<bool>
  prop_tab_fill ()
  {
    return peel::Property<bool> { "tab-fill" };
  }

  static peel::Property<const char *>
  prop_tab_label ()
  {
    return peel::Property<const char *> { "tab-label" };
  }
}; /* class NotebookPage */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
