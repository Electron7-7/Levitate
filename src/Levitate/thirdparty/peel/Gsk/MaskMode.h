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
#include <gsk/gsk.h>

peel_begin_header

namespace peel
{
namespace Gsk
{
enum class MaskMode : std::underlying_type<::GskMaskMode>::type;
} /* namespace Gsk */

template<>
struct GObject::Value::Traits<Gsk::MaskMode>
{
  typedef Gsk::MaskMode UnownedType;

  static Gsk::MaskMode
  get (const ::GValue *value)
  {
    return static_cast<Gsk::MaskMode> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gsk::MaskMode m)
  {
    g_value_set_enum (value, static_cast<::GskMaskMode> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gsk::MaskMode m)
  {
    set (value, m);
  }

  static Gsk::MaskMode
  cast_for_create (Gsk::MaskMode m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gsk::MaskMode> ()
{
  return gsk_mask_mode_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gsk::MaskMode>
{
  Gsk::MaskMode default_value;

  constexpr PspecTraits (Gsk::MaskMode default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gsk_mask_mode_get_type (),
                              static_cast<::GskMaskMode> (default_value),
                              basics.flags);
  }
};


namespace Gsk
{
enum class MaskMode : std::underlying_type<::GskMaskMode>::type
{
  ALPHA = GSK_MASK_MODE_ALPHA,
  INVERTED_ALPHA = GSK_MASK_MODE_INVERTED_ALPHA,
  LUMINANCE = GSK_MASK_MODE_LUMINANCE,
  INVERTED_LUMINANCE = GSK_MASK_MODE_INVERTED_LUMINANCE,
}; /* enum MaskMode */


} /* namespace Gsk */
} /* namespace peel */

peel_end_header
