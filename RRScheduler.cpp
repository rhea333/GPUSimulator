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
