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
struct InputMessage;
class SocketAddress;
} /* namespace Gio */


namespace Gio
{
struct InputMessage
{
private:

public:
  SocketAddress *address;
private:
  ::GInputVector *vectors;
public:
  unsigned num_vectors;
  size_t bytes_received;
  int flags;
private:
  ::GSocketControlMessage ***control_messages;
public:
  unsigned *num_control_messages;
}; /* record InputMessage */

static_assert (sizeof (InputMessage) == sizeof (::GInputMessage),
               "InputMessage size mismatch");
static_assert (alignof (InputMessage) == alignof (::GInputMessage),
               "InputMessage align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
