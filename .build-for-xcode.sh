#!/bin/bash
# Run this script before opening in Xcode
# It ensures pkg-config paths are set for Xcode

export PKG_CONFIG_PATH="/opt/homebrew/lib/pkgconfig:/opt/homebrew/share/pkgconfig:$PKG_CONFIG_PATH"

# Open Xcode with environment variables
open -a Xcode Package.swift