#pragma once

#include <iosfwd>
#include <string_view>
#include <deque>

#include "transport_catalogue.h"

int DistanceCalculator(std::deque<Bus&> bus);

void ParseAndPrintStat(const TransportCatalogue& tansport_catalogue, std::string_view request,
                       std::ostream& output);