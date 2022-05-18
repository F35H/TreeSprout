#include "genTypes.h"

inline void setSpriteSize(sprite* s,int sizeX, int sizeY){
  s->size.x = sizeX;
  s->size.y = sizeY; };

inline void setSpritePos(sprite* s,int posX, int posY){
  s->vlcty = vlcty;
  s->pos.x = posX;
  s->pos.y = posY;
  
  s->pPos = s->pos;  
  
  s->nPos.x = 0.0f;
  s->nPos.y = 0.0f;  };
  
inline void setSpriteCllsn(sprite* s, int colX, int colY, int colZ){
  s->cllsn.y = colY;
  s->cllsn.x = colX;
  s->cllsn.z = colZ; };
  