#pragma once

#include <vector>
#include "Task.h"

class WaitingQueue {
public:
    // Add a task to the waiting queue
    void add_task(Task* task);

    // Update the waiting queue and move tasks to the ready queue if their delay has expired
    void update_queue(std::vector<Task*>& ready_queue);
    
private:
    std::vector<Task*> waiting_queue;
};