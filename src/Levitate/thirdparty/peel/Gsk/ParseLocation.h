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

peel_begin_header

namespace peel
{
namespace Gsk
{
struct ParseLocation;
} /* namespace Gsk */


namespace Gsk
{
struct ParseLocation
{
private:
  ParseLocation () = delete;
  ParseLocation (const ParseLocation &) = delete;
  ParseLocation (ParseLocation &&) = delete;
  ~ParseLocation ();

public:
  size_t bytes;
  size_t chars;
  size_t lines;
  size_t line_bytes;
  size_t line_chars;
}; /* record ParseLocation */

static_assert (sizeof (ParseLocation) == sizeof (::GskParseLocation),
               "ParseLocation size mismatch");
static_assert (alignof (ParseLocation) == alignof (::GskParseLocation),
               "ParseLocation align mismatch");

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
