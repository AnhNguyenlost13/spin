#include <Geode/Geode.hpp>

using namespace geode::prelude;

#include <Geode/modify/GJBaseGameLayer.hpp>
class $modify(whatTheHellLmao, GJBaseGameLayer) {
	void gameEventTriggered(GJGameEvent me, int la, int nie) {
		GJBaseGameLayer::gameEventTriggered(me, la, nie);
		log::debug("Game event triggered. {}, {}, {}", static_cast<int>(me), la, nie);
		if (static_cast<int>(me) == 10) {
			GJBaseGameLayer::updateScreenRotation(180, true, false, 0.5, 1, 2, 4082, 0);
			GJBaseGameLayer::toggleFlipped(true, false);
		} else if (static_cast<int>(me) == 11) {
			GJBaseGameLayer::updateScreenRotation(0, false, true, 0.5, 1, 2, 4082, 0);
			GJBaseGameLayer::toggleFlipped(false, false);
		}
	}
};