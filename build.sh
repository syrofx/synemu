#!/bin/bash

echo "Building project"

BUILD_DIR="build"

if [ ! -d "$BUILD_DIR" ]; then
    echo "Creating '$BUILD_DIR' folder..."
    mkdir "$BUILD_DIR"
fi

cd "$BUILD_DIR" || exit 1

if [ ! -f "CMakeCahce.txt" ]; then
    echo "Generating cmake cache"
    cmake ..
fi

echo "Building project"
cmake --build .

echo "Build finished successully."
