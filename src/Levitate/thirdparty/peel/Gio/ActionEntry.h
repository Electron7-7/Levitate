#pragma once

/* Auto-generated, do not modify */
/* Package gio-2.0 */

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
#include <gio/gio.h>

peel_begin_header

namespace peel
{
namespace Gio
{
struct ActionEntry;
} /* namespace Gio */


namespace Gio
{
struct ActionEntry
{
private:

public:
  const char *name;
private:
  decltype (::GActionEntry::activate) activate;
public:
  const char *parameter_type;
  const char *state;
private:
  decltype (::GActionEntry::change_state) change_state;
  decltype (::GActionEntry::padding) padding;

public:
}; /* record ActionEntry */

static_assert (sizeof (ActionEntry) == sizeof (::GActionEntry),
               "ActionEntry size mismatch");
static_assert (alignof (ActionEntry) == alignof (::GActionEntry),
               "ActionEntry align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
