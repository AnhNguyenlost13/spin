#include <Geode/Geode.hpp>

using namespace geode::prelude;

#include <Geode/modify/GJBaseGameLayer.hpp>
class $modify(whatTheHellLmao, GJBaseGameLayer) {
	void gameEventTriggered(GJGameEvent mrrrp, int meow, int mrrow) {
		GJBaseGameLayer::gameEventTriggered(mrrrp, meow, mrrow);
		// log::debug("Game event triggered. {}, {}, {}", static_cast<int>(mrrrp), meow, mrrow);
		if (static_cast<int>(mrrrp) == 10) {
			log::info("yes");
			GJBaseGameLayer::toggleFlipped(true, false);
			GJBaseGameLayer::updateScreenRotation(90, true, false, 0.5, 1, 2, 9999, 0);
		} else if (static_cast<int>(mrrrp) == 11) {
			log::info("no");
			GJBaseGameLayer::toggleFlipped(false, false);
			GJBaseGameLayer::updateScreenRotation(90, true, false, 0.5, 1, 2, 9999, 0);
		}
	}
};