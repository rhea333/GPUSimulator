#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

// Simulate a GPU core
class GpuCore {
public:
    int id;
    std::string status;

    GpuCore(int coreId) : id(coreId), status("idle") {}

    void runTask(const std::string& task) {
        status = "busy";
        std::cout << "Core " << id << " is running task: " << task << std::endl;
        // Simulate task execution
        status = "idle";
    }
};

// Simulate a memory bank
class MemoryBank {
public:
    int size;
    std::unordered_map<int, int> memory;

    MemoryBank(int memorySize) : size(memorySize) {}

    int read(int address) {
        if (memory.find(address) != memory.end()) {
            return memory[address];
        } else {
            std::cout << "Memory read error: Address not found!" << std::endl;
            return -1;
        }
    }

    void write(int address, int value) {
        memory[address] = value;
        std::cout << "Writing value " << value << " to address " << address << std::endl;
    }
};

class Scheduler {
public:
    std::vector<GpuCore*> cores;
    std::vector<std::string> taskQueue;

    Scheduler(const std::vector<GpuCore*>& coreList) : cores(coreList) {}

    void addTask(const std::string& task) {
        taskQueue.push_back(task);
    }

    void scheduleTasks() {
        int coreIndex = 0;
        for (const std::string& task : taskQueue) {
            GpuCore* core = cores[coreIndex];
            if (core->status == "idle") {
                core->runTask(task);
            }
            coreIndex = (coreIndex + 1) % cores.size(); // Round-Robin Scheduling
        }
    }
};

// Main function
int main() {
    // Create 3 GPU cores
    GpuCore core1(1), core2(2), core3(3);
    std::vector<GpuCore*> cores = { &core1, &core2, &core3 };

    // Create scheduler and add tasks
    Scheduler scheduler(cores);
    scheduler.addTask("Render Frame");
    scheduler.addTask("Process AI");
    scheduler.addTask("Physics Simulation");

    // Schedule the tasks
    scheduler.scheduleTasks();

    return 0;
}
