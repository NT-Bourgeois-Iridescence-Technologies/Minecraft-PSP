#pragma once

#include <Aurealis/Math/Vector3.h>
#include <Aurealis/Graphics/Vertex.h>
#include <pspmath.h>
#include <World/Data/SharedTextureData.h>
#include <World/CraftWorld2.h>

namespace Aurealis
{
	namespace Graphics
	{
		class InventoryPlayer
		{
		public:
			InventoryPlayer();
			~InventoryPlayer();

			void Update();
			void Render(CraftWorld *world, float dt, float angle, Texture* tex, int handItemId);

			float mainAngle;
			float scale;
			float animT;

		private:

            float rHandAngle;
            float lHandAngle;
            float rLegAngle;
            float lLegAngle;

            Vector3 position;
		};
	}
}
