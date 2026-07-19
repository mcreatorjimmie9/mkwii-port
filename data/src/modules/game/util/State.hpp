#pragma once
#include "rk_types.h"

namespace Util {

template<typename T>
class State {
public:
    virtual ~State() {}
    virtual void init(T&) {}
    virtual void exec(T&) {}
    virtual void exit(T&) {}
};

template<typename T>
class StateSequencer {
public:
    virtual ~StateSequencer() {}

    void setNextState(State<T>* state) { (void)state; }
    void calc() {} // runs current state
    State<T>* mCurrState;
};

} // namespace Util