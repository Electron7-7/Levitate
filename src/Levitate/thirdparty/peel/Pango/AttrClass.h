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
struct AttrClass;
enum class AttrType : std::underlying_type<::PangoAttrType>::type;
} /* namespace Pango */


namespace Pango
{
struct AttrClass
{
private:
  AttrClass () = delete;
  AttrClass (const AttrClass &) = delete;
  AttrClass (AttrClass &&) = delete;
  ~AttrClass ();

public:
  AttrType type;
private:
  decltype (::PangoAttrClass::copy) copy;
  decltype (::PangoAttrClass::destroy) destroy;
  decltype (::PangoAttrClass::equal) equal;

public:
}; /* record AttrClass */

static_assert (sizeof (AttrClass) == sizeof (::PangoAttrClass),
               "AttrClass size mismatch");
static_assert (alignof (AttrClass) == alignof (::PangoAttrClass),
               "AttrClass align mismatch");

} /* namespace Pango */
} /* namespace peel */

peel_end_header
