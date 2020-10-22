#include <iostream>
#include "assimp/scene.h"
#include "assimp/Importer.hpp"
#include "assimp/postprocess.h"

int main()
try {
	Assimp::Importer import;
	const aiScene* scene = import.ReadFile("resources/Fish_fbx/fishFBX.FBX", aiProcess_Triangulate | aiProcess_FlipUVs);
    std::cout << "NO CRASH\n";
}
catch (const std::exception& ex)
{
	std::cerr << "Main exception: " << ex.what() << std::endl;
	std::cin.get();
}
catch (...)
{
	std::cerr << "\n\nUNSPESIFIED EXCEPTION!!!\n\n";
	std::cin.get();
}