#pragma once
#include "entityTypes.hpp"
#include "/opt/homebrew/opt/raylib/include/raylib.h"


struct Entity {
    int id;
    EntityType type;
    Vector2 position;
    Vector2 size;
    Rectangle boundingBox;
    bool isActive;
};

struct HealthComponent {
    int entityId;
    int currentHealth;
    int maxHealth;
};

struct ResourceComponent {
    int entityId;
    ItemType yieldsItem;
    int yieldQuantity;
};

struct InventoryComponent {
    int entityId;
    int woodCount;
};