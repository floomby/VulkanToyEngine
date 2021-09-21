#include "instance.hpp"

Instance::Instance(Entity* entity, InternalTexture* texture, SceneModelInfo* sceneModelInfo) noexcept {
    this->entity = entity;
    this->texture = texture;
    this->sceneModelInfo = sceneModelInfo;
    state.model = glm::mat4(1.0f);
};

Instance& Instance::transform(glm::mat4 transformationMatrix) noexcept {
    state.model *= transformationMatrix;
    return *this;
};