#pragma once

/* Auto-generated, do not modify */
/* Package pango */

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
#include <pango/pango.h>

peel_begin_header

namespace peel
{
namespace Pango
{
enum class RenderPart : std::underlying_type<::PangoRenderPart>::type;
} /* namespace Pango */

template<>
struct GObject::Value::Traits<Pango::RenderPart>
{
  typedef Pango::RenderPart UnownedType;

  static Pango::RenderPart
  get (const ::GValue *value)
  {
    return static_cast<Pango::RenderPart> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Pango::RenderPart m)
  {
    g_value_set_enum (value, static_cast<::PangoRenderPart> (m));
  }

  static void
  set_marshal_return (::GValue *value, Pango::RenderPart m)
  {
    set (value, m);
  }

  static Pango::RenderPart
  cast_for_create (Pango::RenderPart m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Pango::RenderPart> ()
{
  return pango_render_part_get_type ();
}
template<>
struct peel::internals::PspecTraits<Pango::RenderPart>
{
  Pango::RenderPart default_value;

  constexpr PspecTraits (Pango::RenderPart default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              pango_render_part_get_type (),
                              static_cast<::PangoRenderPart> (default_value),
                              basics.flags);
  }
};


namespace Pango
{
enum class RenderPart : std::underlying_type<::PangoRenderPart>::type
{
  FOREGROUND = PANGO_RENDER_PART_FOREGROUND,
  BACKGROUND = PANGO_RENDER_PART_BACKGROUND,
  UNDERLINE = PANGO_RENDER_PART_UNDERLINE,
  STRIKETHROUGH = PANGO_RENDER_PART_STRIKETHROUGH,
  OVERLINE = PANGO_RENDER_PART_OVERLINE,
}; /* enum RenderPart */


} /* namespace Pango */
} /* namespace peel */

peel_end_header
