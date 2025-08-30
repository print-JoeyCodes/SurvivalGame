#include "gameWorld.hpp"

Entity* GameWorld::CreateEntity(EntityType type, Vector2 position, Vector2 size) {
    Entity newEntity;
    newEntity.id = nextEntityId++;
    newEntity.type = type;
    newEntity.position = position;
    newEntity.size = size;
    newEntity.boundingBox = {position.x, position.y, size.x, size.y};
    newEntity.isActive = true;

    entities.push_back(newEntity);
    return &entities.back();
}

void GameWorld::CreateTree(Vector2 position) {
    Vector2 treeSize = {50, 100};
    Entity* tree = CreateEntity(EntityType::TREE, position, {60.0f, 80.0f});

    HealthComponent treeHealth;
    treeHealth.entityId = tree->id;
    treeHealth.currentHealth = 3;
    treeHealth.maxHealth = 3;
    healthComponents.push_back(treeHealth);

    ResourceComponent treeResource;
    treeResource.entityId = tree->id;
    treeResource.yieldsItem = ItemType::WOOD;
    treeResource.yieldQuantity = 5;
    resourceComponents.push_back(treeResource);
}