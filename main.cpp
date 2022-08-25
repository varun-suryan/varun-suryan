#include <iostream>
#include <iomanip>

#include <nlohmann/json-schema.hpp>
#include <nlohmann/json.hpp>

using json = nlohmann::json;
using json_validator = nlohmann::json_schema::json_validator;

// The schema is defined based upon a string literal
static json satellite_schema = R"(
{
    "$schema": "http://json-schema.org/draft-07/schema#",
    "title": "Satellite",
    "properties": {
        "altitude": {
            "description": "Altitude of the satellite",
            "type": "number"
        },
        "uplink_beams": {
            "description": "Beams from the ground to the satellite",
            "type": "number",
            "minimum": 1,
            "maximum": 200000
        }
    },
    "required": [
                 "altitude",
                 "uplink_beams"
                 ],
    "type": "object"
}

)"_json;


int main()
{
    std::cout << abs(-5);
    return EXIT_SUCCESS;
}