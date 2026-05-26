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
class /* record */ Relation;
struct Tuples;
} /* namespace GLib */


namespace GLib
{
class /* record */ Relation
{
private:
  Relation () = delete;
  Relation (const Relation &) = delete;
  Relation (Relation &&) = delete;
  ~Relation ();

public:
  int
  count (const void *key, int field) noexcept
  {
    ::GRelation *_peel_this = reinterpret_cast<::GRelation *> (this);
    return g_relation_count (_peel_this, key, field);
  }

  int
  delete_ (const void *key, int field) noexcept
  {
    ::GRelation *_peel_this = reinterpret_cast<::GRelation *> (this);
    return g_relation_delete (_peel_this, key, field);
  }

  void
  destroy () noexcept
  {
    ::GRelation *_peel_this = reinterpret_cast<::GRelation *> (this);
    g_relation_destroy (_peel_this);
  }

  /* Unsupported for now: exists: varargs */

  void
  index (int field, ::GHashFunc hash_func, ::GEqualFunc key_equal_func) noexcept
  {
    ::GRelation *_peel_this = reinterpret_cast<::GRelation *> (this);
    g_relation_index (_peel_this, field, hash_func, key_equal_func);
  }

  /* Unsupported for now: insert: varargs */

  void
  print () noexcept
  {
    ::GRelation *_peel_this = reinterpret_cast<::GRelation *> (this);
    g_relation_print (_peel_this);
  }

  peel_returns_nonnull
  Tuples *
  select (const void *key, int field) noexcept
  {
    ::GRelation *_peel_this = reinterpret_cast<::GRelation *> (this);
    ::GTuples *_peel_return = g_relation_select (_peel_this, key, field);
    peel_assume (_peel_return);
    return reinterpret_cast<Tuples *> (_peel_return);
  }

  peel_returns_nonnull
  static Relation *
  new_ (int fields) noexcept
  {
    ::GRelation *_peel_return = g_relation_new (fields);
    peel_assume (_peel_return);
    return reinterpret_cast<Relation *> (_peel_return);
  }
}; /* record Relation */

} /* namespace GLib */
} /* namespace peel */

peel_end_header
