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
#include <peel/Gtk/Image.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::Image::Type>
{
  typedef Gtk::Image::Type UnownedType;

  static Gtk::Image::Type
  get (const ::GValue *value)
  {
    return static_cast<Gtk::Image::Type> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::Image::Type m)
  {
    g_value_set_enum (value, static_cast<::GtkImageType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::Image::Type m)
  {
    set (value, m);
  }

  static Gtk::Image::Type
  cast_for_create (Gtk::Image::Type m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::Image::Type> ()
{
  return gtk_image_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::Image::Type>
{
  Gtk::Image::Type default_value;

  constexpr PspecTraits (Gtk::Image::Type default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_image_type_get_type (),
                              static_cast<::GtkImageType> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class Image::Type : std::underlying_type<::GtkImageType>::type
{
  EMPTY = GTK_IMAGE_EMPTY,
  ICON_NAME = GTK_IMAGE_ICON_NAME,
  GICON = GTK_IMAGE_GICON,
  PAINTABLE = GTK_IMAGE_PAINTABLE,
}; /* enum Image::Type */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
