#pragma once
#include "Marchand.h"
class MarchandManager
{
	private:
		std::unique_ptr<Marchand> marchand;
	public:
		void InitializeMarchand();
		Marchand* GetMarchand();
		MarchandManager() {};
		~MarchandManager() {};
		void CreateShopInventory();

};

