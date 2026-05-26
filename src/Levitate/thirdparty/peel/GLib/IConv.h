#pragma once

/* Auto-generated, do not modify */
/* Package glib-2.0 */

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
#include <glib.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ IConv;
} /* namespace GLib */


namespace GLib
{
class /* record */ IConv
{
private:
  IConv () = delete;
  IConv (const IConv &) = delete;
  IConv (IConv &&) = delete;
  ~IConv ();

public:
  /* Unsupported for now: : No name for method */

  /* Unsupported for now: close: weird number of indirections in instance parameter */

  peel_nonnull_args (1, 2) peel_returns_nonnull
  static IConv *
  open (const char *to_codeset, const char *from_codeset) noexcept
  {
    ::GIConv _peel_return = g_iconv_open (to_codeset, from_codeset);
    peel_assume (_peel_return);
    return reinterpret_cast<IConv *> (_peel_return);
  }
}; /* record IConv */

} /* namespace GLib */
} /* namespace peel */

peel_end_header
