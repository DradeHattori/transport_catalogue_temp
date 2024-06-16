#include "stat_reader.h"
#include "string"
#include "string_view"
#include <sstream>

using namespace std::literals;

void ParseAndPrintStat(const TransportCatalogue& transport_catalogue, std::string_view request, std::ostream& output) {
    auto start_pos = request.find_first_of(' ')+1;

    if (start_pos == std::string_view::npos) {
        output << "Invalid request format: no 'Bus ' found\n";
        return;
    }

    std::string_view busname = request.substr(start_pos);

    auto buses = transport_catalogue.GetBus(busname);

    // тест вывода
    output << "Bus " << busname << ": ";
    for (auto& bus : buses) {
        output << bus->name << " ";
    }
    output << "\n";
}
