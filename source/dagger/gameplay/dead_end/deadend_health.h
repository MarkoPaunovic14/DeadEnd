#pragma once
#include "core/system.h"
#include "core/engine.h"
#include "core/core.h"

#include "core/graphics/sprite.h"
using namespace dagger;


namespace dead_end
{
    struct Health
    {
        Float32 currentHealth;
        Float32 maxHealth;
    };

    class HealthSystem 
        : public System
    {
    public:
        inline String SystemName() override { return "Health system"; }
        
        void Run() override;
    };
}
