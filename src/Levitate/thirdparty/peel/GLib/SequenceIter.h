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
class /* record */ Sequence;
class /* record */ SequenceIter;
} /* namespace GLib */


namespace GLib
{
class /* record */ SequenceIter
{
private:
  SequenceIter () = delete;
  SequenceIter (const SequenceIter &) = delete;
  SequenceIter (SequenceIter &&) = delete;
  ~SequenceIter ();

public:
  peel_arg_in (2) peel_nonnull_args (2)
  int
  compare (SequenceIter *b) noexcept
  {
    ::GSequenceIter *_peel_this = reinterpret_cast<::GSequenceIter *> (this);
    ::GSequenceIter *_peel_b = reinterpret_cast<::GSequenceIter *> (b);
    return g_sequence_iter_compare (_peel_this, _peel_b);
  }

  int
  get_position () noexcept
  {
    ::GSequenceIter *_peel_this = reinterpret_cast<::GSequenceIter *> (this);
    return g_sequence_iter_get_position (_peel_this);
  }

  peel_returns_nonnull
  Sequence *
  get_sequence () noexcept
  {
    ::GSequenceIter *_peel_this = reinterpret_cast<::GSequenceIter *> (this);
    ::GSequence *_peel_return = g_sequence_iter_get_sequence (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Sequence *> (_peel_return);
  }

  bool
  is_begin () noexcept
  {
    ::GSequenceIter *_peel_this = reinterpret_cast<::GSequenceIter *> (this);
    gboolean _peel_return = g_sequence_iter_is_begin (_peel_this);
    return !!_peel_return;
  }

  bool
  is_end () noexcept
  {
    ::GSequenceIter *_peel_this = reinterpret_cast<::GSequenceIter *> (this);
    gboolean _peel_return = g_sequence_iter_is_end (_peel_this);
    return !!_peel_return;
  }

  peel_returns_nonnull
  SequenceIter *
  move (int delta) noexcept
  {
    ::GSequenceIter *_peel_this = reinterpret_cast<::GSequenceIter *> (this);
    ::GSequenceIter *_peel_return = g_sequence_iter_move (_peel_this, delta);
    peel_assume (_peel_return);
    return reinterpret_cast<SequenceIter *> (_peel_return);
  }

  peel_returns_nonnull
  SequenceIter *
  next () noexcept
  {
    ::GSequenceIter *_peel_this = reinterpret_cast<::GSequenceIter *> (this);
    ::GSequenceIter *_peel_return = g_sequence_iter_next (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<SequenceIter *> (_peel_return);
  }

  peel_returns_nonnull
  SequenceIter *
  prev () noexcept
  {
    ::GSequenceIter *_peel_this = reinterpret_cast<::GSequenceIter *> (this);
    ::GSequenceIter *_peel_return = g_sequence_iter_prev (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<SequenceIter *> (_peel_return);
  }
}; /* record SequenceIter */

} /* namespace GLib */
} /* namespace peel */

peel_end_header
