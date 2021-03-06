// Author: Armin Töpfer

#pragma once

namespace PacBio {
namespace minimap2 {
enum class AlignmentMode : int8_t
{
    SUBREADS = 0,
    ISOSEQ,
    CCS,
    UNROLLED
};
}
}  // namespace PacBio
