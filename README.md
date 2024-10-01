# GPU Simulator

This project simulates a simple GPU environment using C++ and Docker, running on AWS. It includes the simulation of GPU cores, memory banks, and a round-robin scheduler to assign tasks to the GPU cores.

![Screenshot 2024-10-01 140406](https://github.com/user-attachments/assets/b23215ad-7c87-4419-9a88-24ce80d0894d)

## Project Overview
The application is containerized using Docker and can be deployed in a cloud environment using AWS ECS (Elastic Container Service).

This application simulates a GPU system with multiple cores and memory banks. The main components include:

### 1. **GPU Core (`GpuCore` class)**
   - Each core has an ID and can execute tasks.
   - Tasks are distributed to cores based on availability (idle or busy).
   - Task execution logic is simplified for simulation purposes.

### 2. **Memory Bank (`MemoryBank` class)**
   - Simulates memory read and write operations.
   - Keeps track of addresses and values, simulating a basic memory system.

### 3. **Round-Robin Scheduler (`Scheduler` class)**
   - Distributes tasks across available GPU cores.
   - Uses a round-robin algorithm to assign tasks to cores, ensuring balanced load distribution.

## Technologies Used

- **Windows Subsystem for Linux (WSL)**
- **C++**: For core GPU simulation logic (scheduling, memory management, etc.).
- **Docker**: To containerize the application and run it in isolated environments.
- **AWS ECS (Elastic Container Service)**: For running the containerized application in the cloud.
- **AWS ECR (Elastic Container Registry)**: To store and manage Docker images.
- **Windows Subsystem for Linux (WSL)**: For a Linux environment within Windows for local development.
- **Visual Studio Code**: As the IDE for writing and editing the code.
- **Git & GitHub**: For version control and code hosting.




