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
struct FlagsValue;
} /* namespace GObject */


namespace GObject
{
struct FlagsValue
{
private:
  FlagsValue () = delete;
  FlagsValue (const FlagsValue &) = delete;
  FlagsValue (FlagsValue &&) = delete;
  ~FlagsValue ();

public:
  unsigned value;
  const char *value_name;
  const char *value_nick;
}; /* record FlagsValue */

static_assert (sizeof (FlagsValue) == sizeof (::GFlagsValue),
               "FlagsValue size mismatch");
static_assert (alignof (FlagsValue) == alignof (::GFlagsValue),
               "FlagsValue align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
