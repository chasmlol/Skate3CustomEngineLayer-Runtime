#pragma once

namespace rex::ui {

[[nodiscard]] constexpr bool SimpleMultiplayerControlsEnabled(bool steam_available) {
  return steam_available;
}

}  // namespace rex::ui
