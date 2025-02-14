# Copyright 2022 Proyectos y Sistemas de Mantenimiento SL (eProsima).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

#################################################
# Yaml GetConfigurations CommonParticipant Test #
#################################################

set(TEST_NAME YamlGetCommonParticipantConfigurationTest)

set(TEST_SOURCES
        ${PROJECT_SOURCE_DIR}/src/cpp/yaml_configuration_tags.cpp
        ${PROJECT_SOURCE_DIR}/src/cpp/YamlReader.cpp
        ${PROJECT_SOURCE_DIR}/test/TestUtils/test_utils.cpp
        YamlGetCommonParticipantConfigurationTest.cpp
        YamlGetCommonParticipantConfigurationTest.cpp
    )

set(TEST_LIST
        get_participant
        get_participant_negative
    )

set(TEST_EXTRA_LIBRARIES
        yaml-cpp
        fastcdr
        fastrtps
        ddsrouter_utils
        ddsrouter_event
        ddsrouter_core
    )

add_unittest_executable(
    "${TEST_NAME}"
    "${TEST_SOURCES}"
    "${TEST_LIST}"
    "${TEST_EXTRA_LIBRARIES}")

#################################################
# Yaml GetConfigurations SimpleParticipant Test #
#################################################

set(TEST_NAME YamlGetSimpleParticipantConfigurationTest)

set(TEST_SOURCES
        ${PROJECT_SOURCE_DIR}/src/cpp/yaml_configuration_tags.cpp
        ${PROJECT_SOURCE_DIR}/src/cpp/YamlReader.cpp
        ${PROJECT_SOURCE_DIR}/test/TestUtils/test_utils.cpp
        YamlGetSimpleParticipantConfigurationTest.cpp
    )

set(TEST_LIST
        get_participant
        get_participant_negative
    )

set(TEST_EXTRA_LIBRARIES
        yaml-cpp
        fastcdr
        fastrtps
        ddsrouter_utils
        ddsrouter_event
        ddsrouter_core
    )

add_unittest_executable(
    "${TEST_NAME}"
    "${TEST_SOURCES}"
    "${TEST_LIST}"
    "${TEST_EXTRA_LIBRARIES}")

##########################################################
# Yaml GetConfigurations DiscoveryServerParticipant Test #
##########################################################

set(TEST_NAME YamlGetDiscoveryServerParticipantConfigurationTest)

set(TEST_SOURCES
        ${PROJECT_SOURCE_DIR}/src/cpp/yaml_configuration_tags.cpp
        ${PROJECT_SOURCE_DIR}/src/cpp/YamlReader.cpp
        ${PROJECT_SOURCE_DIR}/test/TestUtils/test_utils.cpp
        YamlGetDiscoveryServerParticipantConfigurationTest.cpp
    )

set(TEST_LIST
        get_participant_minimum
        get_participant_domain
        get_participant_listening_addresses
        get_participant_connection_addresses
        get_participant_tls
        get_participant_negative
    )

set(TEST_EXTRA_LIBRARIES
        yaml-cpp
        fastcdr
        fastrtps
        ddsrouter_utils
        ddsrouter_event
        ddsrouter_core
    )

add_unittest_executable(
    "${TEST_NAME}"
    "${TEST_SOURCES}"
    "${TEST_LIST}"
    "${TEST_EXTRA_LIBRARIES}")
