# GPU Simulator

This project simulates a simple GPU environment using C++ and Docker, running on AWS. It includes the simulation of GPU cores, memory banks, and a round-robin scheduler to assign tasks to the GPU cores.

![Screenshot 2024-10-01 140406](https://github.com/user-attachments/assets/b23215ad-7c87-4419-9a88-24ce80d0894d)

## Project Overview

This application simulates a GPU system with multiple cores and memory banks. The main components include:
- **GPU Core Simulation**: Each core can run tasks and maintain an idle or busy state.
- **Memory Bank Simulation**: Simulates memory banks that support reading and writing values.
- **Round-Robin Scheduler**: Distributes tasks across multiple cores in a round-robin fashion.

The application is containerized using Docker and can be deployed in a cloud environment using AWS ECS (Elastic Container Service).

## Project Components

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

## Getting Started

### Prerequisites

- **Windows Subsystem for Linux (WSL)**
- **Docker**
- **AWS CLI** and **AWS Account** (for cloud deployment)
- **Visual Studio Code** (optional for code editing)

### Setting Up WSL

1. Install **WSL 2**:
   ```bash
   wsl --install
