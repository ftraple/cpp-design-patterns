#ifndef PATTERNS_STATE_PHONE_HPP_
#define PATTERNS_STATE_PHONE_HPP_

#include <iostream>
#include <map>
#include <vector>
#include <thread>
#include <chrono>

namespace state_machine {

class Phone {
   public:
    enum class State {
        off_hook,
        dialing,
        connecting,
        ringing,
        connected,
        on_hold,
        disconnecting,
        disconnected,
        on_hook
    };

    enum class Action {
        take_off_hook,
        dialing,
        calling,
        put_on_hold,
        take_off_hold,
        put_on_hook,
    };

    Phone();

    void Run();

    friend std::ostream& operator<<(std::ostream& os, const Phone::State& phone_state);
    friend std::ostream& operator<<(std::ostream& os, const Phone::Action& phone_action);

   private:

    std::map<State, std::vector<std::pair<Action, State>>> m_rules;

    State m_current_state{State::on_hook};

    void Connecting();

    void Disconnecting();

};

}  // namespace state_machine

#endif  // PATTERNS_STATE_PHONE_HPP_