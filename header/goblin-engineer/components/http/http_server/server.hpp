#pragma once

#include <goblin-engineer.hpp>
#include <goblin-engineer/components/network.hpp>

namespace goblin_engineer { namespace components { namespace http_server {

    class server final : public network_manager_service {
    public:
        server(
                goblin_engineer::root_manager *,
                goblin_engineer::dynamic_config &
        );

        ~server() override = default;

    private:
        class impl;

        std::shared_ptr<impl> pimpl;
    };

}}}