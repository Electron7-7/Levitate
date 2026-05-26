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
enum class SvgFeatures : std::underlying_type<::GtkSvgFeatures>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::SvgFeatures>
{
  typedef Gtk::SvgFeatures UnownedType;

  static Gtk::SvgFeatures
  get (const ::GValue *value)
  {
    return static_cast<Gtk::SvgFeatures> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gtk::SvgFeatures flags)
  {
    g_value_set_flags (value, static_cast<::GtkSvgFeatures> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::SvgFeatures flags)
  {
    set (value, flags);
  }

  static Gtk::SvgFeatures
  cast_for_create (Gtk::SvgFeatures flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::SvgFeatures> ()
{
  return gtk_svg_features_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::SvgFeatures>
{
  Gtk::SvgFeatures default_value;

  constexpr PspecTraits (Gtk::SvgFeatures default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               gtk_svg_features_get_type (),
                               static_cast<::GtkSvgFeatures> (default_value),
                               basics.flags);
  }
};


namespace Gtk
{
enum class /* bitfield */ SvgFeatures : std::underlying_type<::GtkSvgFeatures>::type
{
  ANIMATIONS = GTK_SVG_ANIMATIONS,
  SYSTEM_RESOURCES = GTK_SVG_SYSTEM_RESOURCES,
  EXTERNAL_RESOURCES = GTK_SVG_EXTERNAL_RESOURCES,
  EXTENSIONS = GTK_SVG_EXTENSIONS,
  TRADITIONAL_SYMBOLIC = GTK_SVG_TRADITIONAL_SYMBOLIC,
}; /* bitfield SvgFeatures */

static constexpr inline SvgFeatures
operator | (SvgFeatures lhs, SvgFeatures rhs)
{
  return SvgFeatures (static_cast<::GtkSvgFeatures> (lhs) | static_cast<::GtkSvgFeatures> (rhs));
}

static constexpr inline SvgFeatures
operator & (SvgFeatures lhs, SvgFeatures rhs)
{
  return SvgFeatures (static_cast<::GtkSvgFeatures> (lhs) & static_cast<::GtkSvgFeatures> (rhs));
}

static constexpr inline SvgFeatures
operator ^ (SvgFeatures lhs, SvgFeatures rhs)
{
  return SvgFeatures (static_cast<::GtkSvgFeatures> (lhs) ^ static_cast<::GtkSvgFeatures> (rhs));
}

static constexpr inline SvgFeatures
operator ~ (SvgFeatures lhs)
{
  return SvgFeatures (~static_cast<::GtkSvgFeatures> (lhs));
}

static inline SvgFeatures &
operator |= (SvgFeatures &lhs, SvgFeatures rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline SvgFeatures &
operator &= (SvgFeatures &lhs, SvgFeatures rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline SvgFeatures &
operator ^= (SvgFeatures &lhs, SvgFeatures rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (SvgFeatures lhs)
{
  return !static_cast<::GtkSvgFeatures> (lhs);
}

static constexpr inline bool
operator + (SvgFeatures lhs)
{
  return !!static_cast<::GtkSvgFeatures> (lhs);
}


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
