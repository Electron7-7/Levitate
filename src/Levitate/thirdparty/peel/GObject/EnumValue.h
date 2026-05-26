#pragma once

/* Auto-generated, do not modify */
/* Package gobject-2.0 */

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
#include <glib-object.h>

peel_begin_header

namespace peel
{
namespace GObject
{
struct EnumValue;
} /* namespace GObject */


namespace GObject
{
struct EnumValue
{
private:
  EnumValue () = delete;
  EnumValue (const EnumValue &) = delete;
  EnumValue (EnumValue &&) = delete;
  ~EnumValue ();

public:
  int value;
  const char *value_name;
  const char *value_nick;
}; /* record EnumValue */

static_assert (sizeof (EnumValue) == sizeof (::GEnumValue),
               "EnumValue size mismatch");
static_assert (alignof (EnumValue) == alignof (::GEnumValue),
               "EnumValue align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
