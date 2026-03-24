#pragma once

#include <vector>
#include "Task.h"

class ReadyQueue {
public:
    void add_task(Task* task);
    void update_queue();
    
private:
    std::vector<Task*> ready_queue;
};