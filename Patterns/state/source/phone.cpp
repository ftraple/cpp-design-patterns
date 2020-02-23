#include "phone.hpp"

namespace state_machine {

Phone::Phone() {
    m_rules[State::on_hook] = {
        {Action::take_off_hook, State::off_hook}};

    m_rules[State::off_hook] = {
        {Action::dialing, State::dialing},
        {Action::put_on_hook, State::on_hook}};

    m_rules[State::dialing] = {
        {Action::calling, State::connecting},
        {Action::put_on_hook, State::on_hook}};

    m_rules[State::connected] = {
        {Action::put_on_hold, State::on_hold},
        {Action::put_on_hook, State::disconnecting}};

    m_rules[State::on_hold] = {
        {Action::take_off_hold, State::connected},
        {Action::put_on_hook, State::disconnecting}};

    m_rules[State::disconnected] = {
        {Action::put_on_hook, State::on_hook}};
}

void Phone::Connecting() {
    std::cout << "Connecting..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    m_current_state = State::connected;
    std::cout << "Connected." << std::endl;
}

void Phone::Disconnecting() {
    std::cout << "Disconnecting..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    m_current_state = State::disconnected;
    std::cout << "Disconnected." << std::endl;
}

void Phone::Run() {
    do {
        // Select a option
        int option;
        do {
            std::cout << "\nThe phone is currently [" << m_current_state << "]\n\n";
            int i{0};
            for (auto rule : m_rules[m_current_state]) {
                std::cout << i++ << ". " << rule.first << '\n';
            }
            std::cout << "\nSelect a Action: ";
            std::cin >> option;
        } while (option < 0 ||  option >= m_rules[m_current_state].size());

        m_current_state = m_rules[m_current_state][option].second;

        switch (m_current_state) {
            case State::connecting: {
                Connecting();
                break;
            }
            case State::disconnecting: {
                Disconnecting();
                break;
            }
        }

    } while (m_current_state != State::on_hook);
}

std::ostream& operator<<(std::ostream& os, const Phone::State& phone_state) {
    switch (phone_state) {
        case Phone::State::off_hook: {
            os << "off the hook";
            break;
        }
        case Phone::State::dialing: {
            os << "dialing";
            break;
        }
        case Phone::State::connecting: {
            os << "connecting";
            break;
        }
        case Phone::State::ringing: {
            os << "ringing";
            break;
        }
        case Phone::State::connected: {
            os << "connected";
            break;
        }
        case Phone::State::on_hold: {
            os << "on hold";
            break;
        }
        case Phone::State::disconnecting: {
            os << "disconnecting";
            break;
        }
        case Phone::State::disconnected: {
            os << "disconnected";
            break;
        }
        case Phone::State::on_hook: {
            os << "on the hook";
            break;
        }
    }
    return os;
}

std::ostream& operator<<(std::ostream& os, const Phone::Action& phone_action) {
    switch (phone_action) {
        case Phone::Action::take_off_hook: {
            os << "take off the hook";
            break;
        }
        case Phone::Action::dialing: {
            os << "dialing";
            break;
        }
        case Phone::Action::calling: {
            os << "calling";
            break;
        }
        case Phone::Action::put_on_hold: {
            os << "put on hold";
            break;
        }
        case Phone::Action::take_off_hold: {
            os << "take off hold";
            break;
        }
        case Phone::Action::put_on_hook: {
            os << "put on the hook";
            break;
        }
    }
    return os;
}

}  // namespace state_machine
