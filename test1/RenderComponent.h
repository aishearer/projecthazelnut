#pragma once
#include "stdafx.h"

using namespace std;

class RenderComponent {
public:
	RenderComponent(unsigned id, sf::Sprite& sprite);
	~RenderComponent();

	void draw(sf::RenderWindow& rw);


private:
	sf::Sprite _sprite;
	unsigned _id;
};