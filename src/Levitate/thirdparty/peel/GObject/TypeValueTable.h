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

peel_begin_header

namespace peel
{
namespace GObject
{
struct TypeValueTable;
} /* namespace GObject */


namespace GObject
{
struct TypeValueTable
{
private:
  TypeValueTable () = delete;
  TypeValueTable (const TypeValueTable &) = delete;
  TypeValueTable (TypeValueTable &&) = delete;
  ~TypeValueTable ();

  ::GTypeValueInitFunc value_init;
  ::GTypeValueFreeFunc value_free;
  ::GTypeValueCopyFunc value_copy;
  ::GTypeValuePeekPointerFunc value_peek_pointer;
public:
  const char *collect_format;
private:
  ::GTypeValueCollectFunc collect_value;
public:
  const char *lcopy_format;
private:
  ::GTypeValueLCopyFunc lcopy_value;

public:
  static TypeValueTable *
  peek (GObject::Type type) noexcept
  {
    ::GTypeValueTable *_peel_return = g_type_value_table_peek (type);
    return reinterpret_cast<TypeValueTable *> (_peel_return);
  }
}; /* record TypeValueTable */

static_assert (sizeof (TypeValueTable) == sizeof (::GTypeValueTable),
               "TypeValueTable size mismatch");
static_assert (alignof (TypeValueTable) == alignof (::GTypeValueTable),
               "TypeValueTable align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
