#include "../inc/WaitingQueue.h"

void WaitingQueue::add_task(Task* task) {
    waiting_queue.push_back(task);
}

void WaitingQueue::update_queue(std::vector<Task*>& ready_queue) {
    for (size_t i = 0; i < waiting_queue.size(); ) {
        Task* task = waiting_queue[i];
        task->time_remaining -= 1;

        if (task->time_remaining <= 0) {
            ready_queue.push_back(task);
            waiting_queue[i] = waiting_queue.back();
            waiting_queue.pop_back();
        } else {
            i++;
        }
    }
}