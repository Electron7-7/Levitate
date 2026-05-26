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
#include <peel/Gtk/Box.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class ShortcutsGroup;
class ShortcutsSection;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ShortcutsSection> ()
{
  return gtk_shortcuts_section_get_type ();
}


namespace Gtk
{
class ShortcutsSection : public Box
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target, Orientable */
{
private:
  using Box::create;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ShortcutsSection () = delete;
  ShortcutsSection (const ShortcutsSection &) = delete;
  ShortcutsSection (ShortcutsSection &&) = delete;
  ShortcutsSection &
  operator = (const ShortcutsSection &) = delete;
  ShortcutsSection &
  operator = (ShortcutsSection &&) = delete;
  ~ShortcutsSection () = delete;
public:

  peel_nonnull_args (2)
  void
  add_group (ShortcutsGroup *group) noexcept
  {
    ::GtkShortcutsSection *_peel_this = reinterpret_cast<::GtkShortcutsSection *> (this);
    ::GtkShortcutsGroup *_peel_group = reinterpret_cast<::GtkShortcutsGroup *> (group);
    gtk_shortcuts_section_add_group (_peel_this, _peel_group);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_change_current_page (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ShortcutsSection, bool (int)>::_peel_connect_by_name (this, "change-current-page", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_change_current_page (HandlerObject *object, bool (HandlerObject::*handler_method) (ShortcutsSection *, int), bool after = false) noexcept
  {
    return Signal<ShortcutsSection, bool (int)>::_peel_connect_by_name (this, "change-current-page", object, handler_method, after);
  }

  bool
  emit_change_current_page (int offset) noexcept
  {
    return Signal<ShortcutsSection, bool (int)>::_peel_emit_by_name (this, "change-current-page", offset);
  }

  static peel::Property<unsigned>
  prop_max_height ()
  {
    return peel::Property<unsigned> { "max-height" };
  }

  static peel::Property<const char *>
  prop_section_name ()
  {
    return peel::Property<const char *> { "section-name" };
  }

  static peel::Property<const char *>
  prop_title ()
  {
    return peel::Property<const char *> { "title" };
  }

  static peel::Property<const char *>
  prop_view_name ()
  {
    return peel::Property<const char *> { "view-name" };
  }

  class Class : public Box::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class ShortcutsSection */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
