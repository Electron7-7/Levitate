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
#include <peel/GObject/TypeInterface.h>
#include <peel/Gio/TlsDatabase.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
} /* namespace GLib */

namespace Gio
{
class /* interface */ TlsFileDatabase;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::TlsFileDatabase> ()
{
  return g_tls_file_database_get_type ();
}


namespace Gio
{
class /* interface */ TlsFileDatabase : public TlsDatabase
/* requires TlsDatabase */
{
private:
  TlsFileDatabase () = delete;
  TlsFileDatabase (const TlsFileDatabase &) = delete;
  TlsFileDatabase (TlsFileDatabase &&) = delete;

  TlsFileDatabase &
  operator = (const TlsFileDatabase &) = delete;
  TlsFileDatabase &
  operator = (TlsFileDatabase &&) = delete;

protected:
  ~TlsFileDatabase () = default;

public:

  peel_nonnull_args (1)
  static peel::RefPtr<TlsFileDatabase>
  create (const char *anchors, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GError *_peel_error = nullptr;
    ::GTlsDatabase *_peel_return = g_tls_file_database_new (anchors, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<TlsFileDatabase>::adopt_ref (reinterpret_cast<TlsFileDatabase *> (_peel_return));
  }

  static peel::Property<const char *>
  prop_anchors ()
  {
    return peel::Property<const char *> { "anchors" };
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GTlsFileDatabaseInterface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  };

  static_assert (sizeof (Iface) == sizeof (::GTlsFileDatabaseInterface),
                 "TlsFileDatabase::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GTlsFileDatabaseInterface),
                 "TlsFileDatabase::Iface align mismatch");
}; /* interface TlsFileDatabase */
static_assert (sizeof (TlsFileDatabase) == sizeof (TlsDatabase),
               "TlsFileDatabase size mismatch");
static_assert (alignof (TlsFileDatabase) == alignof (TlsDatabase),
               "TlsFileDatabase align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
