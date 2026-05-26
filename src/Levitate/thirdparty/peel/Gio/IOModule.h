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
#include <peel/GObject/TypeModule.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class IOModule;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::IOModule> ()
{
  return g_io_module_get_type ();
}


namespace Gio
{
class IOModule : public GObject::TypeModule
/* non-derivable */
/* implements GObject::TypePlugin */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  IOModule () = delete;
  IOModule (const IOModule &) = delete;
  IOModule (IOModule &&) = delete;
  IOModule &
  operator = (const IOModule &) = delete;
  IOModule &
  operator = (IOModule &&) = delete;
  ~IOModule () = delete;
public:
  class /* record */ Scope;
  enum class ScopeFlags : std::underlying_type<::GIOModuleScopeFlags>::type;

  peel_nonnull_args (1)
  static peel::RefPtr<IOModule>
  create (const char *filename) noexcept
  {
    ::GIOModule *_peel_return = g_io_module_new (filename);
    peel_assume (_peel_return);
    return peel::RefPtr<IOModule>::adopt_ref (reinterpret_cast<IOModule *> (_peel_return));
  }

  static peel::Strv
  query () noexcept
  {
    char **_peel_return = g_io_module_query ();
    peel_assume (_peel_return);
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  void
  load () noexcept
  {
    ::GIOModule *_peel_this = reinterpret_cast<::GIOModule *> (this);
    g_io_module_load (_peel_this);
  }

  void
  unload () noexcept
  {
    ::GIOModule *_peel_this = reinterpret_cast<::GIOModule *> (this);
    g_io_module_unload (_peel_this);
  }

  class Class : public GObject::TypeModule::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class IOModule */

} /* namespace Gio */
} /* namespace peel */

peel_end_header
