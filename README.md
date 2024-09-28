# Oxebots Interfaces

This package contains the interfaces used by the **Oxebots** team for the **SSL RoboCup league**. The interfaces define custom messages and services for communication between different components of the project, such as the vision system, referee module, and strategy nodes.

## Table of Contents

- [Oxebots Interfaces](#oxebots-interfaces)
  - [Table of Contents](#table-of-contents)
  - [Features](#features)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
  - [Usage](#usage)
  - [Reporting Issues](#reporting-issues)
  - [License](#license)

## Features

- Provides custom ROS2 message and service definitions.
- Facilitates communication between vision, referee, strategy, and other modules.
- Compatible with ROS2 Humble on Ubuntu 22.04.

## Prerequisites

- **Operating System**: Ubuntu 22.04 LTS.
- **ROS2 Distribution**: Humble Hawksbill.

## Installation

To install the package, clone the repository into your colcon workspace and build it:

```bash
# Source your ROS2 environment
source /opt/ros/humble/setup.bash

# Navigate to your colcon workspace
cd ${YOUR_COLCON_WORKSPACE}/src

# Clone the Oxebots Interfaces repository
git clone git@github.com:OxeBots/oxebots_interfaces.git

# Navigate back to the workspace root
cd ..

# Install dependencies
rosdep install --from-paths src --ignore-src -r -i -y --rosdistro=$ROS_DISTRO

# Build the workspace
colcon build --packages-select oxebots_interfaces

# Source the workspace
source install/setup.bash
```

*Note:* This package is part of the Oxebots software stack and is meant to run with other packages from the team. You can find our complete software stack at [OxeBots/software_ws](https://github.com/OxeBots/software_ws).

## Usage

After building the package, you can use the custom messages and services in your ROS2 nodes by importing them. For example:

`Python`:

```python
from oxebots_interfaces.msg import CustomMessage
from oxebots_interfaces.srv import CustomService
```

`C++`:

``` cpp
#include "oxebots_interfaces/msg/CustomMessage.hpp"
#include "oxebots_interfaces/srv/CustomService.hpp"
```

- **Integration**:
  - Include `oxebots_interfaces` in the `find_package` directive of your `CMakeLists.txt` file:

    ```cmake
    find_package(rosidl_default_generators REQUIRED)
    find_package(oxebots_interfaces REQUIRED)
    ```

  - Add `oxebots_interfaces` to the `package.xml` dependencies:

    ```xml
    <depend>oxebots_interfaces</depend>
    ```

- **Building Your Package**:
  - Ensure your package is built after `oxebots_interfaces` by specifying it in the `colcon build` command if necessary.

## Reporting Issues

If you encounter any issues or have suggestions for improvements, please open an issue on the [GitHub repository](https://github.com/OxeBots/oxebots_interfaces/issues).

## License

This project is licensed under the **GPL-3.0 license** - see the [LICENSE](LICENSE) file for details.
