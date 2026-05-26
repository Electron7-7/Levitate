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
struct OutputMessage;
struct OutputVector;
class SocketAddress;
} /* namespace Gio */


namespace Gio
{
struct OutputMessage
{
private:

public:
  SocketAddress *address;
  OutputVector *vectors;
  unsigned num_vectors;
  unsigned bytes_sent;
private:
  ::GSocketControlMessage **control_messages;
public:
  unsigned num_control_messages;
}; /* record OutputMessage */

static_assert (sizeof (OutputMessage) == sizeof (::GOutputMessage),
               "OutputMessage size mismatch");
static_assert (alignof (OutputMessage) == alignof (::GOutputMessage),
               "OutputMessage align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
