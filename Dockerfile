# Use an official Ubuntu image
FROM ubuntu:20.04

# Install build-essential for C++ compilation
RUN apt update && apt install -y build-essential

# Copy the C++ source code to the container
COPY gpu_simulator.cpp /app/gpu_simulator.cpp

# Set the working directory
WORKDIR /app

# Compile the C++ program
RUN g++ -o gpu_simulator gpu_simulator.cpp

# Command to run the simulator
CMD ["./gpu_simulator"]
