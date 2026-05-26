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
class /* record */ Bytes;
struct Error;
class /* record */ MappedFile;
} /* namespace GLib */

template<>
inline GObject::Type
GObject::Type::of<GLib::MappedFile> ()
{
  return g_mapped_file_get_type ();
}
template<>
struct GObject::Value::Traits<GLib::MappedFile>
{
  typedef RefPtr<GLib::MappedFile> OwnedType;
  typedef GLib::MappedFile * UnownedType;

  static GLib::MappedFile *
  get (const ::GValue *value)
  {
    return reinterpret_cast<GLib::MappedFile *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, GLib::MappedFile * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<GLib::MappedFile>
  dup (const ::GValue *value)
  {
    return RefPtr<GLib::MappedFile>::adopt_ref (reinterpret_cast<GLib::MappedFile *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<GLib::MappedFile> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static GLib::MappedFile *
  cast_for_create (GLib::MappedFile * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<GLib::MappedFile>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<GLib::MappedFile> (), basics.flags);
  }
};

template<>
struct RefTraits<GLib::MappedFile, void>
{
  static void
  ref (GLib::MappedFile *ptr)
  {
    g_mapped_file_ref (reinterpret_cast<::GMappedFile *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (GLib::MappedFile *ptr)
  {
    g_mapped_file_unref (reinterpret_cast<::GMappedFile *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace GLib
{
class /* record */ MappedFile
{
private:
  MappedFile () = delete;
  MappedFile (const MappedFile &) = delete;
  MappedFile (MappedFile &&) = delete;
  ~MappedFile ();

public:
  peel_nonnull_args (1)
  static peel::RefPtr<MappedFile>
  create (const char *filename, bool writable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gboolean _peel_writable = static_cast<gboolean> (writable);
    ::GError *_peel_error = nullptr;
    ::GMappedFile *_peel_return = g_mapped_file_new (filename, _peel_writable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<MappedFile>::adopt_ref (reinterpret_cast<MappedFile *> (_peel_return));
  }

  static peel::RefPtr<MappedFile>
  create_from_fd (int fd, bool writable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gboolean _peel_writable = static_cast<gboolean> (writable);
    ::GError *_peel_error = nullptr;
    ::GMappedFile *_peel_return = g_mapped_file_new_from_fd (fd, _peel_writable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<MappedFile>::adopt_ref (reinterpret_cast<MappedFile *> (_peel_return));
  }

  void
  free () noexcept
  {
    ::GMappedFile *_peel_this = reinterpret_cast<::GMappedFile *> (this);
    g_mapped_file_free (_peel_this);
  }

  peel::RefPtr<Bytes>
  get_bytes () noexcept
  {
    ::GMappedFile *_peel_this = reinterpret_cast<::GMappedFile *> (this);
    ::GBytes *_peel_return = g_mapped_file_get_bytes (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Bytes>::adopt_ref (reinterpret_cast<Bytes *> (_peel_return));
  }

  const char *
  get_contents () noexcept
  {
    ::GMappedFile *_peel_this = reinterpret_cast<::GMappedFile *> (this);
    return g_mapped_file_get_contents (_peel_this);
  }

  size_t
  get_length () noexcept
  {
    ::GMappedFile *_peel_this = reinterpret_cast<::GMappedFile *> (this);
    return g_mapped_file_get_length (_peel_this);
  }

  /* ref bound as RefTraits */

  /* unref bound as RefTraits */
}; /* record MappedFile */

} /* namespace GLib */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Bytes.h>
#include <peel/GLib/Error.h>
