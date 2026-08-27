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
	bool silentVoiceRead = true;
	bool freezeOnline = true;
	bool fastDownload = true;
	bool showUserId = true;
	bool stripExif = true;
	bool forceRelayCalls = true;
	bool npuTheme = true;
};

inline Config &Settings() {
	static Config instance;
	return instance;
}

} // namespace Ghost
