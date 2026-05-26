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
#include <peel/Gsk/Transform.h>

peel_begin_header

namespace peel
{
namespace Gsk
{
} /* namespace Gsk */

template<>
struct GObject::Value::Traits<Gsk::Transform::Category>
{
  typedef Gsk::Transform::Category UnownedType;

  static Gsk::Transform::Category
  get (const ::GValue *value)
  {
    return static_cast<Gsk::Transform::Category> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gsk::Transform::Category m)
  {
    g_value_set_enum (value, static_cast<::GskTransformCategory> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gsk::Transform::Category m)
  {
    set (value, m);
  }

  static Gsk::Transform::Category
  cast_for_create (Gsk::Transform::Category m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gsk::Transform::Category> ()
{
  return gsk_transform_category_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gsk::Transform::Category>
{
  Gsk::Transform::Category default_value;

  constexpr PspecTraits (Gsk::Transform::Category default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gsk_transform_category_get_type (),
                              static_cast<::GskTransformCategory> (default_value),
                              basics.flags);
  }
};


namespace Gsk
{
enum class Transform::Category : std::underlying_type<::GskTransformCategory>::type
{
  UNKNOWN = GSK_TRANSFORM_CATEGORY_UNKNOWN,
  ANY = GSK_TRANSFORM_CATEGORY_ANY,
  _3D = GSK_TRANSFORM_CATEGORY_3D,
  _2D = GSK_TRANSFORM_CATEGORY_2D,
  _2D_AFFINE = GSK_TRANSFORM_CATEGORY_2D_AFFINE,
  _2D_TRANSLATE = GSK_TRANSFORM_CATEGORY_2D_TRANSLATE,
  IDENTITY = GSK_TRANSFORM_CATEGORY_IDENTITY,
}; /* enum Transform::Category */


} /* namespace Gsk */
} /* namespace peel */

peel_end_header
