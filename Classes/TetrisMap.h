#pragma once
#include "TetrisParticleManager.h"

/* define */
class TetrisGameScene;
typedef std::array<std::array<bool, MAX_COLS>, MAX_ROWS> conceptual_map;
typedef std::array<std::array<shared_ptr<Block>, MAX_COLS>, MAX_ROWS> concrete_map;

class TetrisManager;

class TetrisMap : public TetrominoOrderer
{
public:
    TetrisMap(const shared_ptr<TetrisManager>& manager);
    ~TetrisMap();

private:
    void findBingo();
    void deleteLine(const int& line);
    void fall(const int& line);
    int rowIndex(const int& i) const;

public:
    void init(TetrisGameScene *scene);
    bool update();
    bool isAccessible(const TCoord& _coord);
    void setTetromino(const shared_ptr<Tetromino>& tetromino) { _tetromino = tetromino; }
    void reset();

    void tetrominoUpdate(const shared_ptr<Tetromino>& tetromino) override
    {
        _tetromino = tetromino;
    }

    void setManager(const shared_ptr<TetrisManager>& manager);

private:
    concrete_map _concreteMap;
    conceptual_map _conceptualMap;
    shared_ptr<Tetromino> _tetromino;
    weak_ptr<TetrisManager> _manager;
    unique_ptr<TetrisParticleManager> _particleManager;

    function<void(const shared_ptr<Block> &)> _collector;
};
