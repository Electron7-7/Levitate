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
struct ScannerConfig;
} /* namespace GLib */


namespace GLib
{
struct ScannerConfig
{
private:
  ScannerConfig () = delete;
  ScannerConfig (const ScannerConfig &) = delete;
  ScannerConfig (ScannerConfig &&) = delete;
  ~ScannerConfig ();

public:
  const char *cset_skip_characters;
  const char *cset_identifier_first;
  const char *cset_identifier_nth;
  const char *cpair_comment_single;
  unsigned case_sensitive : 1;
  unsigned skip_comment_multi : 1;
  unsigned skip_comment_single : 1;
  unsigned scan_comment_multi : 1;
  unsigned scan_identifier : 1;
  unsigned scan_identifier_1char : 1;
  unsigned scan_identifier_NULL : 1;
  unsigned scan_symbols : 1;
  unsigned scan_binary : 1;
  unsigned scan_octal : 1;
  unsigned scan_float : 1;
  unsigned scan_hex : 1;
  unsigned scan_hex_dollar : 1;
  unsigned scan_string_sq : 1;
  unsigned scan_string_dq : 1;
  unsigned numbers_2_int : 1;
  unsigned int_2_float : 1;
  unsigned identifier_2_string : 1;
  unsigned char_2_token : 1;
  unsigned symbol_2_token : 1;
  unsigned scope_0_fallback : 1;
  unsigned store_int64 : 1;
private:
  guint padding_dummy;

public:
}; /* record ScannerConfig */

static_assert (sizeof (ScannerConfig) == sizeof (::GScannerConfig),
               "ScannerConfig size mismatch");
static_assert (alignof (ScannerConfig) == alignof (::GScannerConfig),
               "ScannerConfig align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header
