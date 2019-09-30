#pragma once

#include <goblin-engineer/abstract_manager_service.hpp>

#include <boost/asio.hpp>

namespace goblin_engineer { namespace components{

    class network_manager_service : public abstract_manager_service {
    public:

        network_manager_service(dynamic_environment* env,actor_zeta::detail::string_view name,std::size_t concurrency_hint)
            : abstract_manager_service(env, name )
            , io_context_(concurrency_hint)
            {
        }

        auto loop() -> boost::asio::io_context& {
            return io_context_;
        }

    protected:
        boost::asio::io_context io_context_;
    };

}}