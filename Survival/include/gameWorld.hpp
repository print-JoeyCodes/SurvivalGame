#pragma once
#include <vector>
#include "entity.hpp"

class GameWorld {
public:
    int nextEntityId = 0;
    std::vector<Entity> entities;

    std::vector<HealthComponent> healthComponents;
    std::vector<ResourceComponent> resourceComponents;
    std::vector<InventoryComponent> inventoryComponents;

    Entity* CreateEntity(EntityType type, Vector2 position, Vector2 size);
    void CreateTree(Vector2 position);
    void CreatePlayer(Vector2 position);
    HealthComponent* GetHealthComponent(int entityId);
};
