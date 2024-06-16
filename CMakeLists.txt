cmake_minimum_required(VERSION 3.8)
project(oxebots_interfaces)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Required packages
set(REQUIRED_PACKAGES
    action_msgs
    ament_cmake
    geometry_msgs
    Protobuf
    rosidl_default_generators
    sensor_msgs
    std_msgs
)

foreach(pkg ${REQUIRED_PACKAGES})
    find_package(${pkg} REQUIRED)
endforeach()

set(PROTOBUF_FILES

    # grSim
    proto/grSim/grSim_Commands.proto
    proto/grSim/grSim_Packet.proto
    proto/grSim/grSim_Replacement.proto
    proto/grSim/grSim_Robotstatus.proto
    proto/grSim/ssl_gc_common.proto
    proto/grSim/ssl_simulation_config.proto
    proto/grSim/ssl_simulation_control.proto
    proto/grSim/ssl_simulation_error.proto
    proto/grSim/ssl_simulation_robot_control.proto
    proto/grSim/ssl_simulation_robot_feedback.proto
    proto/grSim/ssl_simulation_synchronous.proto
    proto/grSim/ssl_vision_detection.proto
    proto/grSim/ssl_vision_geometry.proto
    proto/grSim/ssl_vision_wrapper.proto
)

set(MSG_FILES
    msg/vision/DetectionBall.msg
)

set(ACTION_FILES
)

set(SERVICE_FILES
    srv/Substitute.srv
)

protobuf_generate_cpp(
    PROTOBUF_SRCS
    PROTOBUF_HDRS
    ${PROTOBUF_FILES}
)

rosidl_generate_interfaces(${PROJECT_NAME}
    ${MSG_FILES}
    ${ACTION_FILES}
    ${SERVICE_FILES}
    DEPENDENCIES ${REQUIRED_PACKAGES}
)

add_library(${PROJECT_NAME}_proto SHARED
    ${PROTOBUF_HDRS}
    ${PROTOBUF_SRCS}
)

target_link_libraries(${PROJECT_NAME}_proto
    protobuf::libprotobuf
)

target_include_directories(${PROJECT_NAME}_proto
    INTERFACE
    $<BUILD_INTERFACE:${CMAKE_BINARY_DIR}>
    $<INSTALL_INTERFACE:include>
)

target_compile_options(${PROJECT_NAME}_proto PRIVATE -Wno-deprecated-declarations)

ament_export_targets(${PROJECT_NAME}_proto HAS_LIBRARY_TARGET)
ament_export_dependencies(Protobuf)

install(
    DIRECTORY ${CMAKE_BINARY_DIR}
    DESTINATION include
)

install(TARGETS ${PROJECT_NAME}_proto
    EXPORT ${PROJECT_NAME}_proto
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
    RUNTIME DESTINATION bin
    INCLUDES DESTINATION include
)

ament_export_dependencies(rosidl_default_runtime)

if(BUILD_TESTING)
    find_package(ament_lint_auto REQUIRED)
    set(ament_cmake_copyright_FOUND TRUE)
    ament_lint_auto_find_test_dependencies()
endif()

ament_package()