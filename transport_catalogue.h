#pragma once
#include <unordered_map>
#include <deque>
#include <string>
#include <string_view>

#include "geo.h"


struct Stop {
	std::string_view name;
	Coordinates coordinates;
};

struct Bus {
	std::string_view name;
	std::deque<Stop*> route;
};

class TransportCatalogue {
	// напишите реализацию самостоятельно
public: 
	void AddBus(Bus bus);
	void AddStop(Stop stop);
	std::deque<Stop*> GetBus (std::string_view bus_name) const;
	

private:
	std::deque <Bus> buses_;
	std::deque <Stop> stops_;
	std::unordered_map <std::string_view, std::deque<Stop*>> buses_to_stops_;
};