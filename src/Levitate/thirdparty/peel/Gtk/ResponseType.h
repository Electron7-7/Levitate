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
enum class ResponseType : std::underlying_type<::GtkResponseType>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::ResponseType>
{
  typedef Gtk::ResponseType UnownedType;

  static Gtk::ResponseType
  get (const ::GValue *value)
  {
    return static_cast<Gtk::ResponseType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::ResponseType m)
  {
    g_value_set_enum (value, static_cast<::GtkResponseType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::ResponseType m)
  {
    set (value, m);
  }

  static Gtk::ResponseType
  cast_for_create (Gtk::ResponseType m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::ResponseType> ()
{
  return gtk_response_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::ResponseType>
{
  Gtk::ResponseType default_value;

  constexpr PspecTraits (Gtk::ResponseType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_response_type_get_type (),
                              static_cast<::GtkResponseType> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class ResponseType : std::underlying_type<::GtkResponseType>::type
{
  NONE = GTK_RESPONSE_NONE,
  REJECT = GTK_RESPONSE_REJECT,
  ACCEPT = GTK_RESPONSE_ACCEPT,
  DELETE_EVENT = GTK_RESPONSE_DELETE_EVENT,
  OK = GTK_RESPONSE_OK,
  CANCEL = GTK_RESPONSE_CANCEL,
  CLOSE = GTK_RESPONSE_CLOSE,
  YES_ = GTK_RESPONSE_YES,
  NO_ = GTK_RESPONSE_NO,
  APPLY = GTK_RESPONSE_APPLY,
  HELP = GTK_RESPONSE_HELP,
}; /* enum ResponseType */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
