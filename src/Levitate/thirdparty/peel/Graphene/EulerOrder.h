#pragma once

/* Auto-generated, do not modify */
/* Package graphene-gobject-1.0 */

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
#include <graphene-gobject.h>

peel_begin_header

namespace peel
{
namespace Graphene
{
enum class EulerOrder : std::underlying_type<::graphene_euler_order_t>::type;
} /* namespace Graphene */

template<>
struct GObject::Value::Traits<Graphene::EulerOrder>
{
  typedef Graphene::EulerOrder UnownedType;

  static Graphene::EulerOrder
  get (const ::GValue *value)
  {
    return static_cast<Graphene::EulerOrder> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Graphene::EulerOrder m)
  {
    g_value_set_enum (value, static_cast<::graphene_euler_order_t> (m));
  }

  static void
  set_marshal_return (::GValue *value, Graphene::EulerOrder m)
  {
    set (value, m);
  }

  static Graphene::EulerOrder
  cast_for_create (Graphene::EulerOrder m) noexcept
  {
    return m;
  }
};


namespace Graphene
{
enum class EulerOrder : std::underlying_type<::graphene_euler_order_t>::type
{
  DEFAULT = GRAPHENE_EULER_ORDER_DEFAULT,
  XYZ = GRAPHENE_EULER_ORDER_XYZ,
  YZX = GRAPHENE_EULER_ORDER_YZX,
  ZXY = GRAPHENE_EULER_ORDER_ZXY,
  XZY = GRAPHENE_EULER_ORDER_XZY,
  YXZ = GRAPHENE_EULER_ORDER_YXZ,
  ZYX = GRAPHENE_EULER_ORDER_ZYX,
  SXYZ = GRAPHENE_EULER_ORDER_SXYZ,
  SXYX = GRAPHENE_EULER_ORDER_SXYX,
  SXZY = GRAPHENE_EULER_ORDER_SXZY,
  SXZX = GRAPHENE_EULER_ORDER_SXZX,
  SYZX = GRAPHENE_EULER_ORDER_SYZX,
  SYZY = GRAPHENE_EULER_ORDER_SYZY,
  SYXZ = GRAPHENE_EULER_ORDER_SYXZ,
  SYXY = GRAPHENE_EULER_ORDER_SYXY,
  SZXY = GRAPHENE_EULER_ORDER_SZXY,
  SZXZ = GRAPHENE_EULER_ORDER_SZXZ,
  SZYX = GRAPHENE_EULER_ORDER_SZYX,
  SZYZ = GRAPHENE_EULER_ORDER_SZYZ,
  RZYX = GRAPHENE_EULER_ORDER_RZYX,
  RXYX = GRAPHENE_EULER_ORDER_RXYX,
  RYZX = GRAPHENE_EULER_ORDER_RYZX,
  RXZX = GRAPHENE_EULER_ORDER_RXZX,
  RXZY = GRAPHENE_EULER_ORDER_RXZY,
  RYZY = GRAPHENE_EULER_ORDER_RYZY,
  RZXY = GRAPHENE_EULER_ORDER_RZXY,
  RYXY = GRAPHENE_EULER_ORDER_RYXY,
  RYXZ = GRAPHENE_EULER_ORDER_RYXZ,
  RZXZ = GRAPHENE_EULER_ORDER_RZXZ,
  RXYZ = GRAPHENE_EULER_ORDER_RXYZ,
  RZYZ = GRAPHENE_EULER_ORDER_RZYZ,
}; /* enum EulerOrder */


} /* namespace Graphene */
} /* namespace peel */

peel_end_header
