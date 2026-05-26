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
struct AttrFontFeatures;
struct Attribute;
} /* namespace Pango */


namespace Pango
{
struct AttrFontFeatures
{
private:

public:
  Attribute attr;
  const char *features;

  peel_nonnull_args (1)
  static peel::UniquePtr<Attribute>
  new_ (const char *features) noexcept
  {
    ::PangoAttribute *_peel_return = pango_attr_font_features_new (features);
    peel_assume (_peel_return);
    return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
  }
}; /* record AttrFontFeatures */

static_assert (sizeof (AttrFontFeatures) == sizeof (::PangoAttrFontFeatures),
               "AttrFontFeatures size mismatch");
static_assert (alignof (AttrFontFeatures) == alignof (::PangoAttrFontFeatures),
               "AttrFontFeatures align mismatch");

} /* namespace Pango */
} /* namespace peel */

peel_end_header
