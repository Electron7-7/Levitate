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
enum class MessageType : std::underlying_type<::GtkMessageType>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::MessageType>
{
  typedef Gtk::MessageType UnownedType;

  static Gtk::MessageType
  get (const ::GValue *value)
  {
    return static_cast<Gtk::MessageType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::MessageType m)
  {
    g_value_set_enum (value, static_cast<::GtkMessageType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::MessageType m)
  {
    set (value, m);
  }

  static Gtk::MessageType
  cast_for_create (Gtk::MessageType m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::MessageType> ()
{
  return gtk_message_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::MessageType>
{
  Gtk::MessageType default_value;

  constexpr PspecTraits (Gtk::MessageType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_message_type_get_type (),
                              static_cast<::GtkMessageType> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class MessageType : std::underlying_type<::GtkMessageType>::type
{
  INFO = GTK_MESSAGE_INFO,
  WARNING = GTK_MESSAGE_WARNING,
  QUESTION = GTK_MESSAGE_QUESTION,
  ERROR_ = GTK_MESSAGE_ERROR,
  OTHER = GTK_MESSAGE_OTHER,
}; /* enum MessageType */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
