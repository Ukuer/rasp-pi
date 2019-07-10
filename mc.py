from mcpi.minecraft import Minecraft
mc = Minecraft.create()

postion = mc.player.getTilePos() 

mc.player.setPos(0, 0, 0)


import mcpi.block as block

def getSafePos(x_pos, y_pos, z_pos):
    block_id = mc.getBlock(x_pos, y_pos, z_pos)
    if block_id == block.AIR.id:
        while block_id == block_AIR_id:
            y_pos -= 1
            block_id = mc.getBlock(x_pos, y_pos, z_pos)
        y_pos += 1

    else:
        while block_id != block/AIR.id:
            y_pos += 1
            block_id = getBlock(x_pos, y_pos, z_pos)

        return (x_pos, y_pos, z_pos)


def buildHouse(hp, sx, sy, sz):
    mc.setBlocks(
            hp.x - (sx/2),
            hp.y,
            hp.z - (sz/2),
            hp.x + (sx/2),
            hp.y + sy,
            hp.z + (sz/2,),
            block.AIR.id)
