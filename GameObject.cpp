#include "GameObject.h"

GameObject::GameObject(string type, Appearance * appearance, Transform * transform, ParticleModel * particleModel) : _appearance(appearance), _type(type), _transform(transform), _particleModel(particleModel)
{

}

GameObject::~GameObject()
{
}

void GameObject::Update(float deltaTime)
{
	_particleModel->Update(deltaTime);
	_transform->Update(deltaTime);
}

void GameObject::Draw(ID3D11DeviceContext * pImmediateContext)
{
	_appearance->Draw(pImmediateContext);
}
