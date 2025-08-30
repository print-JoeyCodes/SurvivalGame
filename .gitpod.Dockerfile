FROM gitpod/workspace-base:latest

# Install dependencies
RUN sudo apt-get update && \
    sudo apt-get install -y \
    build-essential \
    cmake \
    libgl1-mesa-dev \
    libglu1-mesa-dev \
    libxi-dev \
    libxrandr-dev \
    libxcursor-dev \
    libxinerama-dev \
    libasound2-dev \
    libudev-dev

# Install Raylib
RUN git clone https://github.com/raysan5/raylib.git /tmp/raylib && \
    cd /tmp/raylib/src && \
    make PLATFORM=PLATFORM_DESKTOP && \
    sudo make install && \
    sudo rm -rf /tmp/raylib
