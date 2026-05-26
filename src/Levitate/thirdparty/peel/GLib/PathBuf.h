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
struct PathBuf;
} /* namespace GLib */



template<>
struct UniqueTraits<GLib::PathBuf>
{
  static void
  free (GLib::PathBuf *ptr)
  {
    g_path_buf_free (reinterpret_cast<::GPathBuf *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace GLib
{
struct PathBuf
{
private:
  ::GPathBuf inner peel_no_warn_unused;

  PathBuf () = delete;
  PathBuf (const PathBuf &) = delete;
  PathBuf (PathBuf &&) = delete;
  ~PathBuf ();

public:
  void
  clear () noexcept
  {
    ::GPathBuf *_peel_this = reinterpret_cast<::GPathBuf *> (this);
    g_path_buf_clear (_peel_this);
  }

  peel::String
  clear_to_path () noexcept
  {
    ::GPathBuf *_peel_this = reinterpret_cast<::GPathBuf *> (this);
    char *_peel_return = g_path_buf_clear_to_path (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel::UniquePtr<PathBuf>
  copy () noexcept
  {
    ::GPathBuf *_peel_this = reinterpret_cast<::GPathBuf *> (this);
    ::GPathBuf *_peel_return = g_path_buf_copy (_peel_this);
    peel_assume (_peel_return);
    return peel::UniquePtr<PathBuf>::adopt_ref (reinterpret_cast<PathBuf *> (_peel_return));
  }

  /* free bound as UniqueTraits */

  static peel::String
  free_to_path (peel::UniquePtr<PathBuf> buf) noexcept
  {
    ::GPathBuf *_peel_buf = reinterpret_cast<::GPathBuf *> (std::move (buf).release_ref ());
    char *_peel_return = g_path_buf_free_to_path (_peel_buf);
    return peel::String::adopt_string (_peel_return);
  }

  peel_returns_nonnull
  PathBuf *
  init () noexcept
  {
    ::GPathBuf *_peel_this = reinterpret_cast<::GPathBuf *> (this);
    ::GPathBuf *_peel_return = g_path_buf_init (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<PathBuf *> (_peel_return);
  }

  peel_returns_nonnull
  PathBuf *
  init_from_path (const char *path) noexcept
  {
    ::GPathBuf *_peel_this = reinterpret_cast<::GPathBuf *> (this);
    ::GPathBuf *_peel_return = g_path_buf_init_from_path (_peel_this, path);
    peel_assume (_peel_return);
    return reinterpret_cast<PathBuf *> (_peel_return);
  }

  bool
  pop () noexcept
  {
    ::GPathBuf *_peel_this = reinterpret_cast<::GPathBuf *> (this);
    gboolean _peel_return = g_path_buf_pop (_peel_this);
    return !!_peel_return;
  }

  peel_nonnull_args (2) peel_returns_nonnull
  PathBuf *
  push (const char *path) noexcept
  {
    ::GPathBuf *_peel_this = reinterpret_cast<::GPathBuf *> (this);
    ::GPathBuf *_peel_return = g_path_buf_push (_peel_this, path);
    peel_assume (_peel_return);
    return reinterpret_cast<PathBuf *> (_peel_return);
  }

  bool
  set_extension (const char *extension) noexcept
  {
    ::GPathBuf *_peel_this = reinterpret_cast<::GPathBuf *> (this);
    gboolean _peel_return = g_path_buf_set_extension (_peel_this, extension);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  set_filename (const char *file_name) noexcept
  {
    ::GPathBuf *_peel_this = reinterpret_cast<::GPathBuf *> (this);
    gboolean _peel_return = g_path_buf_set_filename (_peel_this, file_name);
    return !!_peel_return;
  }

  peel::String
  to_path () noexcept
  {
    ::GPathBuf *_peel_this = reinterpret_cast<::GPathBuf *> (this);
    char *_peel_return = g_path_buf_to_path (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  static bool
  equal (const void *v1, const void *v2) noexcept
  {
    gboolean _peel_return = g_path_buf_equal (v1, v2);
    return !!_peel_return;
  }

  static peel::UniquePtr<PathBuf>
  new_ () noexcept
  {
    ::GPathBuf *_peel_return = g_path_buf_new ();
    peel_assume (_peel_return);
    return peel::UniquePtr<PathBuf>::adopt_ref (reinterpret_cast<PathBuf *> (_peel_return));
  }

  static peel::UniquePtr<PathBuf>
  new_from_path (const char *path) noexcept
  {
    ::GPathBuf *_peel_return = g_path_buf_new_from_path (path);
    peel_assume (_peel_return);
    return peel::UniquePtr<PathBuf>::adopt_ref (reinterpret_cast<PathBuf *> (_peel_return));
  }
}; /* record PathBuf */

static_assert (sizeof (PathBuf) == sizeof (::GPathBuf),
               "PathBuf size mismatch");
static_assert (alignof (PathBuf) == alignof (::GPathBuf),
               "PathBuf align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header
