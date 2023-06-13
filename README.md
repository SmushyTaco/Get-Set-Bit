# Get-Set-Bit
A Simple C Library For Bit Manipulation
## Usage

In your `CMakeLists.txt`, add the following:

```cmake
include(FetchContent)

FetchContent_Declare(
  get_set_bit
  GIT_REPOSITORY https://github.com/SmushyTaco/Get-Set-Bit.git
  GIT_TAG        main
)

FetchContent_MakeAvailable(get_set_bit)

target_link_libraries(your_target get_set_bit)
```
