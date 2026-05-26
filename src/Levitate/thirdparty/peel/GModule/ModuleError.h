#pragma once

/* Auto-generated, do not modify */
/* Package gmodule-2.0 */

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
#include <gmodule.h>

peel_begin_header

namespace peel
{
namespace GModule
{
enum class ModuleError : std::underlying_type<::GModuleError>::type;
} /* namespace GModule */

template<>
struct GObject::Value::Traits<GModule::ModuleError>
{
  typedef GModule::ModuleError UnownedType;

  static GModule::ModuleError
  get (const ::GValue *value)
  {
    return static_cast<GModule::ModuleError> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GModule::ModuleError m)
  {
    g_value_set_enum (value, static_cast<::GModuleError> (m));
  }

  static void
  set_marshal_return (::GValue *value, GModule::ModuleError m)
  {
    set (value, m);
  }

  static GModule::ModuleError
  cast_for_create (GModule::ModuleError m) noexcept
  {
    return m;
  }
};


namespace GModule
{
enum class ModuleError : std::underlying_type<::GModuleError>::type
{
  FAILED = G_MODULE_ERROR_FAILED,
  CHECK_FAILED = G_MODULE_ERROR_CHECK_FAILED,
}; /* enum ModuleError */


} /* namespace GModule */
} /* namespace peel */

peel_end_header
