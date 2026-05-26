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

peel_begin_header

namespace peel
{
namespace Pango
{
struct AttrFontDesc;
struct Attribute;
class /* record */ FontDescription;
} /* namespace Pango */


namespace Pango
{
struct AttrFontDesc
{
private:

public:
  Attribute attr;
  FontDescription *desc;

  peel_arg_in (1) peel_nonnull_args (1)
  static peel::UniquePtr<Attribute>
  new_ (const FontDescription *desc) noexcept
  {
    const ::PangoFontDescription *_peel_desc = reinterpret_cast<const ::PangoFontDescription *> (desc);
    ::PangoAttribute *_peel_return = pango_attr_font_desc_new (_peel_desc);
    peel_assume (_peel_return);
    return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
  }
}; /* record AttrFontDesc */

static_assert (sizeof (AttrFontDesc) == sizeof (::PangoAttrFontDesc),
               "AttrFontDesc size mismatch");
static_assert (alignof (AttrFontDesc) == alignof (::PangoAttrFontDesc),
               "AttrFontDesc align mismatch");

} /* namespace Pango */
} /* namespace peel */

peel_end_header
