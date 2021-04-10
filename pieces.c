#include "headers.h"
#include "pieces.h"

const int piece[43][5][5] = {  {
                        { 0, 0, 0, 0, 0},
                        { 0, 0, 0, 0, 0},
                        { 0, 0, 0, 0, 0},
                        { 0, 0, 0, 0, 0},
                        { 0, 0, 0, 0, 0},},

                        {                   
                        {-1,-1,-1, 0, 0},
                        {-1, 1, 0, 0, 0},
                        {-1, 0, 0, 0, 0},
                        { 0, 0, 0, 0, 0},
                        { 0, 0, 0, 0, 0},},

                        {                       
                        { 0,-1,-1,-1 ,0}, 
                        { 0, 0, 1, 0 ,0},
                        { 0, 0, 0, 0 ,0},
                        { 0, 0, 0, 0 ,0},
                        { 0, 0, 0, 0 ,0},},

                        {                   
                        { 0, 0,-1,-1,-1}, 
                        { 0, 0, 0, 1,-1},
                        { 0, 0, 0, 0,-1},
                        { 0, 0, 0, 0, 0},
                        { 0, 0, 0, 0, 0},},

                        {                   
                        { 0, 0, 0, 0, 0}, 
                        {-1, 0, 0, 0, 0},
                        {-1, 1, 0, 0, 0},
                        {-1, 0, 0, 0, 0},
                        { 0, 0, 0, 0, 0},},

                        {                   
                        { 0, 0, 0, 0, 0}, 
                        { 0, 0, 0, 0, 0},
                        { 0, 0, 1, 0, 0},
                        { 0, 0, 0, 0, 0},
                        { 0, 0, 0, 0, 0},},

                        {                   
                        { 0, 0, 0, 0, 0}, 
                        { 0, 0, 0, 0,-1},
                        { 0, 0, 0, 1,-1},
                        { 0, 0, 0, 0,-1},
                        { 0, 0, 0, 0, 0},},

                        {                   
                        { 0, 0, 0, 0, 0},
                        { 0, 0, 0, 0, 0},
                        {-1, 0, 0, 0, 0},
                        {-1, 1, 0, 0, 0},
                        {-1,-1,-1, 0, 0},},

                        {                   
                        { 0, 0, 0, 0, 0},
                        { 0, 0, 0, 0, 0},
                        { 0, 0, 0, 0, 0},
                        { 0, 0, 1, 0, 0},
                        { 0,-1,-1,-1, 0},},

                        {                   
                        { 0, 0, 0, 0, 0},
                        { 0, 0, 0, 0, 0},
                        { 0, 0, 0, 0,-1},
                        { 0, 0, 0, 1,-1},
                        { 0, 0,-1,-1,-1},},

                        {                   
                        {-1,-1,-1,-1, 0},
                        {-1, 2, 2, 0, 0},
                        {-1, 0, 0, 0, 0},
                        { 0, 0, 0, 0, 0},
                        { 0, 0, 0, 0, 0},},

                        {                   
                        { 0,-1,-1,-1,-1},
                        { 0, 0, 2, 2,-1},
                        { 0, 0, 0, 0,-1},
                        { 0, 0, 0, 0, 0},
                        { 0, 0, 0, 0, 0},},

                        {                   
                        { 0, 0, 0, 0, 0},
                        {-1, 0, 0, 0, 0},
                        {-1, 2, 2, 0, 0},
                        {-1, 0, 0, 0, 0},
                        { 0, 0, 0, 0, 0},},

                        {                   
                        { 0, 0, 0, 0, 0},
                        { 0, 0, 0, 0,-1},
                        { 0, 0, 2, 2,-1},
                        { 0, 0, 0, 0,-1},
                        { 0, 0, 0, 0, 0},},

                        {                   
                        { 0, 0, 0, 0, 0},
                        { 0, 0, 0, 0, 0},
                        {-1, 0, 0, 0, 0},
                        {-1, 2, 2, 0, 0},
                        {-1,-1,-1,-1, 0},},

                        {                   
                        { 0, 0, 0, 0, 0},
                        { 0, 0, 0, 0, 0},
                        { 0, 0, 0, 0,-1},
                        { 0, 0, 2, 2,-1},
                        { 0,-1,-1,-1,-1},},

                        {                   
                        {-1,-1,-1, 0, 0},
                        {-1, 2, 0, 0, 0},
                        {-1, 2, 0, 0, 0},
                        {-1, 0, 0, 0, 0},
                        { 0, 0, 0, 0, 0},},

                        {                   
                        { 0, 0, 0, 0, 0},
                        {-1, 0, 0, 0, 0},
                        {-1, 2, 0, 0, 0},
                        {-1, 2, 0, 0, 0},
                        {-1,-1,-1, 0, 0},},

                        {                   
                        { 0,-1,-1,-1, 0},
                        { 0, 0, 2, 0, 0},
                        { 0, 0, 2, 0, 0},
                        { 0, 0, 0, 0, 0},
                        { 0, 0, 0, 0, 0},},

                        {                   
                        { 0, 0, 0, 0, 0},
                        { 0, 0, 0, 0, 0},
                        { 0, 0, 2, 0, 0},
                        { 0, 0, 2, 0, 0},
                        { 0,-1,-1,-1, 0},},

                        {                   
                        { 0, 0,-1,-1,-1},
                        { 0, 0, 0, 2,-1},
                        { 0, 0, 0, 2,-1},
                        { 0, 0, 0, 0,-1},
                        { 0, 0, 0, 0, 0},},

                        {               
                        { 0, 0, 0, 0, 0},
                        { 0, 0, 0, 0,-1},
                        { 0, 0, 0, 2,-1},
                        { 0, 0, 0, 2,-1},
                        { 0, 0,-1,-1,-1},},

                        {                   
                        {-1,-1,-1,-1,-1},
                        {-1, 3, 3, 3,-1},
                        {-1, 0, 0, 0,-1},
                        { 0, 0, 0, 0, 0},
                        { 0, 0, 0, 0, 0},},

                        {                   
                        { 0, 0, 0, 0, 0},
                        {-1, 0, 0, 0,-1},
                        {-1, 3, 3, 3,-1},
                        {-1, 0, 0, 0,-1},
                        { 0, 0, 0, 0, 0},},

                        {               
                        { 0, 0, 0, 0, 0},
                        { 0, 0, 0, 0, 0},
                        {-1, 0, 0, 0,-1},
                        {-1, 3, 3, 3,-1},
                        {-1,-1,-1,-1,-1},},

                        {                   
                        {-1,-1,-1, 0, 0},
                        {-1, 3, 0, 0, 0},
                        {-1, 3, 0, 0, 0},
                        {-1, 3, 0, 0, 0},
                        {-1,-1,-1, 0, 0},},

                        {                   
                        { 0,-1,-1,-1, 0},
                        { 0, 0, 3, 0, 0},
                        { 0, 0, 3, 0, 0},
                        { 0, 0, 3, 0, 0},
                        { 0,-1,-1,-1, 0},},

                        {                   
                        { 0, 0,-1, 0, -1},
                        { 0, 0, 0, 3, -1},
                        { 0, 0, 0, 3, -1},
                        { 0, 0, 0, 3, -1},
                        { 0, 0,-1,-1, -1},},

                        {                   
                        {-1,-1,-1,-1, 0},
                        {-1, 4, 4, 0, 0},
                        {-1, 4, 4, 0, 0},
                        {-1, 0, 0, 0, 0},
                        { 0, 0, 0, 0, 0},},

                        {                   
                        { 0,-1,-1,-1,-1},
                        { 0, 0, 4, 4,-1},
                        { 0, 0, 4, 4,-1},
                        { 0, 0, 0, 0,-1},
                        { 0, 0, 0, 0, 0},},

                        {               
                        { 0, 0, 0, 0, 0},
                        {-1, 0, 0, 0, 0},
                        {-1, 4, 4, 0, 0},
                        {-1, 4, 4, 0, 0},
                        {-1,-1,-1,-1, 0},},

                        {                   
                        { 0, 0, 0, 0, 0},
                        { 0, 0, 0, 0,-1},
                        { 0, 0, 4, 4,-1},
                        { 0, 0, 4, 4,-1},
                        { 0,-1,-1,-1,-1},},

                        {                   
                        {-1,-1,-1,-1,-1},
                        {-1, 5, 5, 5,-1},
                        {-1, 0, 5, 0,-1},
                        { 0, 0, 5, 0, 0},
                        { 0,-1,-1,-1, 0},},

                        {               
                        {-1,-1,-1, 0, 0},
                        {-1, 5, 0, 0,-1},
                        {-1, 5, 5, 5,-1},
                        {-1, 5, 0, 0,-1},
                        {-1,-1,-1, 0, 0},},

                        {                   
                        { 0,-1,-1,-1, 0},
                        { 0, 0, 5, 0, 0},
                        {-1, 0, 5, 0,-1},
                        {-1, 5, 5, 5,-1},
                        {-1,-1,-1,-1,-1},},

                        {               
                        { 0, 0,-1,-1,-1},
                        {-1, 0, 0, 5,-1},
                        {-1, 5, 5, 5,-1},
                        {-1, 0, 0, 5,-1},
                        { 0, 0,-1,-1,-1},},

                        {                   
                        { 0,-1,-1,-1, 0},
                        {-1, 0, 6, 0,-1},
                        {-1, 6, 0, 6,-1},
                        {-1, 6, 6, 6,-1},
                        {-1,-1,-1,-1,-1},},

                        {                   
                        { 0,-1,-1,-1,-1},
                        {-1, 0, 6, 6,-1},
                        {-1, 6, 0, 6,-1},
                        {-1, 0, 6, 6,-1},
                        { 0,-1,-1,-1,-1},},

                        {                   
                        {-1,-1,-1,-1,-1},
                        {-1, 6, 6, 6,-1},
                        {-1, 6, 0, 6,-1},
                        {-1, 0, 6, 0,-1},
                        { 0,-1,-1,-1, 0},},

                        {                   
                        {-1,-1,-1,-1, 0},
                        {-1, 6, 6, 0,-1},
                        {-1, 6, 0, 6,-1},
                        {-1, 6, 6, 0,-1},
                        {-1,-1,-1,-1, 0},},

                        {                   
                        {-1,-1,-1,-1,-1},
                        {-1, 7, 0, 7,-1},
                        {-1, 7, 7, 7,-1},
                        {-1, 7, 0, 7,-1},
                        {-1,-1,-1,-1,-1},},

                        {                   
                        {-1,-1,-1,-1,-1},
                        {-1, 7, 7, 7,-1},
                        {-1, 0, 7, 0,-1},
                        {-1, 7, 7, 7,-1},
                        {-1,-1,-1,-1,-1},},

                        {                   
                        {-1,-1,-1,-1,-1},
                        {-1, 8, 8, 8,-1},
                        {-1, 8, 0, 8,-1},
                        {-1, 8, 8, 8,-1},
                        {-1,-1,-1,-1,-1},}

};

/*Esta função irá returnar o identificador global das peças em função do 
identificador da peça e da variante
*/

int global_id_returner(int type_id, int instance_id)
{
    switch (type_id)
    {
        case 1:
            return instance_id;    

        case 2:
            return instance_id + 9;

        case 3:
            return instance_id + 21;

        case 4:
            return instance_id + 27;

        case 5:
            return instance_id + 31;

        case 6:
            return instance_id + 35;

        case 7:
            return instance_id + 39;

        case 8:
            return 42;
    }
    return 0;
}


//esta função identifica a posição das peças no tabuleiro em função com o identificador global
void positioning_pieces(int x, int y, int global_id, int board[17][26])
{
    for (int i = 0; i < 5; i++){
        for (int d = 0; d < 5; d++){
            if (piece[global_id][i][d] > 0 || (piece[global_id][i][d] == -1 && board [y - 1 + i][x - 1 + d] == 0))
                board[y - 1 + i][x - 1 + d] = piece[global_id][i][d];
        }
    }
    
}

int instance_generator(int type)
{
    int instance = 0;
    switch (type)
    {
    case 1:
        instance = (rand() % 9) + 1;
        break;
    
    case 2:
        instance = (rand() % 12) + 1;
        break;
    
    case 3:
        instance = (rand() % 6) + 1;
        break;
    
    case 4:
    case 5:
    case 6:
        instance = (rand() % 4) + 1;
        break;
    
    case 7:
        instance = (rand() % 2) + 1;
        break;

    case 8: 
        instance = 1;
    default:
        instance = 0;
        break;
    }
    return instance;
}

int max_instance(int type)
{
    int max = 0;
    if (type == 1)
        max = 9;
    if (type == 2)
        max = 12;
    if (type == 3)
        max = 6;
    if (type > 3 && type < 7)
        max = 4;
    if (type == 7)
        max = 2;
    if (type == 8)
        max = 1;
    return max;
}

int global_id_to_type(int global_id)
{
    if (global_id == 0){
        return 0;
    }
    else if (global_id < 10){
        return 1;
    }
    else if (global_id < 22){
        return 2;
    }
    else if (global_id < 28){
        return 3;
    }
    else if (global_id < 32){
        return 4;
    }
    else if (global_id < 36){
        return 5;
    }
    else if (global_id < 40){
        return 6;
    }
    else if (global_id < 42){
        return 7;
    }
    else{
        return 8;
    }
}
