#include <Geode/Geode.hpp>

using namespace geode::prelude;

#include <Geode/modify/GJBaseGameLayer.hpp>
class $modify(whatTheHellLmao, GJBaseGameLayer) {
	void gameEventTriggered(GJGameEvent mrrrp, int meow, int mrrow) {
		GJBaseGameLayer::gameEventTriggered(mrrrp, meow, mrrow);
		// log::debug("Game event triggered. {}, {}, {}", static_cast<int>(mrrrp), meow, mrrow);
		if (static_cast<int>(mrrrp) == 10) {
			GJBaseGameLayer::updateScreenRotation(180, true, false, 0.5, 1, 2, 4082, 0);
			GJBaseGameLayer::toggleFlipped(true, false);
		} else if (static_cast<int>(mrrrp) == 11) {
			GJBaseGameLayer::updateScreenRotation(0, false, true, 0.5, 1, 2, 4082, 0);
			GJBaseGameLayer::toggleFlipped(false, false);
		}
	}
};