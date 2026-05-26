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

peel_begin_header

namespace peel
{
namespace Gtk
{
enum class PackType : std::underlying_type<::GtkPackType>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::PackType>
{
  typedef Gtk::PackType UnownedType;

  static Gtk::PackType
  get (const ::GValue *value)
  {
    return static_cast<Gtk::PackType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::PackType m)
  {
    g_value_set_enum (value, static_cast<::GtkPackType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::PackType m)
  {
    set (value, m);
  }

  static Gtk::PackType
  cast_for_create (Gtk::PackType m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::PackType> ()
{
  return gtk_pack_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::PackType>
{
  Gtk::PackType default_value;

  constexpr PspecTraits (Gtk::PackType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_pack_type_get_type (),
                              static_cast<::GtkPackType> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class PackType : std::underlying_type<::GtkPackType>::type
{
  START = GTK_PACK_START,
  END = GTK_PACK_END,
}; /* enum PackType */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
