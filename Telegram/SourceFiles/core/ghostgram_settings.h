/*
This file is part of Ghostgram.
*/
#pragma once

namespace Ghost {

struct Config {
	bool antiRecall = true;
	bool hideTyping = true;
	bool silentRead = true;
	bool stealthStories = true;
	bool allowForwarding = true;
	bool bypassTtl = true;
	bool blockAds = true;
};

inline Config &Settings() {
	static Config instance;
	return instance;
}

} // namespace Ghost
