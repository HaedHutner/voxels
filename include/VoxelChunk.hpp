#include <map>
#include <memory>

#include <glm/glm.hpp>

#include <Voxel.hpp>

bool operator<(const glm::vec3 &lhs, const glm::vec3 &rhs)
{
    return lhs.x < rhs.x || lhs.x == rhs.x && (lhs.y < rhs.y || lhs.y == rhs.y && lhs.z < rhs.z);
}

typedef std::unique_ptr<std::map<const glm::ivec3, const Voxel>> VoxelMapPtr;

class VoxelChunk {

private:

    glm::ivec3 position;

    glm::ivec3 size;

    VoxelMapPtr voxels;

public:

    VoxelChunk(
        const glm::ivec3 &position,
        const glm::ivec3 &size
    );

    const glm::ivec3& GetPosition() const;

    const glm::ivec3& GetSize() const;

    const VoxelMapPtr& GetVoxels() const;

    const Voxel& SetVoxelAt(const glm::vec3 &position, const Voxel &voxel);

    const Voxel& GetVoxelAt(const glm::vec3 &position) const;

    ~VoxelChunk();

};