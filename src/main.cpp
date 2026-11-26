name: Build Geode Mod (Android)

on:
  push:
    branches: [ main, master ]
  workflow_dispatch:

jobs:
  build:
    name: Build Android Mod
    uses: geode-sdk/build-geode-mod/.github/workflows/build.yml@main
    with:
      platforms:
        - android32
        - android64
          
