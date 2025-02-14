// Copyright 2021 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/**
 * @file SimpleParticipantConfiguration.cpp
 */

#include <ddsrouter_core/configuration/participant/SimpleParticipantConfiguration.hpp>
#include <ddsrouter_utils/Log.hpp>

namespace eprosima {
namespace ddsrouter {
namespace core {
namespace configuration {

using namespace eprosima::ddsrouter::core::types;

const DomainId SimpleParticipantConfiguration::DEFAULT_DOMAIN_ID_(0u);

SimpleParticipantConfiguration::SimpleParticipantConfiguration(
        const ParticipantId& id,
        const ParticipantKind& kind /* = ParticipantKind::SIMPLE_RTPS */,
        const DomainId& domain_id /* = DEFAULT_DOMAIN_ID_ */) noexcept
    : ParticipantConfiguration(id, kind)
    , domain_(domain_id)
{
}

bool SimpleParticipantConfiguration::is_valid(
        utils::Formatter& error_msg) const noexcept
{
    if (!ParticipantConfiguration::is_valid(error_msg))
    {
        return false;
    }

    if (!domain_.is_valid())
    {
        error_msg << "Incorrect domain " << domain_ << ". ";
        return false;
    }

    return true;
}

DomainId SimpleParticipantConfiguration::domain() const noexcept
{
    return domain_;
}

bool SimpleParticipantConfiguration::operator ==(
        const SimpleParticipantConfiguration& other) const noexcept
{
    return ParticipantConfiguration::operator ==(
        other) &&
           this->domain_ == other.domain_;
}

} /* namespace configuration */
} /* namespace core */
} /* namespace ddsrouter */
} /* namespace eprosima */
