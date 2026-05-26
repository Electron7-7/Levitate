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
#include <peel/GLib/Quark.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Quark;
} /* namespace GLib */

namespace GObject
{
enum class SignalFlags : std::underlying_type<::GSignalFlags>::type;
struct SignalInvocationHint;
} /* namespace GObject */


namespace GObject
{
struct SignalInvocationHint
{
private:
  SignalInvocationHint () = delete;
  SignalInvocationHint (const SignalInvocationHint &) = delete;
  SignalInvocationHint (SignalInvocationHint &&) = delete;
  ~SignalInvocationHint ();

public:
  unsigned signal_id;
  GLib::Quark detail;
  SignalFlags run_type;
}; /* record SignalInvocationHint */

static_assert (sizeof (SignalInvocationHint) == sizeof (::GSignalInvocationHint),
               "SignalInvocationHint size mismatch");
static_assert (alignof (SignalInvocationHint) == alignof (::GSignalInvocationHint),
               "SignalInvocationHint align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
