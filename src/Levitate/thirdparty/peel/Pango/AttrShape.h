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
#include <peel/Pango/Attribute.h>
#include <peel/Pango/Rectangle.h>

peel_begin_header

namespace peel
{
namespace Pango
{
struct AttrShape;
struct Attribute;
struct Rectangle;
} /* namespace Pango */


namespace Pango
{
struct AttrShape
{
private:

public:
  Attribute attr;
  Rectangle ink_rect;
  Rectangle logical_rect;
  void *data;
private:
  ::PangoAttrDataCopyFunc copy_func;
  ::GDestroyNotify destroy_func;

public:
  peel_arg_in (1) peel_arg_in (2) peel_nonnull_args (1, 2)
  static peel::UniquePtr<Attribute>
  new_ (const Rectangle *ink_rect, const Rectangle *logical_rect) noexcept
  {
    const ::PangoRectangle *_peel_ink_rect = reinterpret_cast<const ::PangoRectangle *> (ink_rect);
    const ::PangoRectangle *_peel_logical_rect = reinterpret_cast<const ::PangoRectangle *> (logical_rect);
    ::PangoAttribute *_peel_return = pango_attr_shape_new (_peel_ink_rect, _peel_logical_rect);
    peel_assume (_peel_return);
    return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
  }

  peel_arg_in (1) peel_arg_in (2) peel_nonnull_args (1, 2)
  static peel::UniquePtr<Attribute>
  new_with_data (const Rectangle *ink_rect, const Rectangle *logical_rect, void *data, ::PangoAttrDataCopyFunc copy_func, ::GDestroyNotify destroy_func) noexcept
  {
    const ::PangoRectangle *_peel_ink_rect = reinterpret_cast<const ::PangoRectangle *> (ink_rect);
    const ::PangoRectangle *_peel_logical_rect = reinterpret_cast<const ::PangoRectangle *> (logical_rect);
    ::PangoAttribute *_peel_return = pango_attr_shape_new_with_data (_peel_ink_rect, _peel_logical_rect, data, copy_func, destroy_func);
    peel_assume (_peel_return);
    return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
  }
}; /* record AttrShape */

static_assert (sizeof (AttrShape) == sizeof (::PangoAttrShape),
               "AttrShape size mismatch");
static_assert (alignof (AttrShape) == alignof (::PangoAttrShape),
               "AttrShape align mismatch");

} /* namespace Pango */
} /* namespace peel */

peel_end_header
