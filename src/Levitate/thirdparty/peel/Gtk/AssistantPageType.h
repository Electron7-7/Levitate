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
#include <peel/Gtk/Assistant.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::Assistant::PageType>
{
  typedef Gtk::Assistant::PageType UnownedType;

  static Gtk::Assistant::PageType
  get (const ::GValue *value)
  {
    return static_cast<Gtk::Assistant::PageType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::Assistant::PageType m)
  {
    g_value_set_enum (value, static_cast<::GtkAssistantPageType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::Assistant::PageType m)
  {
    set (value, m);
  }

  static Gtk::Assistant::PageType
  cast_for_create (Gtk::Assistant::PageType m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::Assistant::PageType> ()
{
  return gtk_assistant_page_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::Assistant::PageType>
{
  Gtk::Assistant::PageType default_value;

  constexpr PspecTraits (Gtk::Assistant::PageType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_assistant_page_type_get_type (),
                              static_cast<::GtkAssistantPageType> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class Assistant::PageType : std::underlying_type<::GtkAssistantPageType>::type
{
  CONTENT = GTK_ASSISTANT_PAGE_CONTENT,
  INTRO = GTK_ASSISTANT_PAGE_INTRO,
  CONFIRM = GTK_ASSISTANT_PAGE_CONFIRM,
  SUMMARY = GTK_ASSISTANT_PAGE_SUMMARY,
  PROGRESS = GTK_ASSISTANT_PAGE_PROGRESS,
  CUSTOM = GTK_ASSISTANT_PAGE_CUSTOM,
}; /* enum Assistant::PageType */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
