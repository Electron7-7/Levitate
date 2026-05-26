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
struct Error;
enum class UriParamsFlags : std::underlying_type<::GUriParamsFlags>::type;
struct UriParamsIter;
} /* namespace GLib */


namespace GLib
{
struct UriParamsIter
{
private:
  ::GUriParamsIter inner peel_no_warn_unused;

  UriParamsIter () = delete;
  UriParamsIter (const UriParamsIter &) = delete;
  UriParamsIter (UriParamsIter &&) = delete;
  ~UriParamsIter ();

public:
  peel_nonnull_args (2, 4)
  void
  init (const char *params, gssize length, const char *separators, UriParamsFlags flags) noexcept
  {
    ::GUriParamsIter *_peel_this = reinterpret_cast<::GUriParamsIter *> (this);
    ::GUriParamsFlags _peel_flags = static_cast<::GUriParamsFlags> (flags);
    g_uri_params_iter_init (_peel_this, params, length, separators, _peel_flags);
  }

  peel_arg_out (2) peel_arg_out (3)
  bool
  next (peel::String *attribute, peel::String *value, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GUriParamsIter *_peel_this = reinterpret_cast<::GUriParamsIter *> (this);
    gchar *_peel_attribute;
    gchar *_peel_value;
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_uri_params_iter_next (_peel_this, attribute ? &_peel_attribute : nullptr, value ? &_peel_value : nullptr, &_peel_error);
    if (_peel_error)
      {
        if (error)
          *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
        else
          g_error_free (_peel_error);
      }
    else
      {
        if (error)
          *error = nullptr;
        if (attribute)
          *attribute = peel::String::adopt_string (_peel_attribute);
        if (value)
          *value = peel::String::adopt_string (_peel_value);
      }
    return !!_peel_return;
  }
}; /* record UriParamsIter */

static_assert (sizeof (UriParamsIter) == sizeof (::GUriParamsIter),
               "UriParamsIter size mismatch");
static_assert (alignof (UriParamsIter) == alignof (::GUriParamsIter),
               "UriParamsIter align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
