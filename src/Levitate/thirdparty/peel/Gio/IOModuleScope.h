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
#include <peel/Gio/IOModule.h>

peel_begin_header

namespace peel
{
namespace Gio
{
} /* namespace Gio */



template<>
struct UniqueTraits<Gio::IOModule::Scope>
{
  static void
  free (Gio::IOModule::Scope *ptr)
  {
    g_io_module_scope_free (reinterpret_cast<::GIOModuleScope *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace Gio
{
class /* record */ IOModule::Scope
{
private:
  Scope () = delete;
  Scope (const Scope &) = delete;
  Scope (Scope &&) = delete;
  ~Scope ();

public:
  peel_nonnull_args (2)
  void
  block (const char *basename) noexcept
  {
    ::GIOModuleScope *_peel_this = reinterpret_cast<::GIOModuleScope *> (this);
    g_io_module_scope_block (_peel_this, basename);
  }

  /* free bound as UniqueTraits */

  static peel::UniquePtr<IOModule::Scope>
  new_ (IOModule::ScopeFlags flags) noexcept
  {
    ::GIOModuleScopeFlags _peel_flags = static_cast<::GIOModuleScopeFlags> (flags);
    ::GIOModuleScope *_peel_return = g_io_module_scope_new (_peel_flags);
    peel_assume (_peel_return);
    return peel::UniquePtr<IOModule::Scope>::adopt_ref (reinterpret_cast<IOModule::Scope *> (_peel_return));
  }
}; /* record IOModule::Scope */

} /* namespace Gio */
} /* namespace peel */

peel_end_header
