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
struct AttrSize;
struct Attribute;
} /* namespace Pango */


namespace Pango
{
struct AttrSize
{
private:
  ::PangoAttrSize inner peel_no_warn_unused;


public:
  static peel::UniquePtr<Attribute>
  new_ (int size) noexcept
  {
    ::PangoAttribute *_peel_return = pango_attr_size_new (size);
    peel_assume (_peel_return);
    return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
  }

  static peel::UniquePtr<Attribute>
  new_absolute (int size) noexcept
  {
    ::PangoAttribute *_peel_return = pango_attr_size_new_absolute (size);
    peel_assume (_peel_return);
    return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
  }
}; /* record AttrSize */

static_assert (sizeof (AttrSize) == sizeof (::PangoAttrSize),
               "AttrSize size mismatch");
static_assert (alignof (AttrSize) == alignof (::PangoAttrSize),
               "AttrSize align mismatch");

} /* namespace Pango */
} /* namespace peel */

peel_end_header

#include <peel/Pango/Attribute.h>
