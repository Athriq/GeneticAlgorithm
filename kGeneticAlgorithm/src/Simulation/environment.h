#pragma once
#include "species.h"
#include "config.h"

#include <vector>

class Environment
{
public:
	Environment() = default;
	~Environment() {}

	void addSpeciesToEnvironment(const std::string& name,
		const std::string& genus, const std::string& epithet);

	Species* getSpecies(const Species* species);

	uint64_t getSpeciesCount() const;

	// Spawn cell of a given species randomly
	// around the environment
	//void spawnCell(Species& species, int amount);

	// Spawn given amount of food to be randomly
	// scattered around the environment
	void spawnNutrients(int amount);
};

