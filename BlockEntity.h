#ifndef BlockEntity_h
#define BlockEntity_h

#include <string>
#include "globals.h"

class BlockEntity
{
public:
    Pos position;
    std::string entity_id;

    BlockEntity() {}

    BlockEntity(const Pos &position_, const char *id_)
        : position(position_), entity_id(id_) {}

private:
};

class BlockEntityNote : public BlockEntity
{
public:
    int note;
    int powered;

    BlockEntityNote() {}

    BlockEntityNote(const Pos &position_,
                    const int &note_, const int &powered_)
        : BlockEntity(position_, "minecraft:noteblock"),
          note(note_), powered(powered_) {}

private:
};

class BlockEntityCommand : public BlockEntity
{
public:
    std::string command;

    BlockEntityCommand() {}

    BlockEntityCommand(const Pos &position_,
                       const std::string &command_)
        : BlockEntity(position_, "minecraft:command_block"),
          command(command_) {}

private:            
};

#endif /* BlockEntity_h */