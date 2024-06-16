#include "transport_catalogue.h"

void TransportCatalogue::AddBus(Bus bus) {
	buses_.push_back(bus);
	buses_to_stops_[bus.name.data()] = bus.route;
}
void TransportCatalogue::AddStop(Stop stop) {
	stops_.push_back(stop);
}

std::deque<Stop*> TransportCatalogue::GetBus(std::string_view bus_name) const {
	return buses_to_stops_.at(bus_name);
}
