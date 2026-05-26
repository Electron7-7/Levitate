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
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class TestDBus;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::TestDBus> ()
{
  return g_test_dbus_get_type ();
}


namespace Gio
{
class TestDBus : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  TestDBus () = delete;
  TestDBus (const TestDBus &) = delete;
  TestDBus (TestDBus &&) = delete;
  TestDBus &
  operator = (const TestDBus &) = delete;
  TestDBus &
  operator = (TestDBus &&) = delete;
  ~TestDBus () = delete;
public:
  enum class Flags : std::underlying_type<::GTestDBusFlags>::type;

  static peel::RefPtr<TestDBus>
  create (TestDBus::Flags flags) noexcept
  {
    ::GTestDBusFlags _peel_flags = static_cast<::GTestDBusFlags> (flags);
    ::GTestDBus *_peel_return = g_test_dbus_new (_peel_flags);
    peel_assume (_peel_return);
    return peel::RefPtr<TestDBus>::adopt_ref (reinterpret_cast<TestDBus *> (_peel_return));
  }

  static void
  unset () noexcept
  {
    g_test_dbus_unset ();
  }

  peel_nonnull_args (2)
  void
  add_service_dir (const char *path) noexcept
  {
    ::GTestDBus *_peel_this = reinterpret_cast<::GTestDBus *> (this);
    g_test_dbus_add_service_dir (_peel_this, path);
  }

  void
  down () noexcept
  {
    ::GTestDBus *_peel_this = reinterpret_cast<::GTestDBus *> (this);
    g_test_dbus_down (_peel_this);
  }

  const char *
  get_bus_address () noexcept
  {
    ::GTestDBus *_peel_this = reinterpret_cast<::GTestDBus *> (this);
    return g_test_dbus_get_bus_address (_peel_this);
  }

  TestDBus::Flags
  get_flags () noexcept
  {
    ::GTestDBus *_peel_this = reinterpret_cast<::GTestDBus *> (this);
    ::GTestDBusFlags _peel_return = g_test_dbus_get_flags (_peel_this);
    return static_cast<TestDBus::Flags> (_peel_return);
  }

  void
  stop () noexcept
  {
    ::GTestDBus *_peel_this = reinterpret_cast<::GTestDBus *> (this);
    g_test_dbus_stop (_peel_this);
  }

  void
  up () noexcept
  {
    ::GTestDBus *_peel_this = reinterpret_cast<::GTestDBus *> (this);
    g_test_dbus_up (_peel_this);
  }

  static peel::Property<TestDBus::Flags>
  prop_flags ()
  {
    return peel::Property<TestDBus::Flags> { "flags" };
  }
}; /* class TestDBus */

} /* namespace Gio */
} /* namespace peel */

peel_end_header
