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
enum class TestFileType : std::underlying_type<::GTestFileType>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::TestFileType>
{
  typedef GLib::TestFileType UnownedType;

  static GLib::TestFileType
  get (const ::GValue *value)
  {
    return static_cast<GLib::TestFileType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GLib::TestFileType m)
  {
    g_value_set_enum (value, static_cast<::GTestFileType> (m));
  }

  static void
  set_marshal_return (::GValue *value, GLib::TestFileType m)
  {
    set (value, m);
  }

  static GLib::TestFileType
  cast_for_create (GLib::TestFileType m) noexcept
  {
    return m;
  }
};


namespace GLib
{
enum class TestFileType : std::underlying_type<::GTestFileType>::type
{
  DIST = G_TEST_DIST,
  BUILT = G_TEST_BUILT,
}; /* enum TestFileType */


} /* namespace GLib */
} /* namespace peel */

peel_end_header
