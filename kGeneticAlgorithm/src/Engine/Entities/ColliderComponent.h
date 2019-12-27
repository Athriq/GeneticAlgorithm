#pragma once

#include "EntitySystem.h"
#include "Components.h"

#include "SDL.h"

#include <string>

class ColliderComponent : public Component {
public:
	SDL_Rect collider;
	std::string tag;

	TransformComponent* transform;

	void OnInit() override {
		if (!entity->hasComponent<TransformComponent>()) {
			entity->AddComponent<TransformComponent>();
		}
		transform = &entity->GetComponent<TransformComponent>();
	}

	void OnUpdate() override {
		collider.x = transform->position.x;
		collider.y = transform->position.y;
		collider.w = transform->width * transform->scale;
		collider.h = transform->height * transform->scale;
	}

};