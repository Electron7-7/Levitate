#pragma once

/* Auto-generated, do not modify */
/* Package gobject-2.0 */

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
#include <glib-object.h>
#include <peel/GLib/List.h>

peel_begin_header

namespace peel
{
namespace GObject
{
class ParamSpec;
class /* record */ ParamSpecPool;
} /* namespace GObject */



template<>
struct UniqueTraits<GObject::ParamSpecPool>
{
  static void
  free (GObject::ParamSpecPool *ptr)
  {
    g_param_spec_pool_free (reinterpret_cast<::GParamSpecPool *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace GObject
{
class /* record */ ParamSpecPool
{
private:
  ParamSpecPool () = delete;
  ParamSpecPool (const ParamSpecPool &) = delete;
  ParamSpecPool (ParamSpecPool &&) = delete;
  ~ParamSpecPool ();

public:
  /* free bound as UniqueTraits */

  peel_nonnull_args (2)
  void
  insert (ParamSpec *pspec, GObject::Type owner_type) noexcept
  {
    ::GParamSpecPool *_peel_this = reinterpret_cast<::GParamSpecPool *> (this);
    ::GParamSpec *_peel_pspec = reinterpret_cast<::GParamSpec *> (pspec);
    g_param_spec_pool_insert (_peel_this, _peel_pspec, owner_type);
  }

  peel::UniquePtr<ParamSpec *[]>
  list (GObject::Type owner_type) noexcept
  {
    guint _peel_n_pspecs_p;
    ::GParamSpecPool *_peel_this = reinterpret_cast<::GParamSpecPool *> (this);
    ::GParamSpec **_peel_return = g_param_spec_pool_list (_peel_this, owner_type, &_peel_n_pspecs_p);
    peel_assume (_peel_return);
    return peel::UniquePtr<ParamSpec *[]>::adopt_ref (reinterpret_cast<ParamSpec **> (_peel_return), _peel_n_pspecs_p);
  }

  GLib::List<ParamSpec *>
  list_owned (GObject::Type owner_type) noexcept
  {
    ::GParamSpecPool *_peel_this = reinterpret_cast<::GParamSpecPool *> (this);
    GList *_peel_return = g_param_spec_pool_list_owned (_peel_this, owner_type);
    return GLib::List<ParamSpec *>::adopt_list (_peel_return);
  }

  peel_nonnull_args (2)
  ParamSpec *
  lookup (const char *param_name, GObject::Type owner_type, bool walk_ancestors) noexcept
  {
    ::GParamSpecPool *_peel_this = reinterpret_cast<::GParamSpecPool *> (this);
    gboolean _peel_walk_ancestors = static_cast<gboolean> (walk_ancestors);
    ::GParamSpec *_peel_return = g_param_spec_pool_lookup (_peel_this, param_name, owner_type, _peel_walk_ancestors);
    return reinterpret_cast<ParamSpec *> (_peel_return);
  }

  peel_nonnull_args (2)
  void
  remove (ParamSpec *pspec) noexcept
  {
    ::GParamSpecPool *_peel_this = reinterpret_cast<::GParamSpecPool *> (this);
    ::GParamSpec *_peel_pspec = reinterpret_cast<::GParamSpec *> (pspec);
    g_param_spec_pool_remove (_peel_this, _peel_pspec);
  }

  static peel::UniquePtr<ParamSpecPool>
  new_ (bool type_prefixing) noexcept
  {
    gboolean _peel_type_prefixing = static_cast<gboolean> (type_prefixing);
    ::GParamSpecPool *_peel_return = g_param_spec_pool_new (_peel_type_prefixing);
    peel_assume (_peel_return);
    return peel::UniquePtr<ParamSpecPool>::adopt_ref (reinterpret_cast<ParamSpecPool *> (_peel_return));
  }
}; /* record ParamSpecPool */

} /* namespace GObject */
} /* namespace peel */

peel_end_header

#include <peel/GObject/ParamSpec.h>
