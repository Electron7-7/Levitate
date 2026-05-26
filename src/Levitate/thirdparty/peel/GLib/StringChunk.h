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
class /* record */ StringChunk;
} /* namespace GLib */



template<>
struct UniqueTraits<GLib::StringChunk>
{
  static void
  free (GLib::StringChunk *ptr)
  {
    g_string_chunk_free (reinterpret_cast<::GStringChunk *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace GLib
{
class /* record */ StringChunk
{
private:
  StringChunk () = delete;
  StringChunk (const StringChunk &) = delete;
  StringChunk (StringChunk &&) = delete;
  ~StringChunk ();

public:
  void
  clear () noexcept
  {
    ::GStringChunk *_peel_this = reinterpret_cast<::GStringChunk *> (this);
    g_string_chunk_clear (_peel_this);
  }

  /* free bound as UniqueTraits */

  peel_nonnull_args (2)
  peel::String
  insert (const char *string) noexcept
  {
    ::GStringChunk *_peel_this = reinterpret_cast<::GStringChunk *> (this);
    gchar *_peel_return = g_string_chunk_insert (_peel_this, string);
    return peel::String::adopt_string (_peel_return);
  }

  peel_nonnull_args (2)
  peel::String
  insert_const (const char *string) noexcept
  {
    ::GStringChunk *_peel_this = reinterpret_cast<::GStringChunk *> (this);
    gchar *_peel_return = g_string_chunk_insert_const (_peel_this, string);
    return peel::String::adopt_string (_peel_return);
  }

  peel_nonnull_args (2)
  peel::String
  insert_len (const char *string, gssize len) noexcept
  {
    ::GStringChunk *_peel_this = reinterpret_cast<::GStringChunk *> (this);
    gchar *_peel_return = g_string_chunk_insert_len (_peel_this, string, len);
    return peel::String::adopt_string (_peel_return);
  }

  static peel::UniquePtr<StringChunk>
  new_ (size_t size) noexcept
  {
    ::GStringChunk *_peel_return = g_string_chunk_new (size);
    peel_assume (_peel_return);
    return peel::UniquePtr<StringChunk>::adopt_ref (reinterpret_cast<StringChunk *> (_peel_return));
  }
}; /* record StringChunk */

} /* namespace GLib */
} /* namespace peel */

peel_end_header
