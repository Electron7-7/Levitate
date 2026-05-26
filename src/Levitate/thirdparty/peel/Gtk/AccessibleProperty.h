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
#include <peel/Gtk/Accessible.h>

peel_begin_header

namespace peel
{
namespace GObject
{
struct Value;
} /* namespace GObject */

namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::Accessible::Property>
{
  typedef Gtk::Accessible::Property UnownedType;

  static Gtk::Accessible::Property
  get (const ::GValue *value)
  {
    return static_cast<Gtk::Accessible::Property> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::Accessible::Property m)
  {
    g_value_set_enum (value, static_cast<::GtkAccessibleProperty> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::Accessible::Property m)
  {
    set (value, m);
  }

  static Gtk::Accessible::Property
  cast_for_create (Gtk::Accessible::Property m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::Accessible::Property> ()
{
  return gtk_accessible_property_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::Accessible::Property>
{
  Gtk::Accessible::Property default_value;

  constexpr PspecTraits (Gtk::Accessible::Property default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_accessible_property_get_type (),
                              static_cast<::GtkAccessibleProperty> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class Accessible::Property : std::underlying_type<::GtkAccessibleProperty>::type
{
  AUTOCOMPLETE = GTK_ACCESSIBLE_PROPERTY_AUTOCOMPLETE,
  DESCRIPTION = GTK_ACCESSIBLE_PROPERTY_DESCRIPTION,
  HAS_POPUP = GTK_ACCESSIBLE_PROPERTY_HAS_POPUP,
  KEY_SHORTCUTS = GTK_ACCESSIBLE_PROPERTY_KEY_SHORTCUTS,
  LABEL = GTK_ACCESSIBLE_PROPERTY_LABEL,
  LEVEL = GTK_ACCESSIBLE_PROPERTY_LEVEL,
  MODAL = GTK_ACCESSIBLE_PROPERTY_MODAL,
  MULTI_LINE = GTK_ACCESSIBLE_PROPERTY_MULTI_LINE,
  MULTI_SELECTABLE = GTK_ACCESSIBLE_PROPERTY_MULTI_SELECTABLE,
  ORIENTATION = GTK_ACCESSIBLE_PROPERTY_ORIENTATION,
  PLACEHOLDER = GTK_ACCESSIBLE_PROPERTY_PLACEHOLDER,
  READ_ONLY = GTK_ACCESSIBLE_PROPERTY_READ_ONLY,
  REQUIRED = GTK_ACCESSIBLE_PROPERTY_REQUIRED,
  ROLE_DESCRIPTION = GTK_ACCESSIBLE_PROPERTY_ROLE_DESCRIPTION,
  SORT = GTK_ACCESSIBLE_PROPERTY_SORT,
  VALUE_MAX = GTK_ACCESSIBLE_PROPERTY_VALUE_MAX,
  VALUE_MIN = GTK_ACCESSIBLE_PROPERTY_VALUE_MIN,
  VALUE_NOW = GTK_ACCESSIBLE_PROPERTY_VALUE_NOW,
  VALUE_TEXT = GTK_ACCESSIBLE_PROPERTY_VALUE_TEXT,
  HELP_TEXT = GTK_ACCESSIBLE_PROPERTY_HELP_TEXT,
}; /* enum Accessible::Property */

peel_no_warn_unused peel_arg_in (2) peel_nonnull_args (2)
static void
accessible_property_init_value (Accessible::Property property, GObject::Value *value) noexcept
{
  ::GtkAccessibleProperty _peel_property = static_cast<::GtkAccessibleProperty> (property);
  ::GValue *_peel_value = reinterpret_cast<::GValue *> (value);
  gtk_accessible_property_init_value (_peel_property, _peel_value);
}


} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/GObject/Value.h>
