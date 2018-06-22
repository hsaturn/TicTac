// This file is part of TicTac.
//
// TicTac is free software: you can redistribute it and/or modify
//         it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// TicTac is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with TicTac.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <Arduino.h>
#include "Object.h"
#include "Setup.h"

class DigitalOscillo : public Object {
public:
    DigitalOscillo(uint8_t pin1, uint8_t pin2);

    // Object virtuals
    bool parseInput(char c);

    void help() const;

    void view();

    void loop();

    uint16_t message(Message msg, uint8_t& c) override;

private:
    uint8_t m_pin1;
    uint8_t m_pin2;
    uint16_t m_x;
    bool m_last_pin1;
    unsigned long m_next_micro;
    unsigned long m_period = 50000;
};