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
struct AttrLanguage;
struct Attribute;
class /* record */ Language;
} /* namespace Pango */


namespace Pango
{
struct AttrLanguage
{
private:

public:
  Attribute attr;
  Language *value;

  peel_arg_in (1) peel_nonnull_args (1)
  static peel::UniquePtr<Attribute>
  new_ (Language *language) noexcept
  {
    ::PangoLanguage *_peel_language = reinterpret_cast<::PangoLanguage *> (language);
    ::PangoAttribute *_peel_return = pango_attr_language_new (_peel_language);
    peel_assume (_peel_return);
    return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
  }
}; /* record AttrLanguage */

static_assert (sizeof (AttrLanguage) == sizeof (::PangoAttrLanguage),
               "AttrLanguage size mismatch");
static_assert (alignof (AttrLanguage) == alignof (::PangoAttrLanguage),
               "AttrLanguage align mismatch");

} /* namespace Pango */
} /* namespace peel */

peel_end_header
