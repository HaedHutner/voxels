#include <VoxelChunk.hpp>

VoxelChunk::VoxelChunk(const glm::ivec3 &position,const glm::ivec3 &size) : position(position), size(size)
{
}

const glm::ivec3 &VoxelChunk::GetPosition() const {
    return position;
}

const glm::ivec3 &VoxelChunk::GetSize() const {
    return size;
}

const VoxelMapPtr &VoxelChunk::GetVoxels() const {
    return voxels;
}

const Voxel &VoxelChunk::GetVoxelAt(const glm::vec3 &position) const {
    return voxels->at(position);
}

const Voxel &VoxelChunk::SetVoxelAt(const glm::vec3 &position, const Voxel &voxel) {
    const Voxel &existing = GetVoxelAt(position);

    voxels->emplace(position, voxel);

    return existing;
}