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
#include <peel/GLib/SList.h>

peel_begin_header

namespace peel
{
namespace Pango
{
struct Analysis;
class Font;
class /* record */ Language;
} /* namespace Pango */


namespace Pango
{
struct Analysis
{
private:

public:
  void *shape_engine;
  void *lang_engine;
  Font *font;
  uint8_t level;
  uint8_t gravity;
  uint8_t flags;
  uint8_t script;
  Language *language;
  GLib::SListRef<void * const> extra_attrs;
}; /* record Analysis */

static_assert (sizeof (Analysis) == sizeof (::PangoAnalysis),
               "Analysis size mismatch");
static_assert (alignof (Analysis) == alignof (::PangoAnalysis),
               "Analysis align mismatch");

} /* namespace Pango */
} /* namespace peel */

peel_end_header
